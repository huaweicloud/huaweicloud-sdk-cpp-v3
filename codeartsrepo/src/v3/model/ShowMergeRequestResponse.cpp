

#include "huaweicloud/codeartsrepo/v3/model/ShowMergeRequestResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




ShowMergeRequestResponse::ShowMergeRequestResponse()
{
    errorIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ShowMergeRequestResponse::~ShowMergeRequestResponse() = default;

void ShowMergeRequestResponse::validate()
{
}

web::json::value ShowMergeRequestResponse::toJson() const
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
bool ShowMergeRequestResponse::fromJson(const web::json::value& val)
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
            MergeInfoResult refVal;
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


Error ShowMergeRequestResponse::getError() const
{
    return error_;
}

void ShowMergeRequestResponse::setError(const Error& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowMergeRequestResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShowMergeRequestResponse::unseterror()
{
    errorIsSet_ = false;
}

MergeInfoResult ShowMergeRequestResponse::getResult() const
{
    return result_;
}

void ShowMergeRequestResponse::setResult(const MergeInfoResult& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowMergeRequestResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowMergeRequestResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ShowMergeRequestResponse::getStatus() const
{
    return status_;
}

void ShowMergeRequestResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowMergeRequestResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowMergeRequestResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


