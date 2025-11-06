

#include "huaweicloud/codeartsrepo/v3/model/ShowReviewSettingResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




ShowReviewSettingResponse::ShowReviewSettingResponse()
{
    errorIsSet_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ShowReviewSettingResponse::~ShowReviewSettingResponse() = default;

void ShowReviewSettingResponse::validate()
{
}

web::json::value ShowReviewSettingResponse::toJson() const
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
bool ShowReviewSettingResponse::fromJson(const web::json::value& val)
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
            ReviewSettingDto refVal;
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


Error ShowReviewSettingResponse::getError() const
{
    return error_;
}

void ShowReviewSettingResponse::setError(const Error& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowReviewSettingResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShowReviewSettingResponse::unseterror()
{
    errorIsSet_ = false;
}

ReviewSettingDto ShowReviewSettingResponse::getResult() const
{
    return result_;
}

void ShowReviewSettingResponse::setResult(const ReviewSettingDto& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowReviewSettingResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowReviewSettingResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ShowReviewSettingResponse::getStatus() const
{
    return status_;
}

void ShowReviewSettingResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowReviewSettingResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowReviewSettingResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


