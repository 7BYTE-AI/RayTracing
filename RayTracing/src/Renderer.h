#include "Image.h"

#include <glm/glm.hpp>

#include <memory>
#include <vector>


class Renderer
{
public:
	Renderer() = delete;

	static void Render();
	static void OnResize(uint32_t width, uint32_t height);
	static const std::unique_ptr<Image>& GetFinalImage() { return m_FinalImage; }

private:
	static glm::vec4 FragmentShader(glm::vec2 coord);

private:
	static std::unique_ptr<Image> m_FinalImage;
	static std::vector<uint32_t> m_ImageData;
};
