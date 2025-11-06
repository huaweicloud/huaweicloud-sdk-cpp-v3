

#include "huaweicloud/codeartsrepo/v3/model/ListCommitStatisticsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




ListCommitStatisticsResponse::ListCommitStatisticsResponse()
{
    errorIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ListCommitStatisticsResponse::~ListCommitStatisticsResponse() = default;

void ListCommitStatisticsResponse::validate()
{
}

web::json::value ListCommitStatisticsResponse::toJson() const
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
bool ListCommitStatisticsResponse::fromJson(const web::json::value& val)
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
            RepoCommitStatistics refVal;
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


Error ListCommitStatisticsResponse::getError() const
{
    return error_;
}

void ListCommitStatisticsResponse::setError(const Error& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListCommitStatisticsResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListCommitStatisticsResponse::unseterror()
{
    errorIsSet_ = false;
}

RepoCommitStatistics ListCommitStatisticsResponse::getResult() const
{
    return result_;
}

void ListCommitStatisticsResponse::setResult(const RepoCommitStatistics& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListCommitStatisticsResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListCommitStatisticsResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ListCommitStatisticsResponse::getStatus() const
{
    return status_;
}

void ListCommitStatisticsResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListCommitStatisticsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListCommitStatisticsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


