

#include "huaweicloud/codeartsrepo/v3/model/ShowStatisticCommitV3Response.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




ShowStatisticCommitV3Response::ShowStatisticCommitV3Response()
{
    errorIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ShowStatisticCommitV3Response::~ShowStatisticCommitV3Response() = default;

void ShowStatisticCommitV3Response::validate()
{
}

web::json::value ShowStatisticCommitV3Response::toJson() const
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
bool ShowStatisticCommitV3Response::fromJson(const web::json::value& val)
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


Error ShowStatisticCommitV3Response::getError() const
{
    return error_;
}

void ShowStatisticCommitV3Response::setError(const Error& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowStatisticCommitV3Response::errorIsSet() const
{
    return errorIsSet_;
}

void ShowStatisticCommitV3Response::unseterror()
{
    errorIsSet_ = false;
}

CommitStatistic ShowStatisticCommitV3Response::getResult() const
{
    return result_;
}

void ShowStatisticCommitV3Response::setResult(const CommitStatistic& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowStatisticCommitV3Response::resultIsSet() const
{
    return resultIsSet_;
}

void ShowStatisticCommitV3Response::unsetresult()
{
    resultIsSet_ = false;
}

std::string ShowStatisticCommitV3Response::getStatus() const
{
    return status_;
}

void ShowStatisticCommitV3Response::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowStatisticCommitV3Response::statusIsSet() const
{
    return statusIsSet_;
}

void ShowStatisticCommitV3Response::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


