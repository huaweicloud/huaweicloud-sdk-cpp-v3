

#include "huaweicloud/codehub/v3/model/ListCommitsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




ListCommitsResponse::ListCommitsResponse()
{
    errorIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ListCommitsResponse::~ListCommitsResponse() = default;

void ListCommitsResponse::validate()
{
}

web::json::value ListCommitsResponse::toJson() const
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
bool ListCommitsResponse::fromJson(const web::json::value& val)
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
            std::vector<CommitInfo> refVal;
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


Error ListCommitsResponse::getError() const
{
    return error_;
}

void ListCommitsResponse::setError(const Error& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListCommitsResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListCommitsResponse::unseterror()
{
    errorIsSet_ = false;
}

std::vector<CommitInfo>& ListCommitsResponse::getResult()
{
    return result_;
}

void ListCommitsResponse::setResult(const std::vector<CommitInfo>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListCommitsResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListCommitsResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ListCommitsResponse::getStatus() const
{
    return status_;
}

void ListCommitsResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListCommitsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListCommitsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


