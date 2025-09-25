

#include "huaweicloud/codehub/v3/model/ShowCommitsByRepoIdResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




ShowCommitsByRepoIdResponse::ShowCommitsByRepoIdResponse()
{
    errorIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ShowCommitsByRepoIdResponse::~ShowCommitsByRepoIdResponse() = default;

void ShowCommitsByRepoIdResponse::validate()
{
}

web::json::value ShowCommitsByRepoIdResponse::toJson() const
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
bool ShowCommitsByRepoIdResponse::fromJson(const web::json::value& val)
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
            CommitList refVal;
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


Error ShowCommitsByRepoIdResponse::getError() const
{
    return error_;
}

void ShowCommitsByRepoIdResponse::setError(const Error& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowCommitsByRepoIdResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShowCommitsByRepoIdResponse::unseterror()
{
    errorIsSet_ = false;
}

CommitList ShowCommitsByRepoIdResponse::getResult() const
{
    return result_;
}

void ShowCommitsByRepoIdResponse::setResult(const CommitList& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowCommitsByRepoIdResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowCommitsByRepoIdResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ShowCommitsByRepoIdResponse::getStatus() const
{
    return status_;
}

void ShowCommitsByRepoIdResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowCommitsByRepoIdResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowCommitsByRepoIdResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


