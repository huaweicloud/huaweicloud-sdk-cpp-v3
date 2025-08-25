

#include "huaweicloud/cce/v3/model/UpgradePlanSpec.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UpgradePlanSpec::UpgradePlanSpec()
{
    clusterID_ = "";
    clusterIDIsSet_ = false;
    clusterVersion_ = "";
    clusterVersionIsSet_ = false;
    targetVersion_ = "";
    targetVersionIsSet_ = false;
    notBefore_ = "";
    notBeforeIsSet_ = false;
    notAfter_ = "";
    notAfterIsSet_ = false;
    notBeforeDeadline_ = "";
    notBeforeDeadlineIsSet_ = false;
}

UpgradePlanSpec::~UpgradePlanSpec() = default;

void UpgradePlanSpec::validate()
{
}

web::json::value UpgradePlanSpec::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIDIsSet_) {
        val[utility::conversions::to_string_t("clusterID")] = ModelBase::toJson(clusterID_);
    }
    if(clusterVersionIsSet_) {
        val[utility::conversions::to_string_t("clusterVersion")] = ModelBase::toJson(clusterVersion_);
    }
    if(targetVersionIsSet_) {
        val[utility::conversions::to_string_t("targetVersion")] = ModelBase::toJson(targetVersion_);
    }
    if(notBeforeIsSet_) {
        val[utility::conversions::to_string_t("notBefore")] = ModelBase::toJson(notBefore_);
    }
    if(notAfterIsSet_) {
        val[utility::conversions::to_string_t("notAfter")] = ModelBase::toJson(notAfter_);
    }
    if(notBeforeDeadlineIsSet_) {
        val[utility::conversions::to_string_t("notBeforeDeadline")] = ModelBase::toJson(notBeforeDeadline_);
    }

    return val;
}
bool UpgradePlanSpec::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("clusterID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("clusterID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterID(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("clusterVersion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("clusterVersion"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("targetVersion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("targetVersion"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("notBefore"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("notBefore"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotBefore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("notAfter"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("notAfter"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotAfter(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("notBeforeDeadline"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("notBeforeDeadline"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotBeforeDeadline(refVal);
        }
    }
    return ok;
}


std::string UpgradePlanSpec::getClusterID() const
{
    return clusterID_;
}

void UpgradePlanSpec::setClusterID(const std::string& value)
{
    clusterID_ = value;
    clusterIDIsSet_ = true;
}

bool UpgradePlanSpec::clusterIDIsSet() const
{
    return clusterIDIsSet_;
}

void UpgradePlanSpec::unsetclusterID()
{
    clusterIDIsSet_ = false;
}

std::string UpgradePlanSpec::getClusterVersion() const
{
    return clusterVersion_;
}

void UpgradePlanSpec::setClusterVersion(const std::string& value)
{
    clusterVersion_ = value;
    clusterVersionIsSet_ = true;
}

bool UpgradePlanSpec::clusterVersionIsSet() const
{
    return clusterVersionIsSet_;
}

void UpgradePlanSpec::unsetclusterVersion()
{
    clusterVersionIsSet_ = false;
}

std::string UpgradePlanSpec::getTargetVersion() const
{
    return targetVersion_;
}

void UpgradePlanSpec::setTargetVersion(const std::string& value)
{
    targetVersion_ = value;
    targetVersionIsSet_ = true;
}

bool UpgradePlanSpec::targetVersionIsSet() const
{
    return targetVersionIsSet_;
}

void UpgradePlanSpec::unsettargetVersion()
{
    targetVersionIsSet_ = false;
}

std::string UpgradePlanSpec::getNotBefore() const
{
    return notBefore_;
}

void UpgradePlanSpec::setNotBefore(const std::string& value)
{
    notBefore_ = value;
    notBeforeIsSet_ = true;
}

bool UpgradePlanSpec::notBeforeIsSet() const
{
    return notBeforeIsSet_;
}

void UpgradePlanSpec::unsetnotBefore()
{
    notBeforeIsSet_ = false;
}

std::string UpgradePlanSpec::getNotAfter() const
{
    return notAfter_;
}

void UpgradePlanSpec::setNotAfter(const std::string& value)
{
    notAfter_ = value;
    notAfterIsSet_ = true;
}

bool UpgradePlanSpec::notAfterIsSet() const
{
    return notAfterIsSet_;
}

void UpgradePlanSpec::unsetnotAfter()
{
    notAfterIsSet_ = false;
}

std::string UpgradePlanSpec::getNotBeforeDeadline() const
{
    return notBeforeDeadline_;
}

void UpgradePlanSpec::setNotBeforeDeadline(const std::string& value)
{
    notBeforeDeadline_ = value;
    notBeforeDeadlineIsSet_ = true;
}

bool UpgradePlanSpec::notBeforeDeadlineIsSet() const
{
    return notBeforeDeadlineIsSet_;
}

void UpgradePlanSpec::unsetnotBeforeDeadline()
{
    notBeforeDeadlineIsSet_ = false;
}

}
}
}
}
}


