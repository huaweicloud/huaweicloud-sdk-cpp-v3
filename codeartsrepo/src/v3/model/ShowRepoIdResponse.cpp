

#include "huaweicloud/codeartsrepo/v3/model/ShowRepoIdResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




ShowRepoIdResponse::ShowRepoIdResponse()
{
    errorIsSet_ = false;
    result_ = 0;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ShowRepoIdResponse::~ShowRepoIdResponse() = default;

void ShowRepoIdResponse::validate()
{
}

web::json::value ShowRepoIdResponse::toJson() const
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
bool ShowRepoIdResponse::fromJson(const web::json::value& val)
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
            int32_t refVal;
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


Error ShowRepoIdResponse::getError() const
{
    return error_;
}

void ShowRepoIdResponse::setError(const Error& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowRepoIdResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShowRepoIdResponse::unseterror()
{
    errorIsSet_ = false;
}

int32_t ShowRepoIdResponse::getResult() const
{
    return result_;
}

void ShowRepoIdResponse::setResult(int32_t value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowRepoIdResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowRepoIdResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ShowRepoIdResponse::getStatus() const
{
    return status_;
}

void ShowRepoIdResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowRepoIdResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowRepoIdResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


