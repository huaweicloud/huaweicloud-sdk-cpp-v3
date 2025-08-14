

#include "huaweicloud/iotda/v5/model/UnBindDevicePolicy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UnBindDevicePolicy::UnBindDevicePolicy()
{
    targetType_ = "";
    targetTypeIsSet_ = false;
    targetIdsIsSet_ = false;
}

UnBindDevicePolicy::~UnBindDevicePolicy() = default;

void UnBindDevicePolicy::validate()
{
}

web::json::value UnBindDevicePolicy::toJson() const
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
bool UnBindDevicePolicy::fromJson(const web::json::value& val)
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


std::string UnBindDevicePolicy::getTargetType() const
{
    return targetType_;
}

void UnBindDevicePolicy::setTargetType(const std::string& value)
{
    targetType_ = value;
    targetTypeIsSet_ = true;
}

bool UnBindDevicePolicy::targetTypeIsSet() const
{
    return targetTypeIsSet_;
}

void UnBindDevicePolicy::unsettargetType()
{
    targetTypeIsSet_ = false;
}

std::vector<std::string>& UnBindDevicePolicy::getTargetIds()
{
    return targetIds_;
}

void UnBindDevicePolicy::setTargetIds(const std::vector<std::string>& value)
{
    targetIds_ = value;
    targetIdsIsSet_ = true;
}

bool UnBindDevicePolicy::targetIdsIsSet() const
{
    return targetIdsIsSet_;
}

void UnBindDevicePolicy::unsettargetIds()
{
    targetIdsIsSet_ = false;
}

}
}
}
}
}


