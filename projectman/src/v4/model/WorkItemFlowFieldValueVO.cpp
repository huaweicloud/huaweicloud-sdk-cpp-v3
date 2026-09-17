

#include "huaweicloud/projectman/v4/model/WorkItemFlowFieldValueVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




WorkItemFlowFieldValueVO::WorkItemFlowFieldValueVO()
{
    refProp_ = "";
    refPropIsSet_ = false;
    settingValObjectIsSet_ = false;
}

WorkItemFlowFieldValueVO::~WorkItemFlowFieldValueVO() = default;

void WorkItemFlowFieldValueVO::validate()
{
}

web::json::value WorkItemFlowFieldValueVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(refPropIsSet_) {
        val[utility::conversions::to_string_t("ref_prop")] = ModelBase::toJson(refProp_);
    }
    if(settingValObjectIsSet_) {
        val[utility::conversions::to_string_t("setting_val_object")] = ModelBase::toJson(settingValObject_);
    }

    return val;
}
bool WorkItemFlowFieldValueVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ref_prop"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ref_prop"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRefProp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("setting_val_object"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("setting_val_object"));
        if(!fieldValue.is_null())
        {
            std::vector<std::map<std::string, Object>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSettingValObject(refVal);
        }
    }
    return ok;
}


std::string WorkItemFlowFieldValueVO::getRefProp() const
{
    return refProp_;
}

void WorkItemFlowFieldValueVO::setRefProp(const std::string& value)
{
    refProp_ = value;
    refPropIsSet_ = true;
}

bool WorkItemFlowFieldValueVO::refPropIsSet() const
{
    return refPropIsSet_;
}

void WorkItemFlowFieldValueVO::unsetrefProp()
{
    refPropIsSet_ = false;
}

std::vector<std::map<std::string, Object>>& WorkItemFlowFieldValueVO::getSettingValObject()
{
    return settingValObject_;
}

void WorkItemFlowFieldValueVO::setSettingValObject(const std::vector<std::map<std::string, Object>>& value)
{
    settingValObject_ = value;
    settingValObjectIsSet_ = true;
}

bool WorkItemFlowFieldValueVO::settingValObjectIsSet() const
{
    return settingValObjectIsSet_;
}

void WorkItemFlowFieldValueVO::unsetsettingValObject()
{
    settingValObjectIsSet_ = false;
}

}
}
}
}
}


