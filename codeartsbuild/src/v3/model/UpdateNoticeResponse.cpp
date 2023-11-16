

#include "huaweicloud/codeartsbuild/v3/model/UpdateNoticeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




UpdateNoticeResponse::UpdateNoticeResponse()
{
    result_ = "";
    resultIsSet_ = false;
    error_ = "";
    errorIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

UpdateNoticeResponse::~UpdateNoticeResponse() = default;

void UpdateNoticeResponse::validate()
{
}

web::json::value UpdateNoticeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(errorIsSet_) {
        val[utility::conversions::to_string_t("error")] = ModelBase::toJson(error_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool UpdateNoticeResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setError(refVal);
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


std::string UpdateNoticeResponse::getResult() const
{
    return result_;
}

void UpdateNoticeResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool UpdateNoticeResponse::resultIsSet() const
{
    return resultIsSet_;
}

void UpdateNoticeResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string UpdateNoticeResponse::getError() const
{
    return error_;
}

void UpdateNoticeResponse::setError(const std::string& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool UpdateNoticeResponse::errorIsSet() const
{
    return errorIsSet_;
}

void UpdateNoticeResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string UpdateNoticeResponse::getStatus() const
{
    return status_;
}

void UpdateNoticeResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateNoticeResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateNoticeResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


