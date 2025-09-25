

#include "huaweicloud/codehub/v3/model/ListRepoMembersResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




ListRepoMembersResponse::ListRepoMembersResponse()
{
    errorIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ListRepoMembersResponse::~ListRepoMembersResponse() = default;

void ListRepoMembersResponse::validate()
{
}

web::json::value ListRepoMembersResponse::toJson() const
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
bool ListRepoMembersResponse::fromJson(const web::json::value& val)
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
            RepositoryMemberList refVal;
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


Error ListRepoMembersResponse::getError() const
{
    return error_;
}

void ListRepoMembersResponse::setError(const Error& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListRepoMembersResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListRepoMembersResponse::unseterror()
{
    errorIsSet_ = false;
}

RepositoryMemberList ListRepoMembersResponse::getResult() const
{
    return result_;
}

void ListRepoMembersResponse::setResult(const RepositoryMemberList& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListRepoMembersResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListRepoMembersResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ListRepoMembersResponse::getStatus() const
{
    return status_;
}

void ListRepoMembersResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListRepoMembersResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListRepoMembersResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


