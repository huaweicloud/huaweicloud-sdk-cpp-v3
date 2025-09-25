

#include "huaweicloud/codehub/v3/model/ListRelatedCommitsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




ListRelatedCommitsResponse::ListRelatedCommitsResponse()
{
    errorIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ListRelatedCommitsResponse::~ListRelatedCommitsResponse() = default;

void ListRelatedCommitsResponse::validate()
{
}

web::json::value ListRelatedCommitsResponse::toJson() const
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
bool ListRelatedCommitsResponse::fromJson(const web::json::value& val)
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
            RelatedCommitListVo refVal;
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


Error ListRelatedCommitsResponse::getError() const
{
    return error_;
}

void ListRelatedCommitsResponse::setError(const Error& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListRelatedCommitsResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListRelatedCommitsResponse::unseterror()
{
    errorIsSet_ = false;
}

RelatedCommitListVo ListRelatedCommitsResponse::getResult() const
{
    return result_;
}

void ListRelatedCommitsResponse::setResult(const RelatedCommitListVo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListRelatedCommitsResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListRelatedCommitsResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ListRelatedCommitsResponse::getStatus() const
{
    return status_;
}

void ListRelatedCommitsResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListRelatedCommitsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListRelatedCommitsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


