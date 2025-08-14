

#include "huaweicloud/iotda/v5/model/BindDevicePolicy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




BindDevicePolicy::BindDevicePolicy()
{
    targetType_ = "";
    targetTypeIsSet_ = false;
    targetIdsIsSet_ = false;
}

BindDevicePolicy::~BindDevicePolicy() = default;

void BindDevicePolicy::validate()
{
}

web::json::value BindDevicePolicy::toJson() const
{
    web::json::value val = web::json::value::object();

    if(targetTypeIsSet_) {
        val[utility::conversions::to_string_t("target_type")] = ModelBase::toJson(targetType_);
    }
    if(targetIdsIsSet_) {
        val[utility::conversions::to_string_t("target_ids")] = ModelBase::toJson(targetIds_);
    }

    return val;
}
bool BindDevicePolicy::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("target_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetIds(refVal);
        }
    }
    return ok;
}


std::string BindDevicePolicy::getTargetType() const
{
    return targetType_;
}

void BindDevicePolicy::setTargetType(const std::string& value)
{
    targetType_ = value;
    targetTypeIsSet_ = true;
}

bool BindDevicePolicy::targetTypeIsSet() const
{
    return targetTypeIsSet_;
}

void BindDevicePolicy::unsettargetType()
{
    targetTypeIsSet_ = false;
}

std::vector<std::string>& BindDevicePolicy::getTargetIds()
{
    return targetIds_;
}

void BindDevicePolicy::setTargetIds(const std::vector<std::string>& value)
{
    targetIds_ = value;
    targetIdsIsSet_ = true;
}

bool BindDevicePolicy::targetIdsIsSet() const
{
    return targetIdsIsSet_;
}

void BindDevicePolicy::unsettargetIds()
{
    targetIdsIsSet_ = false;
}

}
}
}
}
}


