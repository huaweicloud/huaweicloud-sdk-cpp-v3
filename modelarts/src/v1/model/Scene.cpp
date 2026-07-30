

#include "huaweicloud/modelarts/v1/model/Scene.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




Scene::Scene()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    stepsIsSet_ = false;
}

Scene::~Scene() = default;

void Scene::validate()
{
}

web::json::value Scene::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(stepsIsSet_) {
        val[utility::conversions::to_string_t("steps")] = ModelBase::toJson(steps_);
    }

    return val;
}
bool Scene::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("steps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("steps"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSteps(refVal);
        }
    }
    return ok;
}


std::string Scene::getId() const
{
    return id_;
}

void Scene::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool Scene::idIsSet() const
{
    return idIsSet_;
}

void Scene::unsetid()
{
    idIsSet_ = false;
}

std::string Scene::getName() const
{
    return name_;
}

void Scene::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Scene::nameIsSet() const
{
    return nameIsSet_;
}

void Scene::unsetname()
{
    nameIsSet_ = false;
}

std::vector<std::string>& Scene::getSteps()
{
    return steps_;
}

void Scene::setSteps(const std::vector<std::string>& value)
{
    steps_ = value;
    stepsIsSet_ = true;
}

bool Scene::stepsIsSet() const
{
    return stepsIsSet_;
}

void Scene::unsetsteps()
{
    stepsIsSet_ = false;
}

}
}
}
}
}


