

#include "huaweicloud/codeartsbuild/v3/model/ShowJobStepStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowJobStepStatusResponse::ShowJobStepStatusResponse()
{
    resultIsSet_ = false;
    error_ = "";
    errorIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ShowJobStepStatusResponse::~ShowJobStepStatusResponse() = default;

void ShowJobStepStatusResponse::validate()
{
}

web::json::value ShowJobStepStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(errorIsSet_) {
        val[utility::conversions::to_string_t("error")] = ModelBase::toJson(error_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool ShowJobStepStatusResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            JobStatusBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setError(refVal);
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


JobStatusBody ShowJobStepStatusResponse::getResult() const
{
    return result_;
}

void ShowJobStepStatusResponse::setResult(const JobStatusBody& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowJobStepStatusResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowJobStepStatusResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ShowJobStepStatusResponse::getError() const
{
    return error_;
}

void ShowJobStepStatusResponse::setError(const std::string& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowJobStepStatusResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShowJobStepStatusResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ShowJobStepStatusResponse::getStatus() const
{
    return status_;
}

void ShowJobStepStatusResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowJobStepStatusResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowJobStepStatusResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


