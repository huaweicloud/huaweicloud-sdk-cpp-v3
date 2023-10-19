

#include "huaweicloud/codeartsbuild/v3/model/ShowRecordInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowRecordInfoResponse::ShowRecordInfoResponse()
{
    success_ = false;
    successIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    errCode_ = "";
    errCodeIsSet_ = false;
    resultIsSet_ = false;
}

ShowRecordInfoResponse::~ShowRecordInfoResponse() = default;

void ShowRecordInfoResponse::validate()
{
}

web::json::value ShowRecordInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(successIsSet_) {
        val[utility::conversions::to_string_t("success")] = ModelBase::toJson(success_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(errCodeIsSet_) {
        val[utility::conversions::to_string_t("err_code")] = ModelBase::toJson(errCode_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool ShowRecordInfoResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("success"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("success"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuccess(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("err_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("err_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            RecordInfo_result refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


bool ShowRecordInfoResponse::isSuccess() const
{
    return success_;
}

void ShowRecordInfoResponse::setSuccess(bool value)
{
    success_ = value;
    successIsSet_ = true;
}

bool ShowRecordInfoResponse::successIsSet() const
{
    return successIsSet_;
}

void ShowRecordInfoResponse::unsetsuccess()
{
    successIsSet_ = false;
}

std::string ShowRecordInfoResponse::getMessage() const
{
    return message_;
}

void ShowRecordInfoResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ShowRecordInfoResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ShowRecordInfoResponse::unsetmessage()
{
    messageIsSet_ = false;
}

std::string ShowRecordInfoResponse::getErrCode() const
{
    return errCode_;
}

void ShowRecordInfoResponse::setErrCode(const std::string& value)
{
    errCode_ = value;
    errCodeIsSet_ = true;
}

bool ShowRecordInfoResponse::errCodeIsSet() const
{
    return errCodeIsSet_;
}

void ShowRecordInfoResponse::unseterrCode()
{
    errCodeIsSet_ = false;
}

RecordInfo_result ShowRecordInfoResponse::getResult() const
{
    return result_;
}

void ShowRecordInfoResponse::setResult(const RecordInfo_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowRecordInfoResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowRecordInfoResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


