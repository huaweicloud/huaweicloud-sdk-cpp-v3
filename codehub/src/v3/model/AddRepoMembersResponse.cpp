

#include "huaweicloud/codehub/v3/model/AddRepoMembersResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




AddRepoMembersResponse::AddRepoMembersResponse()
{
    errorIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

AddRepoMembersResponse::~AddRepoMembersResponse() = default;

void AddRepoMembersResponse::validate()
{
}

web::json::value AddRepoMembersResponse::toJson() const
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
bool AddRepoMembersResponse::fromJson(const web::json::value& val)
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
            std::vector<CreateRepoMemberResult> refVal;
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


Error AddRepoMembersResponse::getError() const
{
    return error_;
}

void AddRepoMembersResponse::setError(const Error& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool AddRepoMembersResponse::errorIsSet() const
{
    return errorIsSet_;
}

void AddRepoMembersResponse::unseterror()
{
    errorIsSet_ = false;
}

std::vector<CreateRepoMemberResult>& AddRepoMembersResponse::getResult()
{
    return result_;
}

void AddRepoMembersResponse::setResult(const std::vector<CreateRepoMemberResult>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool AddRepoMembersResponse::resultIsSet() const
{
    return resultIsSet_;
}

void AddRepoMembersResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string AddRepoMembersResponse::getStatus() const
{
    return status_;
}

void AddRepoMembersResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AddRepoMembersResponse::statusIsSet() const
{
    return statusIsSet_;
}

void AddRepoMembersResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


