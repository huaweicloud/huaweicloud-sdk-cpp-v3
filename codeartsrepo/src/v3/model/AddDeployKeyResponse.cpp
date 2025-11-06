

#include "huaweicloud/codeartsrepo/v3/model/AddDeployKeyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




AddDeployKeyResponse::AddDeployKeyResponse()
{
    errorIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

AddDeployKeyResponse::~AddDeployKeyResponse() = default;

void AddDeployKeyResponse::validate()
{
}

web::json::value AddDeployKeyResponse::toJson() const
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
bool AddDeployKeyResponse::fromJson(const web::json::value& val)
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
            Key refVal;
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


Error AddDeployKeyResponse::getError() const
{
    return error_;
}

void AddDeployKeyResponse::setError(const Error& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool AddDeployKeyResponse::errorIsSet() const
{
    return errorIsSet_;
}

void AddDeployKeyResponse::unseterror()
{
    errorIsSet_ = false;
}

Key AddDeployKeyResponse::getResult() const
{
    return result_;
}

void AddDeployKeyResponse::setResult(const Key& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool AddDeployKeyResponse::resultIsSet() const
{
    return resultIsSet_;
}

void AddDeployKeyResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string AddDeployKeyResponse::getStatus() const
{
    return status_;
}

void AddDeployKeyResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AddDeployKeyResponse::statusIsSet() const
{
    return statusIsSet_;
}

void AddDeployKeyResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


