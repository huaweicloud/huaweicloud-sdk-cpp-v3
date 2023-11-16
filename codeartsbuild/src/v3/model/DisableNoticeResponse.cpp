

#include "huaweicloud/codeartsbuild/v3/model/DisableNoticeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




DisableNoticeResponse::DisableNoticeResponse()
{
    result_ = "";
    resultIsSet_ = false;
    error_ = "";
    errorIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

DisableNoticeResponse::~DisableNoticeResponse() = default;

void DisableNoticeResponse::validate()
{
}

web::json::value DisableNoticeResponse::toJson() const
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
bool DisableNoticeResponse::fromJson(const web::json::value& val)
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


std::string DisableNoticeResponse::getResult() const
{
    return result_;
}

void DisableNoticeResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool DisableNoticeResponse::resultIsSet() const
{
    return resultIsSet_;
}

void DisableNoticeResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string DisableNoticeResponse::getError() const
{
    return error_;
}

void DisableNoticeResponse::setError(const std::string& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool DisableNoticeResponse::errorIsSet() const
{
    return errorIsSet_;
}

void DisableNoticeResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string DisableNoticeResponse::getStatus() const
{
    return status_;
}

void DisableNoticeResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DisableNoticeResponse::statusIsSet() const
{
    return statusIsSet_;
}

void DisableNoticeResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


