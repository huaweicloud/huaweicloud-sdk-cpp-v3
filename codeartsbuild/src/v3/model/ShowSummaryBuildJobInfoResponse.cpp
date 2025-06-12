

#include "huaweicloud/codeartsbuild/v3/model/ShowSummaryBuildJobInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowSummaryBuildJobInfoResponse::ShowSummaryBuildJobInfoResponse()
{
    status_ = "";
    statusIsSet_ = false;
    errorIsSet_ = false;
    resultIsSet_ = false;
}

ShowSummaryBuildJobInfoResponse::~ShowSummaryBuildJobInfoResponse() = default;

void ShowSummaryBuildJobInfoResponse::validate()
{
}

web::json::value ShowSummaryBuildJobInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(errorIsSet_) {
        val[utility::conversions::to_string_t("error")] = ModelBase::toJson(error_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool ShowSummaryBuildJobInfoResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setError(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            JobSummaryBody_result refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ShowSummaryBuildJobInfoResponse::getStatus() const
{
    return status_;
}

void ShowSummaryBuildJobInfoResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowSummaryBuildJobInfoResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowSummaryBuildJobInfoResponse::unsetstatus()
{
    statusIsSet_ = false;
}

Object ShowSummaryBuildJobInfoResponse::getError() const
{
    return error_;
}

void ShowSummaryBuildJobInfoResponse::setError(const Object& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowSummaryBuildJobInfoResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShowSummaryBuildJobInfoResponse::unseterror()
{
    errorIsSet_ = false;
}

JobSummaryBody_result ShowSummaryBuildJobInfoResponse::getResult() const
{
    return result_;
}

void ShowSummaryBuildJobInfoResponse::setResult(const JobSummaryBody_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowSummaryBuildJobInfoResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowSummaryBuildJobInfoResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


