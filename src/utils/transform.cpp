#include "utils/transform.h"
#include <vendor/glad/glad.h>
#include <GLFW/glfw3.h>
#include <vendor/glm/glm/glm.hpp>
#include <vendor/glm/glm/gtc/matrix_transform.hpp>
#include <vendor/glm/glm/gtc/type_ptr.hpp>

glm::mat4 Transform::getModelMatrix() const
{
    glm::mat4 model = glm::mat4(1.0f);
    model = glm::translate(model, position);
    model = glm::rotate(model, glm::radians(rotation.x), glm::vec3(1, 0, 0));
    model = glm::rotate(model, glm::radians(rotation.y), glm::vec3(0, 1, 0));
    model = glm::rotate(model, glm::radians(rotation.z), glm::vec3(0, 0, 1));
    model = glm::scale(model, scale);
    return model;
}