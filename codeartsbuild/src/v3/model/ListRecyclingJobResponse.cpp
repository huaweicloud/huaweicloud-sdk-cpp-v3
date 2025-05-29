

#include "huaweicloud/codeartsbuild/v3/model/ListRecyclingJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ListRecyclingJobResponse::ListRecyclingJobResponse()
{
    success_ = false;
    successIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    errCode_ = "";
    errCodeIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ListRecyclingJobResponse::~ListRecyclingJobResponse() = default;

void ListRecyclingJobResponse::validate()
{
}

web::json::value ListRecyclingJobResponse::toJson() const
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
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool ListRecyclingJobResponse::fromJson(const web::json::value& val)
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
            RecyclingJobs_result refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


bool ListRecyclingJobResponse::isSuccess() const
{
    return success_;
}

void ListRecyclingJobResponse::setSuccess(bool value)
{
    success_ = value;
    successIsSet_ = true;
}

bool ListRecyclingJobResponse::successIsSet() const
{
    return successIsSet_;
}

void ListRecyclingJobResponse::unsetsuccess()
{
    successIsSet_ = false;
}

std::string ListRecyclingJobResponse::getMessage() const
{
    return message_;
}

void ListRecyclingJobResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ListRecyclingJobResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ListRecyclingJobResponse::unsetmessage()
{
    messageIsSet_ = false;
}

std::string ListRecyclingJobResponse::getErrCode() const
{
    return errCode_;
}

void ListRecyclingJobResponse::setErrCode(const std::string& value)
{
    errCode_ = value;
    errCodeIsSet_ = true;
}

bool ListRecyclingJobResponse::errCodeIsSet() const
{
    return errCodeIsSet_;
}

void ListRecyclingJobResponse::unseterrCode()
{
    errCodeIsSet_ = false;
}

RecyclingJobs_result ListRecyclingJobResponse::getResult() const
{
    return result_;
}

void ListRecyclingJobResponse::setResult(const RecyclingJobs_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListRecyclingJobResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListRecyclingJobResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ListRecyclingJobResponse::getStatus() const
{
    return status_;
}

void ListRecyclingJobResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListRecyclingJobResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListRecyclingJobResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


