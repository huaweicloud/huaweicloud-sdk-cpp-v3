

#include "huaweicloud/aad/v2/model/UpgradeInstanceSpecV2RequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




UpgradeInstanceSpecV2RequestBody::UpgradeInstanceSpecV2RequestBody()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    upgradeDataIsSet_ = false;
}

UpgradeInstanceSpecV2RequestBody::~UpgradeInstanceSpecV2RequestBody() = default;

void UpgradeInstanceSpecV2RequestBody::validate()
{
}

web::json::value UpgradeInstanceSpecV2RequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(upgradeDataIsSet_) {
        val[utility::conversions::to_string_t("upgrade_data")] = ModelBase::toJson(upgradeData_);
    }

    return val;
}
bool UpgradeInstanceSpecV2RequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("upgrade_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("upgrade_data"));
        if(!fieldValue.is_null())
        {
            UpgradeInstanceData refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpgradeData(refVal);
        }
    }
    return ok;
}


std::string UpgradeInstanceSpecV2RequestBody::getInstanceId() const
{
    return instanceId_;
}

void UpgradeInstanceSpecV2RequestBody::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpgradeInstanceSpecV2RequestBody::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpgradeInstanceSpecV2RequestBody::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

UpgradeInstanceData UpgradeInstanceSpecV2RequestBody::getUpgradeData() const
{
    return upgradeData_;
}

void UpgradeInstanceSpecV2RequestBody::setUpgradeData(const UpgradeInstanceData& value)
{
    upgradeData_ = value;
    upgradeDataIsSet_ = true;
}

bool UpgradeInstanceSpecV2RequestBody::upgradeDataIsSet() const
{
    return upgradeDataIsSet_;
}

void UpgradeInstanceSpecV2RequestBody::unsetupgradeData()
{
    upgradeDataIsSet_ = false;
}

}
}
}
}
}


