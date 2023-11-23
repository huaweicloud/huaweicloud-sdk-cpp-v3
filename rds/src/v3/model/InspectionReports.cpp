

#include "huaweicloud/rds/v3/model/InspectionReports.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




InspectionReports::InspectionReports()
{
    id_ = "";
    idIsSet_ = false;
    checkTime_ = "";
    checkTimeIsSet_ = false;
    expirationTime_ = "";
    expirationTimeIsSet_ = false;
    targetVersion_ = "";
    targetVersionIsSet_ = false;
    result_ = "";
    resultIsSet_ = false;
    detail_ = "";
    detailIsSet_ = false;
}

InspectionReports::~InspectionReports() = default;

void InspectionReports::validate()
{
}

web::json::value InspectionReports::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(checkTimeIsSet_) {
        val[utility::conversions::to_string_t("check_time")] = ModelBase::toJson(checkTime_);
    }
    if(expirationTimeIsSet_) {
        val[utility::conversions::to_string_t("expiration_time")] = ModelBase::toJson(expirationTime_);
    }
    if(targetVersionIsSet_) {
        val[utility::conversions::to_string_t("target_version")] = ModelBase::toJson(targetVersion_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(detailIsSet_) {
        val[utility::conversions::to_string_t("detail")] = ModelBase::toJson(detail_);
    }

    return val;
}
bool InspectionReports::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("check_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("check_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCheckTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expiration_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expiration_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpirationTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
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


std::string InspectionReports::getId() const
{
    return id_;
}

void InspectionReports::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool InspectionReports::idIsSet() const
{
    return idIsSet_;
}

void InspectionReports::unsetid()
{
    idIsSet_ = false;
}

std::string InspectionReports::getCheckTime() const
{
    return checkTime_;
}

void InspectionReports::setCheckTime(const std::string& value)
{
    checkTime_ = value;
    checkTimeIsSet_ = true;
}

bool InspectionReports::checkTimeIsSet() const
{
    return checkTimeIsSet_;
}

void InspectionReports::unsetcheckTime()
{
    checkTimeIsSet_ = false;
}

std::string InspectionReports::getExpirationTime() const
{
    return expirationTime_;
}

void InspectionReports::setExpirationTime(const std::string& value)
{
    expirationTime_ = value;
    expirationTimeIsSet_ = true;
}

bool InspectionReports::expirationTimeIsSet() const
{
    return expirationTimeIsSet_;
}

void InspectionReports::unsetexpirationTime()
{
    expirationTimeIsSet_ = false;
}

std::string InspectionReports::getTargetVersion() const
{
    return targetVersion_;
}

void InspectionReports::setTargetVersion(const std::string& value)
{
    targetVersion_ = value;
    targetVersionIsSet_ = true;
}

bool InspectionReports::targetVersionIsSet() const
{
    return targetVersionIsSet_;
}

void InspectionReports::unsettargetVersion()
{
    targetVersionIsSet_ = false;
}

std::string InspectionReports::getResult() const
{
    return result_;
}

void InspectionReports::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool InspectionReports::resultIsSet() const
{
    return resultIsSet_;
}

void InspectionReports::unsetresult()
{
    resultIsSet_ = false;
}

std::string InspectionReports::getDetail() const
{
    return detail_;
}

void InspectionReports::setDetail(const std::string& value)
{
    detail_ = value;
    detailIsSet_ = true;
}

bool InspectionReports::detailIsSet() const
{
    return detailIsSet_;
}

void InspectionReports::unsetdetail()
{
    detailIsSet_ = false;
}

}
}
}
}
}


