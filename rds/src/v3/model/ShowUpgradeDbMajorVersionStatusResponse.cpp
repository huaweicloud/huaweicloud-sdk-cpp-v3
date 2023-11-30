

#include "huaweicloud/rds/v3/model/ShowUpgradeDbMajorVersionStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowUpgradeDbMajorVersionStatusResponse::ShowUpgradeDbMajorVersionStatusResponse()
{
    status_ = "";
    statusIsSet_ = false;
    targetVersion_ = "";
    targetVersionIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    checkExpirationTime_ = "";
    checkExpirationTimeIsSet_ = false;
    detail_ = "";
    detailIsSet_ = false;
}

ShowUpgradeDbMajorVersionStatusResponse::~ShowUpgradeDbMajorVersionStatusResponse() = default;

void ShowUpgradeDbMajorVersionStatusResponse::validate()
{
}

web::json::value ShowUpgradeDbMajorVersionStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(targetVersionIsSet_) {
        val[utility::conversions::to_string_t("target_version")] = ModelBase::toJson(targetVersion_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(checkExpirationTimeIsSet_) {
        val[utility::conversions::to_string_t("check_expiration_time")] = ModelBase::toJson(checkExpirationTime_);
    }
    if(detailIsSet_) {
        val[utility::conversions::to_string_t("detail")] = ModelBase::toJson(detail_);
    }

    return val;
}
bool ShowUpgradeDbMajorVersionStatusResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("check_expiration_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("check_expiration_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCheckExpirationTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("detail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detail"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetail(refVal);
        }
    }
    return ok;
}


std::string ShowUpgradeDbMajorVersionStatusResponse::getStatus() const
{
    return status_;
}

void ShowUpgradeDbMajorVersionStatusResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowUpgradeDbMajorVersionStatusResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowUpgradeDbMajorVersionStatusResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowUpgradeDbMajorVersionStatusResponse::getTargetVersion() const
{
    return targetVersion_;
}

void ShowUpgradeDbMajorVersionStatusResponse::setTargetVersion(const std::string& value)
{
    targetVersion_ = value;
    targetVersionIsSet_ = true;
}

bool ShowUpgradeDbMajorVersionStatusResponse::targetVersionIsSet() const
{
    return targetVersionIsSet_;
}

void ShowUpgradeDbMajorVersionStatusResponse::unsettargetVersion()
{
    targetVersionIsSet_ = false;
}

std::string ShowUpgradeDbMajorVersionStatusResponse::getStartTime() const
{
    return startTime_;
}

void ShowUpgradeDbMajorVersionStatusResponse::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowUpgradeDbMajorVersionStatusResponse::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowUpgradeDbMajorVersionStatusResponse::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ShowUpgradeDbMajorVersionStatusResponse::getCheckExpirationTime() const
{
    return checkExpirationTime_;
}

void ShowUpgradeDbMajorVersionStatusResponse::setCheckExpirationTime(const std::string& value)
{
    checkExpirationTime_ = value;
    checkExpirationTimeIsSet_ = true;
}

bool ShowUpgradeDbMajorVersionStatusResponse::checkExpirationTimeIsSet() const
{
    return checkExpirationTimeIsSet_;
}

void ShowUpgradeDbMajorVersionStatusResponse::unsetcheckExpirationTime()
{
    checkExpirationTimeIsSet_ = false;
}

std::string ShowUpgradeDbMajorVersionStatusResponse::getDetail() const
{
    return detail_;
}

void ShowUpgradeDbMajorVersionStatusResponse::setDetail(const std::string& value)
{
    detail_ = value;
    detailIsSet_ = true;
}

bool ShowUpgradeDbMajorVersionStatusResponse::detailIsSet() const
{
    return detailIsSet_;
}

void ShowUpgradeDbMajorVersionStatusResponse::unsetdetail()
{
    detailIsSet_ = false;
}

}
}
}
}
}


