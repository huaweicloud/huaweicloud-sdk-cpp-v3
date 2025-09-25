

#include "huaweicloud/codehub/v3/model/ListUserAllRepositoriesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




ListUserAllRepositoriesResponse::ListUserAllRepositoriesResponse()
{
    errorIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ListUserAllRepositoriesResponse::~ListUserAllRepositoriesResponse() = default;

void ListUserAllRepositoriesResponse::validate()
{
}

web::json::value ListUserAllRepositoriesResponse::toJson() const
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
bool ListUserAllRepositoriesResponse::fromJson(const web::json::value& val)
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
            RepoListInfoV2 refVal;
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


Error ListUserAllRepositoriesResponse::getError() const
{
    return error_;
}

void ListUserAllRepositoriesResponse::setError(const Error& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListUserAllRepositoriesResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListUserAllRepositoriesResponse::unseterror()
{
    errorIsSet_ = false;
}

RepoListInfoV2 ListUserAllRepositoriesResponse::getResult() const
{
    return result_;
}

void ListUserAllRepositoriesResponse::setResult(const RepoListInfoV2& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListUserAllRepositoriesResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListUserAllRepositoriesResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ListUserAllRepositoriesResponse::getStatus() const
{
    return status_;
}

void ListUserAllRepositoriesResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListUserAllRepositoriesResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListUserAllRepositoriesResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


