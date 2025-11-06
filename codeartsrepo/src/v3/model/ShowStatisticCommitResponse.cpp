

#include "huaweicloud/codeartsrepo/v3/model/ShowStatisticCommitResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




ShowStatisticCommitResponse::ShowStatisticCommitResponse()
{
    errorIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ShowStatisticCommitResponse::~ShowStatisticCommitResponse() = default;

void ShowStatisticCommitResponse::validate()
{
}

web::json::value ShowStatisticCommitResponse::toJson() const
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
bool ShowStatisticCommitResponse::fromJson(const web::json::value& val)
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
            CommitStatistic refVal;
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


Error ShowStatisticCommitResponse::getError() const
{
    return error_;
}

void ShowStatisticCommitResponse::setError(const Error& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowStatisticCommitResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShowStatisticCommitResponse::unseterror()
{
    errorIsSet_ = false;
}

CommitStatistic ShowStatisticCommitResponse::getResult() const
{
    return result_;
}

void ShowStatisticCommitResponse::setResult(const CommitStatistic& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowStatisticCommitResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowStatisticCommitResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ShowStatisticCommitResponse::getStatus() const
{
    return status_;
}

void ShowStatisticCommitResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowStatisticCommitResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowStatisticCommitResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


