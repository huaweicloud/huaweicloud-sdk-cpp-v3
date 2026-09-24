

#include "huaweicloud/cbr/v1/model/UpdateExpirationTimeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




UpdateExpirationTimeResponse::UpdateExpirationTimeResponse()
{
    affectedBackupsCount_ = 0;
    affectedBackupsCountIsSet_ = false;
    newExpirationDay_ = "";
    newExpirationDayIsSet_ = false;
    operationLogId_ = "";
    operationLogIdIsSet_ = false;
}

UpdateExpirationTimeResponse::~UpdateExpirationTimeResponse() = default;

void UpdateExpirationTimeResponse::validate()
{
}

web::json::value UpdateExpirationTimeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(affectedBackupsCountIsSet_) {
        val[utility::conversions::to_string_t("affected_backups_count")] = ModelBase::toJson(affectedBackupsCount_);
    }
    if(newExpirationDayIsSet_) {
        val[utility::conversions::to_string_t("new_expiration_day")] = ModelBase::toJson(newExpirationDay_);
    }
    if(operationLogIdIsSet_) {
        val[utility::conversions::to_string_t("operation_log_id")] = ModelBase::toJson(operationLogId_);
    }

    return val;
}
bool UpdateExpirationTimeResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("affected_backups_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("affected_backups_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAffectedBackupsCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("new_expiration_day"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("new_expiration_day"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewExpirationDay(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operation_log_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operation_log_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperationLogId(refVal);
        }
    }
    return ok;
}


int32_t UpdateExpirationTimeResponse::getAffectedBackupsCount() const
{
    return affectedBackupsCount_;
}

void UpdateExpirationTimeResponse::setAffectedBackupsCount(int32_t value)
{
    affectedBackupsCount_ = value;
    affectedBackupsCountIsSet_ = true;
}

bool UpdateExpirationTimeResponse::affectedBackupsCountIsSet() const
{
    return affectedBackupsCountIsSet_;
}

void UpdateExpirationTimeResponse::unsetaffectedBackupsCount()
{
    affectedBackupsCountIsSet_ = false;
}

std::string UpdateExpirationTimeResponse::getNewExpirationDay() const
{
    return newExpirationDay_;
}

void UpdateExpirationTimeResponse::setNewExpirationDay(const std::string& value)
{
    newExpirationDay_ = value;
    newExpirationDayIsSet_ = true;
}

bool UpdateExpirationTimeResponse::newExpirationDayIsSet() const
{
    return newExpirationDayIsSet_;
}

void UpdateExpirationTimeResponse::unsetnewExpirationDay()
{
    newExpirationDayIsSet_ = false;
}

std::string UpdateExpirationTimeResponse::getOperationLogId() const
{
    return operationLogId_;
}

void UpdateExpirationTimeResponse::setOperationLogId(const std::string& value)
{
    operationLogId_ = value;
    operationLogIdIsSet_ = true;
}

bool UpdateExpirationTimeResponse::operationLogIdIsSet() const
{
    return operationLogIdIsSet_;
}

void UpdateExpirationTimeResponse::unsetoperationLogId()
{
    operationLogIdIsSet_ = false;
}

}
}
}
}
}


