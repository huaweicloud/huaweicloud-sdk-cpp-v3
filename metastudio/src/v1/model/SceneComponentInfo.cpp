

#include "huaweicloud/metastudio/v1/model/SceneComponentInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




SceneComponentInfo::SceneComponentInfo()
{
    index_ = 0;
    indexIsSet_ = false;
    componentName_ = "";
    componentNameIsSet_ = false;
    componentType_ = "";
    componentTypeIsSet_ = false;
    componentDesc_ = "";
    componentDescIsSet_ = false;
}

SceneComponentInfo::~SceneComponentInfo() = default;

void SceneComponentInfo::validate()
{
}

web::json::value SceneComponentInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(indexIsSet_) {
        val[utility::conversions::to_string_t("index")] = ModelBase::toJson(index_);
    }
    if(componentNameIsSet_) {
        val[utility::conversions::to_string_t("component_name")] = ModelBase::toJson(componentName_);
    }
    if(componentTypeIsSet_) {
        val[utility::conversions::to_string_t("component_type")] = ModelBase::toJson(componentType_);
    }
    if(componentDescIsSet_) {
        val[utility::conversions::to_string_t("component_desc")] = ModelBase::toJson(componentDesc_);
    }

    return val;
}
bool SceneComponentInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("index"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("index"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIndex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("component_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("component_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComponentName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("component_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("component_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComponentType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("component_desc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("component_desc"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComponentDesc(refVal);
        }
    }
    return ok;
}


int32_t SceneComponentInfo::getIndex() const
{
    return index_;
}

void SceneComponentInfo::setIndex(int32_t value)
{
    index_ = value;
    indexIsSet_ = true;
}

bool SceneComponentInfo::indexIsSet() const
{
    return indexIsSet_;
}

void SceneComponentInfo::unsetindex()
{
    indexIsSet_ = false;
}

std::string SceneComponentInfo::getComponentName() const
{
    return componentName_;
}

void SceneComponentInfo::setComponentName(const std::string& value)
{
    componentName_ = value;
    componentNameIsSet_ = true;
}

bool SceneComponentInfo::componentNameIsSet() const
{
    return componentNameIsSet_;
}

void SceneComponentInfo::unsetcomponentName()
{
    componentNameIsSet_ = false;
}

std::string SceneComponentInfo::getComponentType() const
{
    return componentType_;
}

void SceneComponentInfo::setComponentType(const std::string& value)
{
    componentType_ = value;
    componentTypeIsSet_ = true;
}

bool SceneComponentInfo::componentTypeIsSet() const
{
    return componentTypeIsSet_;
}

void SceneComponentInfo::unsetcomponentType()
{
    componentTypeIsSet_ = false;
}

std::string SceneComponentInfo::getComponentDesc() const
{
    return componentDesc_;
}

void SceneComponentInfo::setComponentDesc(const std::string& value)
{
    componentDesc_ = value;
    componentDescIsSet_ = true;
}

bool SceneComponentInfo::componentDescIsSet() const
{
    return componentDescIsSet_;
}

void SceneComponentInfo::unsetcomponentDesc()
{
    componentDescIsSet_ = false;
}

}
}
}
}
}


