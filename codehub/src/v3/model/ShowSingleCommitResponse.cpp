

#include "huaweicloud/codehub/v3/model/ShowSingleCommitResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




ShowSingleCommitResponse::ShowSingleCommitResponse()
{
    errorIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ShowSingleCommitResponse::~ShowSingleCommitResponse() = default;

void ShowSingleCommitResponse::validate()
{
}

web::json::value ShowSingleCommitResponse::toJson() const
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
bool ShowSingleCommitResponse::fromJson(const web::json::value& val)
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
            SpecificCommitInfo refVal;
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


Error ShowSingleCommitResponse::getError() const
{
    return error_;
}

void ShowSingleCommitResponse::setError(const Error& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowSingleCommitResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShowSingleCommitResponse::unseterror()
{
    errorIsSet_ = false;
}

SpecificCommitInfo ShowSingleCommitResponse::getResult() const
{
    return result_;
}

void ShowSingleCommitResponse::setResult(const SpecificCommitInfo& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowSingleCommitResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowSingleCommitResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ShowSingleCommitResponse::getStatus() const
{
    return status_;
}

void ShowSingleCommitResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowSingleCommitResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowSingleCommitResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


