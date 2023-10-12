

#include "huaweicloud/drs/v3/model/CreateCompareTaskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




CreateCompareTaskResponse::CreateCompareTaskResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    objectLevelCompareCreateResultIsSet_ = false;
    dataLevelCompareCreateResultIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

CreateCompareTaskResponse::~CreateCompareTaskResponse() = default;

void CreateCompareTaskResponse::validate()
{
}

web::json::value CreateCompareTaskResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(objectLevelCompareCreateResultIsSet_) {
        val[utility::conversions::to_string_t("object_level_compare_create_result")] = ModelBase::toJson(objectLevelCompareCreateResult_);
    }
    if(dataLevelCompareCreateResultIsSet_) {
        val[utility::conversions::to_string_t("data_level_compare_create_result")] = ModelBase::toJson(dataLevelCompareCreateResult_);
    }
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(errorMsgIsSet_) {
        val[utility::conversions::to_string_t("error_msg")] = ModelBase::toJson(errorMsg_);
    }

    return val;
}
bool CreateCompareTaskResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("object_level_compare_create_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_level_compare_create_result"));
        if(!fieldValue.is_null())
        {
            CreateCompareTaskResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectLevelCompareCreateResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_level_compare_create_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_level_compare_create_result"));
        if(!fieldValue.is_null())
        {
            CreateCompareTaskResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataLevelCompareCreateResult(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("error_msg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_msg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorMsg(refVal);
        }
    }
    return ok;
}


std::string CreateCompareTaskResponse::getJobId() const
{
    return jobId_;
}

void CreateCompareTaskResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateCompareTaskResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateCompareTaskResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

CreateCompareTaskResult CreateCompareTaskResponse::getObjectLevelCompareCreateResult() const
{
    return objectLevelCompareCreateResult_;
}

void CreateCompareTaskResponse::setObjectLevelCompareCreateResult(const CreateCompareTaskResult& value)
{
    objectLevelCompareCreateResult_ = value;
    objectLevelCompareCreateResultIsSet_ = true;
}

bool CreateCompareTaskResponse::objectLevelCompareCreateResultIsSet() const
{
    return objectLevelCompareCreateResultIsSet_;
}

void CreateCompareTaskResponse::unsetobjectLevelCompareCreateResult()
{
    objectLevelCompareCreateResultIsSet_ = false;
}

CreateCompareTaskResult CreateCompareTaskResponse::getDataLevelCompareCreateResult() const
{
    return dataLevelCompareCreateResult_;
}

void CreateCompareTaskResponse::setDataLevelCompareCreateResult(const CreateCompareTaskResult& value)
{
    dataLevelCompareCreateResult_ = value;
    dataLevelCompareCreateResultIsSet_ = true;
}

bool CreateCompareTaskResponse::dataLevelCompareCreateResultIsSet() const
{
    return dataLevelCompareCreateResultIsSet_;
}

void CreateCompareTaskResponse::unsetdataLevelCompareCreateResult()
{
    dataLevelCompareCreateResultIsSet_ = false;
}

std::string CreateCompareTaskResponse::getErrorCode() const
{
    return errorCode_;
}

void CreateCompareTaskResponse::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool CreateCompareTaskResponse::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void CreateCompareTaskResponse::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string CreateCompareTaskResponse::getErrorMsg() const
{
    return errorMsg_;
}

void CreateCompareTaskResponse::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool CreateCompareTaskResponse::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void CreateCompareTaskResponse::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


