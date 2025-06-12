

#include "huaweicloud/metastudio/v1/model/OperationLogInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




OperationLogInfo::OperationLogInfo()
{
    operateTime_ = "";
    operateTimeIsSet_ = false;
    logType_ = "";
    logTypeIsSet_ = false;
    logDescription_ = "";
    logDescriptionIsSet_ = false;
    operateUser_ = "";
    operateUserIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
}

OperationLogInfo::~OperationLogInfo() = default;

void OperationLogInfo::validate()
{
}

web::json::value OperationLogInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(operateTimeIsSet_) {
        val[utility::conversions::to_string_t("operate_time")] = ModelBase::toJson(operateTime_);
    }
    if(logTypeIsSet_) {
        val[utility::conversions::to_string_t("log_type")] = ModelBase::toJson(logType_);
    }
    if(logDescriptionIsSet_) {
        val[utility::conversions::to_string_t("log_description")] = ModelBase::toJson(logDescription_);
    }
    if(operateUserIsSet_) {
        val[utility::conversions::to_string_t("operate_user")] = ModelBase::toJson(operateUser_);
    }
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }

    return val;
}
bool OperationLogInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("operate_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operate_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operate_user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operate_user"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperateUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorCode(refVal);
        }
    }
    return ok;
}


std::string OperationLogInfo::getOperateTime() const
{
    return operateTime_;
}

void OperationLogInfo::setOperateTime(const std::string& value)
{
    operateTime_ = value;
    operateTimeIsSet_ = true;
}

bool OperationLogInfo::operateTimeIsSet() const
{
    return operateTimeIsSet_;
}

void OperationLogInfo::unsetoperateTime()
{
    operateTimeIsSet_ = false;
}

std::string OperationLogInfo::getLogType() const
{
    return logType_;
}

void OperationLogInfo::setLogType(const std::string& value)
{
    logType_ = value;
    logTypeIsSet_ = true;
}

bool OperationLogInfo::logTypeIsSet() const
{
    return logTypeIsSet_;
}

void OperationLogInfo::unsetlogType()
{
    logTypeIsSet_ = false;
}

std::string OperationLogInfo::getLogDescription() const
{
    return logDescription_;
}

void OperationLogInfo::setLogDescription(const std::string& value)
{
    logDescription_ = value;
    logDescriptionIsSet_ = true;
}

bool OperationLogInfo::logDescriptionIsSet() const
{
    return logDescriptionIsSet_;
}

void OperationLogInfo::unsetlogDescription()
{
    logDescriptionIsSet_ = false;
}

std::string OperationLogInfo::getOperateUser() const
{
    return operateUser_;
}

void OperationLogInfo::setOperateUser(const std::string& value)
{
    operateUser_ = value;
    operateUserIsSet_ = true;
}

bool OperationLogInfo::operateUserIsSet() const
{
    return operateUserIsSet_;
}

void OperationLogInfo::unsetoperateUser()
{
    operateUserIsSet_ = false;
}

std::string OperationLogInfo::getErrorCode() const
{
    return errorCode_;
}

void OperationLogInfo::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool OperationLogInfo::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void OperationLogInfo::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

}
}
}
}
}


