

#include "huaweicloud/codehub/v3/model/ShowDiffCommitResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




ShowDiffCommitResponse::ShowDiffCommitResponse()
{
    errorIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ShowDiffCommitResponse::~ShowDiffCommitResponse() = default;

void ShowDiffCommitResponse::validate()
{
}

web::json::value ShowDiffCommitResponse::toJson() const
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
bool ShowDiffCommitResponse::fromJson(const web::json::value& val)
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
            std::vector<DiffCommitInfo> refVal;
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


Error ShowDiffCommitResponse::getError() const
{
    return error_;
}

void ShowDiffCommitResponse::setError(const Error& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowDiffCommitResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShowDiffCommitResponse::unseterror()
{
    errorIsSet_ = false;
}

std::vector<DiffCommitInfo>& ShowDiffCommitResponse::getResult()
{
    return result_;
}

void ShowDiffCommitResponse::setResult(const std::vector<DiffCommitInfo>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowDiffCommitResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowDiffCommitResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ShowDiffCommitResponse::getStatus() const
{
    return status_;
}

void ShowDiffCommitResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowDiffCommitResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowDiffCommitResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


