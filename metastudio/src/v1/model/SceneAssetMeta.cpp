

#include "huaweicloud/metastudio/v1/model/SceneAssetMeta.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




SceneAssetMeta::SceneAssetMeta()
{
    componentsIsSet_ = false;
    defaultConfigsIsSet_ = false;
}

SceneAssetMeta::~SceneAssetMeta() = default;

void SceneAssetMeta::validate()
{
}

web::json::value SceneAssetMeta::toJson() const
{
    web::json::value val = web::json::value::object();

    if(componentsIsSet_) {
        val[utility::conversions::to_string_t("components")] = ModelBase::toJson(components_);
    }
    if(defaultConfigsIsSet_) {
        val[utility::conversions::to_string_t("default_configs")] = ModelBase::toJson(defaultConfigs_);
    }

    return val;
}
bool SceneAssetMeta::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("components"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("components"));
        if(!fieldValue.is_null())
        {
            std::vector<SceneComponentInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComponents(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("default_configs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("default_configs"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, SceneComponentInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefaultConfigs(refVal);
        }
    }
    return ok;
}


std::vector<SceneComponentInfo>& SceneAssetMeta::getComponents()
{
    return components_;
}

void SceneAssetMeta::setComponents(const std::vector<SceneComponentInfo>& value)
{
    components_ = value;
    componentsIsSet_ = true;
}

bool SceneAssetMeta::componentsIsSet() const
{
    return componentsIsSet_;
}

void SceneAssetMeta::unsetcomponents()
{
    componentsIsSet_ = false;
}

std::map<std::string, SceneComponentInfo>& SceneAssetMeta::getDefaultConfigs()
{
    return defaultConfigs_;
}

void SceneAssetMeta::setDefaultConfigs(const std::map<std::string, SceneComponentInfo>& value)
{
    defaultConfigs_ = value;
    defaultConfigsIsSet_ = true;
}

bool SceneAssetMeta::defaultConfigsIsSet() const
{
    return defaultConfigsIsSet_;
}

void SceneAssetMeta::unsetdefaultConfigs()
{
    defaultConfigsIsSet_ = false;
}

}
}
}
}
}


