

#include "huaweicloud/codeartsrepo/v3/model/SetRepoRoleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




SetRepoRoleResponse::SetRepoRoleResponse()
{
    errorIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

SetRepoRoleResponse::~SetRepoRoleResponse() = default;

void SetRepoRoleResponse::validate()
{
}

web::json::value SetRepoRoleResponse::toJson() const
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
bool SetRepoRoleResponse::fromJson(const web::json::value& val)
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
            Empty refVal;
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


Error SetRepoRoleResponse::getError() const
{
    return error_;
}

void SetRepoRoleResponse::setError(const Error& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool SetRepoRoleResponse::errorIsSet() const
{
    return errorIsSet_;
}

void SetRepoRoleResponse::unseterror()
{
    errorIsSet_ = false;
}

Empty SetRepoRoleResponse::getResult() const
{
    return result_;
}

void SetRepoRoleResponse::setResult(const Empty& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool SetRepoRoleResponse::resultIsSet() const
{
    return resultIsSet_;
}

void SetRepoRoleResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string SetRepoRoleResponse::getStatus() const
{
    return status_;
}

void SetRepoRoleResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SetRepoRoleResponse::statusIsSet() const
{
    return statusIsSet_;
}

void SetRepoRoleResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


