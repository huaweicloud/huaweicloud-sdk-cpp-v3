

#include "huaweicloud/codeartsrepo/v3/model/ListBranchesByRepositoryIdResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




ListBranchesByRepositoryIdResponse::ListBranchesByRepositoryIdResponse()
{
    errorIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ListBranchesByRepositoryIdResponse::~ListBranchesByRepositoryIdResponse() = default;

void ListBranchesByRepositoryIdResponse::validate()
{
}

web::json::value ListBranchesByRepositoryIdResponse::toJson() const
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
bool ListBranchesByRepositoryIdResponse::fromJson(const web::json::value& val)
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
            BranchResponse refVal;
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


Error ListBranchesByRepositoryIdResponse::getError() const
{
    return error_;
}

void ListBranchesByRepositoryIdResponse::setError(const Error& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListBranchesByRepositoryIdResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListBranchesByRepositoryIdResponse::unseterror()
{
    errorIsSet_ = false;
}

BranchResponse ListBranchesByRepositoryIdResponse::getResult() const
{
    return result_;
}

void ListBranchesByRepositoryIdResponse::setResult(const BranchResponse& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListBranchesByRepositoryIdResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListBranchesByRepositoryIdResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ListBranchesByRepositoryIdResponse::getStatus() const
{
    return status_;
}

void ListBranchesByRepositoryIdResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListBranchesByRepositoryIdResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListBranchesByRepositoryIdResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


