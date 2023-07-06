

#include "huaweicloud/drs/v3/model/CreateCompareTaskResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




CreateCompareTaskResult::CreateCompareTaskResult()
{
    compareTaskId_ = "";
    compareTaskIdIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    errorMsg_ = "";
    errorMsgIsSet_ = false;
}

CreateCompareTaskResult::~CreateCompareTaskResult() = default;

void CreateCompareTaskResult::validate()
{
}

web::json::value CreateCompareTaskResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(compareTaskIdIsSet_) {
        val[utility::conversions::to_string_t("compare_task_id")] = ModelBase::toJson(compareTaskId_);
    }
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(errorMsgIsSet_) {
        val[utility::conversions::to_string_t("error_msg")] = ModelBase::toJson(errorMsg_);
    }

    return val;
}

bool CreateCompareTaskResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("compare_task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compare_task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompareTaskId(refVal);
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

std::string CreateCompareTaskResult::getCompareTaskId() const
{
    return compareTaskId_;
}

void CreateCompareTaskResult::setCompareTaskId(const std::string& value)
{
    compareTaskId_ = value;
    compareTaskIdIsSet_ = true;
}

bool CreateCompareTaskResult::compareTaskIdIsSet() const
{
    return compareTaskIdIsSet_;
}

void CreateCompareTaskResult::unsetcompareTaskId()
{
    compareTaskIdIsSet_ = false;
}

std::string CreateCompareTaskResult::getErrorCode() const
{
    return errorCode_;
}

void CreateCompareTaskResult::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool CreateCompareTaskResult::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void CreateCompareTaskResult::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string CreateCompareTaskResult::getErrorMsg() const
{
    return errorMsg_;
}

void CreateCompareTaskResult::setErrorMsg(const std::string& value)
{
    errorMsg_ = value;
    errorMsgIsSet_ = true;
}

bool CreateCompareTaskResult::errorMsgIsSet() const
{
    return errorMsgIsSet_;
}

void CreateCompareTaskResult::unseterrorMsg()
{
    errorMsgIsSet_ = false;
}

}
}
}
}
}


