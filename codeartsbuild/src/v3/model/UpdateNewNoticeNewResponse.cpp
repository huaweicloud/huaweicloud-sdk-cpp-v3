

#include "huaweicloud/codeartsbuild/v3/model/UpdateNewNoticeNewResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




UpdateNewNoticeNewResponse::UpdateNewNoticeNewResponse()
{
    result_ = "";
    resultIsSet_ = false;
    error_ = "";
    errorIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

UpdateNewNoticeNewResponse::~UpdateNewNoticeNewResponse() = default;

void UpdateNewNoticeNewResponse::validate()
{
}

web::json::value UpdateNewNoticeNewResponse::toJson() const
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
bool UpdateNewNoticeNewResponse::fromJson(const web::json::value& val)
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


std::string UpdateNewNoticeNewResponse::getResult() const
{
    return result_;
}

void UpdateNewNoticeNewResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool UpdateNewNoticeNewResponse::resultIsSet() const
{
    return resultIsSet_;
}

void UpdateNewNoticeNewResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string UpdateNewNoticeNewResponse::getError() const
{
    return error_;
}

void UpdateNewNoticeNewResponse::setError(const std::string& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool UpdateNewNoticeNewResponse::errorIsSet() const
{
    return errorIsSet_;
}

void UpdateNewNoticeNewResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string UpdateNewNoticeNewResponse::getStatus() const
{
    return status_;
}

void UpdateNewNoticeNewResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateNewNoticeNewResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateNewNoticeNewResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


