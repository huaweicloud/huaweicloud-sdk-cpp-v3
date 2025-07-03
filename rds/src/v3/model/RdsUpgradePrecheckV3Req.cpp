

#include "huaweicloud/rds/v3/model/RdsUpgradePrecheckV3Req.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




RdsUpgradePrecheckV3Req::RdsUpgradePrecheckV3Req()
{
    targetVersion_ = "";
    targetVersionIsSet_ = false;
}

RdsUpgradePrecheckV3Req::~RdsUpgradePrecheckV3Req() = default;

void RdsUpgradePrecheckV3Req::validate()
{
}

web::json::value RdsUpgradePrecheckV3Req::toJson() const
{
    web::json::value val = web::json::value::object();

    if(targetVersionIsSet_) {
        val[utility::conversions::to_string_t("target_version")] = ModelBase::toJson(targetVersion_);
    }

    return val;
}
bool RdsUpgradePrecheckV3Req::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("target_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetVersion(refVal);
        }
    }
    return ok;
}


std::string RdsUpgradePrecheckV3Req::getTargetVersion() const
{
    return targetVersion_;
}

void RdsUpgradePrecheckV3Req::setTargetVersion(const std::string& value)
{
    targetVersion_ = value;
    targetVersionIsSet_ = true;
}

bool RdsUpgradePrecheckV3Req::targetVersionIsSet() const
{
    return targetVersionIsSet_;
}

void RdsUpgradePrecheckV3Req::unsettargetVersion()
{
    targetVersionIsSet_ = false;
}

}
}
}
}
}


