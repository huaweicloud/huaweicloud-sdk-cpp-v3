

#include "huaweicloud/gaussdbforopengauss/v3/model/OpenGaussUpgradeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




OpenGaussUpgradeRequest::OpenGaussUpgradeRequest()
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

OpenGaussUpgradeRequest::~OpenGaussUpgradeRequest() = default;

void OpenGaussUpgradeRequest::validate()
{
}

web::json::value OpenGaussUpgradeRequest::toJson() const
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
bool OpenGaussUpgradeRequest::fromJson(const web::json::value& val)
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


std::string OpenGaussUpgradeRequest::getUpgradeType() const
{
    return upgradeType_;
}

void OpenGaussUpgradeRequest::setUpgradeType(const std::string& value)
{
    upgradeType_ = value;
    upgradeTypeIsSet_ = true;
}

bool OpenGaussUpgradeRequest::upgradeTypeIsSet() const
{
    return upgradeTypeIsSet_;
}

void OpenGaussUpgradeRequest::unsetupgradeType()
{
    upgradeTypeIsSet_ = false;
}

std::string OpenGaussUpgradeRequest::getUpgradeAction() const
{
    return upgradeAction_;
}

void OpenGaussUpgradeRequest::setUpgradeAction(const std::string& value)
{
    upgradeAction_ = value;
    upgradeActionIsSet_ = true;
}

bool OpenGaussUpgradeRequest::upgradeActionIsSet() const
{
    return upgradeActionIsSet_;
}

void OpenGaussUpgradeRequest::unsetupgradeAction()
{
    upgradeActionIsSet_ = false;
}

std::string OpenGaussUpgradeRequest::getTargetVersion() const
{
    return targetVersion_;
}

void OpenGaussUpgradeRequest::setTargetVersion(const std::string& value)
{
    targetVersion_ = value;
    targetVersionIsSet_ = true;
}

bool OpenGaussUpgradeRequest::targetVersionIsSet() const
{
    return targetVersionIsSet_;
}

void OpenGaussUpgradeRequest::unsettargetVersion()
{
    targetVersionIsSet_ = false;
}

int32_t OpenGaussUpgradeRequest::getUpgradeShardNum() const
{
    return upgradeShardNum_;
}

void OpenGaussUpgradeRequest::setUpgradeShardNum(int32_t value)
{
    upgradeShardNum_ = value;
    upgradeShardNumIsSet_ = true;
}

bool OpenGaussUpgradeRequest::upgradeShardNumIsSet() const
{
    return upgradeShardNumIsSet_;
}

void OpenGaussUpgradeRequest::unsetupgradeShardNum()
{
    upgradeShardNumIsSet_ = false;
}

std::string OpenGaussUpgradeRequest::getUpgradeAz() const
{
    return upgradeAz_;
}

void OpenGaussUpgradeRequest::setUpgradeAz(const std::string& value)
{
    upgradeAz_ = value;
    upgradeAzIsSet_ = true;
}

bool OpenGaussUpgradeRequest::upgradeAzIsSet() const
{
    return upgradeAzIsSet_;
}

void OpenGaussUpgradeRequest::unsetupgradeAz()
{
    upgradeAzIsSet_ = false;
}

}
}
}
}
}


