

#include "huaweicloud/gaussdbforopengauss/v3/model/UpgradeRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




UpgradeRequestBody::UpgradeRequestBody()
{
    upgradeType_ = "";
    upgradeTypeIsSet_ = false;
    upgradeAction_ = "";
    upgradeActionIsSet_ = false;
    targetVersion_ = "";
    targetVersionIsSet_ = false;
    upgradeShardNum_ = 0;
    upgradeShardNumIsSet_ = false;
    upgradeAz_ = "";
    upgradeAzIsSet_ = false;
}

UpgradeRequestBody::~UpgradeRequestBody() = default;

void UpgradeRequestBody::validate()
{
}

web::json::value UpgradeRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(upgradeTypeIsSet_) {
        val[utility::conversions::to_string_t("upgrade_type")] = ModelBase::toJson(upgradeType_);
    }
    if(upgradeActionIsSet_) {
        val[utility::conversions::to_string_t("upgrade_action")] = ModelBase::toJson(upgradeAction_);
    }
    if(targetVersionIsSet_) {
        val[utility::conversions::to_string_t("target_version")] = ModelBase::toJson(targetVersion_);
    }
    if(upgradeShardNumIsSet_) {
        val[utility::conversions::to_string_t("upgrade_shard_num")] = ModelBase::toJson(upgradeShardNum_);
    }
    if(upgradeAzIsSet_) {
        val[utility::conversions::to_string_t("upgrade_az")] = ModelBase::toJson(upgradeAz_);
    }

    return val;
}
bool UpgradeRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("upgrade_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("upgrade_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpgradeType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("upgrade_action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("upgrade_action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpgradeAction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("upgrade_shard_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("upgrade_shard_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpgradeShardNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("upgrade_az"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("upgrade_az"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpgradeAz(refVal);
        }
    }
    return ok;
}


std::string UpgradeRequestBody::getUpgradeType() const
{
    return upgradeType_;
}

void UpgradeRequestBody::setUpgradeType(const std::string& value)
{
    upgradeType_ = value;
    upgradeTypeIsSet_ = true;
}

bool UpgradeRequestBody::upgradeTypeIsSet() const
{
    return upgradeTypeIsSet_;
}

void UpgradeRequestBody::unsetupgradeType()
{
    upgradeTypeIsSet_ = false;
}

std::string UpgradeRequestBody::getUpgradeAction() const
{
    return upgradeAction_;
}

void UpgradeRequestBody::setUpgradeAction(const std::string& value)
{
    upgradeAction_ = value;
    upgradeActionIsSet_ = true;
}

bool UpgradeRequestBody::upgradeActionIsSet() const
{
    return upgradeActionIsSet_;
}

void UpgradeRequestBody::unsetupgradeAction()
{
    upgradeActionIsSet_ = false;
}

std::string UpgradeRequestBody::getTargetVersion() const
{
    return targetVersion_;
}

void UpgradeRequestBody::setTargetVersion(const std::string& value)
{
    targetVersion_ = value;
    targetVersionIsSet_ = true;
}

bool UpgradeRequestBody::targetVersionIsSet() const
{
    return targetVersionIsSet_;
}

void UpgradeRequestBody::unsettargetVersion()
{
    targetVersionIsSet_ = false;
}

int32_t UpgradeRequestBody::getUpgradeShardNum() const
{
    return upgradeShardNum_;
}

void UpgradeRequestBody::setUpgradeShardNum(int32_t value)
{
    upgradeShardNum_ = value;
    upgradeShardNumIsSet_ = true;
}

bool UpgradeRequestBody::upgradeShardNumIsSet() const
{
    return upgradeShardNumIsSet_;
}

void UpgradeRequestBody::unsetupgradeShardNum()
{
    upgradeShardNumIsSet_ = false;
}

std::string UpgradeRequestBody::getUpgradeAz() const
{
    return upgradeAz_;
}

void UpgradeRequestBody::setUpgradeAz(const std::string& value)
{
    upgradeAz_ = value;
    upgradeAzIsSet_ = true;
}

bool UpgradeRequestBody::upgradeAzIsSet() const
{
    return upgradeAzIsSet_;
}

void UpgradeRequestBody::unsetupgradeAz()
{
    upgradeAzIsSet_ = false;
}

}
}
}
}
}


