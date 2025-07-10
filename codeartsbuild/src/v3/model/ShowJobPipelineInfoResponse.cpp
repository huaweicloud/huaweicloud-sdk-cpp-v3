

#include "huaweicloud/codeartsbuild/v3/model/ShowJobPipelineInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowJobPipelineInfoResponse::ShowJobPipelineInfoResponse()
{
    resultIsSet_ = false;
    error_ = "";
    errorIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ShowJobPipelineInfoResponse::~ShowJobPipelineInfoResponse() = default;

void ShowJobPipelineInfoResponse::validate()
{
}

web::json::value ShowJobPipelineInfoResponse::toJson() const
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
bool ShowJobPipelineInfoResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            JobPipelineInfoItems refVal;
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


JobPipelineInfoItems ShowJobPipelineInfoResponse::getResult() const
{
    return result_;
}

void ShowJobPipelineInfoResponse::setResult(const JobPipelineInfoItems& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowJobPipelineInfoResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowJobPipelineInfoResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ShowJobPipelineInfoResponse::getError() const
{
    return error_;
}

void ShowJobPipelineInfoResponse::setError(const std::string& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowJobPipelineInfoResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShowJobPipelineInfoResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ShowJobPipelineInfoResponse::getStatus() const
{
    return status_;
}

void ShowJobPipelineInfoResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowJobPipelineInfoResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowJobPipelineInfoResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


