

#include "huaweicloud/codehub/v3/model/AddSshKeyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




AddSshKeyResponse::AddSshKeyResponse()
{
    errorIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

AddSshKeyResponse::~AddSshKeyResponse() = default;

void AddSshKeyResponse::validate()
{
}

web::json::value AddSshKeyResponse::toJson() const
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
bool AddSshKeyResponse::fromJson(const web::json::value& val)
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
            PublicKey refVal;
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


Error AddSshKeyResponse::getError() const
{
    return error_;
}

void AddSshKeyResponse::setError(const Error& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool AddSshKeyResponse::errorIsSet() const
{
    return errorIsSet_;
}

void AddSshKeyResponse::unseterror()
{
    errorIsSet_ = false;
}

PublicKey AddSshKeyResponse::getResult() const
{
    return result_;
}

void AddSshKeyResponse::setResult(const PublicKey& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool AddSshKeyResponse::resultIsSet() const
{
    return resultIsSet_;
}

void AddSshKeyResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string AddSshKeyResponse::getStatus() const
{
    return status_;
}

void AddSshKeyResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AddSshKeyResponse::statusIsSet() const
{
    return statusIsSet_;
}

void AddSshKeyResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


