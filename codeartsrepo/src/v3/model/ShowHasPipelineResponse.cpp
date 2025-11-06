

#include "huaweicloud/codeartsrepo/v3/model/ShowHasPipelineResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




ShowHasPipelineResponse::ShowHasPipelineResponse()
{
    errorIsSet_ = false;
    result_ = false;
    resultIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ShowHasPipelineResponse::~ShowHasPipelineResponse() = default;

void ShowHasPipelineResponse::validate()
{
}

web::json::value ShowHasPipelineResponse::toJson() const
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
bool ShowHasPipelineResponse::fromJson(const web::json::value& val)
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
            bool refVal;
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


Error ShowHasPipelineResponse::getError() const
{
    return error_;
}

void ShowHasPipelineResponse::setError(const Error& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowHasPipelineResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShowHasPipelineResponse::unseterror()
{
    errorIsSet_ = false;
}

bool ShowHasPipelineResponse::isResult() const
{
    return result_;
}

void ShowHasPipelineResponse::setResult(bool value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowHasPipelineResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowHasPipelineResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ShowHasPipelineResponse::getStatus() const
{
    return status_;
}

void ShowHasPipelineResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowHasPipelineResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowHasPipelineResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


