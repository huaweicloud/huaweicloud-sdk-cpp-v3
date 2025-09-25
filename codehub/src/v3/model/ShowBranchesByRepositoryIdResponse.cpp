

#include "huaweicloud/codehub/v3/model/ShowBranchesByRepositoryIdResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




ShowBranchesByRepositoryIdResponse::ShowBranchesByRepositoryIdResponse()
{
    errorIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ShowBranchesByRepositoryIdResponse::~ShowBranchesByRepositoryIdResponse() = default;

void ShowBranchesByRepositoryIdResponse::validate()
{
}

web::json::value ShowBranchesByRepositoryIdResponse::toJson() const
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
bool ShowBranchesByRepositoryIdResponse::fromJson(const web::json::value& val)
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
            BranchList refVal;
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


Error ShowBranchesByRepositoryIdResponse::getError() const
{
    return error_;
}

void ShowBranchesByRepositoryIdResponse::setError(const Error& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowBranchesByRepositoryIdResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShowBranchesByRepositoryIdResponse::unseterror()
{
    errorIsSet_ = false;
}

BranchList ShowBranchesByRepositoryIdResponse::getResult() const
{
    return result_;
}

void ShowBranchesByRepositoryIdResponse::setResult(const BranchList& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowBranchesByRepositoryIdResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowBranchesByRepositoryIdResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ShowBranchesByRepositoryIdResponse::getStatus() const
{
    return status_;
}

void ShowBranchesByRepositoryIdResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowBranchesByRepositoryIdResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowBranchesByRepositoryIdResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


