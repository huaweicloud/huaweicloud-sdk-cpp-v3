

#include "huaweicloud/codeartsrepo/v3/model/ValidateHttpsInfoV2Response.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




ValidateHttpsInfoV2Response::ValidateHttpsInfoV2Response()
{
    errorIsSet_ = false;
    result_ = "";
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ValidateHttpsInfoV2Response::~ValidateHttpsInfoV2Response() = default;

void ValidateHttpsInfoV2Response::validate()
{
}

web::json::value ValidateHttpsInfoV2Response::toJson() const
{
    web::json::value val = web::json::value::object();

    if(errorIsSet_) {
        val[utility::conversions::to_string_t("error")] = ModelBase::toJson(error_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool ValidateHttpsInfoV2Response::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("error"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error"));
        if(!fieldValue.is_null())
        {
            Error refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setError(refVal);
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


Error ValidateHttpsInfoV2Response::getError() const
{
    return error_;
}

void ValidateHttpsInfoV2Response::setError(const Error& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ValidateHttpsInfoV2Response::errorIsSet() const
{
    return errorIsSet_;
}

void ValidateHttpsInfoV2Response::unseterror()
{
    errorIsSet_ = false;
}

std::string ValidateHttpsInfoV2Response::getResult() const
{
    return result_;
}

void ValidateHttpsInfoV2Response::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ValidateHttpsInfoV2Response::resultIsSet() const
{
    return resultIsSet_;
}

void ValidateHttpsInfoV2Response::unsetresult()
{
    resultIsSet_ = false;
}

std::string ValidateHttpsInfoV2Response::getStatus() const
{
    return status_;
}

void ValidateHttpsInfoV2Response::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ValidateHttpsInfoV2Response::statusIsSet() const
{
    return statusIsSet_;
}

void ValidateHttpsInfoV2Response::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


