

#include "huaweicloud/modelarts/v1/model/WorkflowPolicy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




WorkflowPolicy::WorkflowPolicy()
{
    useScene_ = "";
    useSceneIsSet_ = false;
    sceneId_ = "";
    sceneIdIsSet_ = false;
    scenesIsSet_ = false;
}

WorkflowPolicy::~WorkflowPolicy() = default;

void WorkflowPolicy::validate()
{
}

web::json::value WorkflowPolicy::toJson() const
{
    web::json::value val = web::json::value::object();

    if(useSceneIsSet_) {
        val[utility::conversions::to_string_t("use_scene")] = ModelBase::toJson(useScene_);
    }
    if(sceneIdIsSet_) {
        val[utility::conversions::to_string_t("scene_id")] = ModelBase::toJson(sceneId_);
    }
    if(scenesIsSet_) {
        val[utility::conversions::to_string_t("scenes")] = ModelBase::toJson(scenes_);
    }

    return val;
}
bool WorkflowPolicy::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("use_scene"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("use_scene"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUseScene(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scene_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scene_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSceneId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scenes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scenes"));
        if(!fieldValue.is_null())
        {
            std::vector<Scene> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScenes(refVal);
        }
    }
    return ok;
}


std::string WorkflowPolicy::getUseScene() const
{
    return useScene_;
}

void WorkflowPolicy::setUseScene(const std::string& value)
{
    useScene_ = value;
    useSceneIsSet_ = true;
}

bool WorkflowPolicy::useSceneIsSet() const
{
    return useSceneIsSet_;
}

void WorkflowPolicy::unsetuseScene()
{
    useSceneIsSet_ = false;
}

std::string WorkflowPolicy::getSceneId() const
{
    return sceneId_;
}

void WorkflowPolicy::setSceneId(const std::string& value)
{
    sceneId_ = value;
    sceneIdIsSet_ = true;
}

bool WorkflowPolicy::sceneIdIsSet() const
{
    return sceneIdIsSet_;
}

void WorkflowPolicy::unsetsceneId()
{
    sceneIdIsSet_ = false;
}

std::vector<Scene>& WorkflowPolicy::getScenes()
{
    return scenes_;
}

void WorkflowPolicy::setScenes(const std::vector<Scene>& value)
{
    scenes_ = value;
    scenesIsSet_ = true;
}

bool WorkflowPolicy::scenesIsSet() const
{
    return scenesIsSet_;
}

void WorkflowPolicy::unsetscenes()
{
    scenesIsSet_ = false;
}

}
}
}
}
}


