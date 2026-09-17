

#include "huaweicloud/projectman/v4/model/WorkItemFlowFieldRangeVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




WorkItemFlowFieldRangeVO::WorkItemFlowFieldRangeVO()
{
    settingValObjectIsSet_ = false;
}

WorkItemFlowFieldRangeVO::~WorkItemFlowFieldRangeVO() = default;

void WorkItemFlowFieldRangeVO::validate()
{
}

web::json::value WorkItemFlowFieldRangeVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(settingValObjectIsSet_) {
        val[utility::conversions::to_string_t("setting_val_object")] = ModelBase::toJson(settingValObject_);
    }

    return val;
}
bool WorkItemFlowFieldRangeVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::vector<std::map<std::string, Object>>& WorkItemFlowFieldRangeVO::getSettingValObject()
{
    return settingValObject_;
}

void WorkItemFlowFieldRangeVO::setSettingValObject(const std::vector<std::map<std::string, Object>>& value)
{
    settingValObject_ = value;
    settingValObjectIsSet_ = true;
}

bool WorkItemFlowFieldRangeVO::settingValObjectIsSet() const
{
    return settingValObjectIsSet_;
}

void WorkItemFlowFieldRangeVO::unsetsettingValObject()
{
    settingValObjectIsSet_ = false;
}

}
}
}
}
}


