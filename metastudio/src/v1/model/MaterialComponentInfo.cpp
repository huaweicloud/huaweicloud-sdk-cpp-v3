

#include "huaweicloud/metastudio/v1/model/MaterialComponentInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




MaterialComponentInfo::MaterialComponentInfo()
{
    componentName_ = "";
    componentNameIsSet_ = false;
    componentType_ = "";
    componentTypeIsSet_ = false;
    componentDesc_ = "";
    componentDescIsSet_ = false;
}

MaterialComponentInfo::~MaterialComponentInfo() = default;

void MaterialComponentInfo::validate()
{
}

web::json::value MaterialComponentInfo::toJson() const
{
    web::json::value val = web::json::value::object();

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
bool MaterialComponentInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string MaterialComponentInfo::getComponentName() const
{
    return componentName_;
}

void MaterialComponentInfo::setComponentName(const std::string& value)
{
    componentName_ = value;
    componentNameIsSet_ = true;
}

bool MaterialComponentInfo::componentNameIsSet() const
{
    return componentNameIsSet_;
}

void MaterialComponentInfo::unsetcomponentName()
{
    componentNameIsSet_ = false;
}

std::string MaterialComponentInfo::getComponentType() const
{
    return componentType_;
}

void MaterialComponentInfo::setComponentType(const std::string& value)
{
    componentType_ = value;
    componentTypeIsSet_ = true;
}

bool MaterialComponentInfo::componentTypeIsSet() const
{
    return componentTypeIsSet_;
}

void MaterialComponentInfo::unsetcomponentType()
{
    componentTypeIsSet_ = false;
}

std::string MaterialComponentInfo::getComponentDesc() const
{
    return componentDesc_;
}

void MaterialComponentInfo::setComponentDesc(const std::string& value)
{
    componentDesc_ = value;
    componentDescIsSet_ = true;
}

bool MaterialComponentInfo::componentDescIsSet() const
{
    return componentDescIsSet_;
}

void MaterialComponentInfo::unsetcomponentDesc()
{
    componentDescIsSet_ = false;
}

}
}
}
}
}


