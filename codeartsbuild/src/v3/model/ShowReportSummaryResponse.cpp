

#include "huaweicloud/codeartsbuild/v3/model/ShowReportSummaryResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowReportSummaryResponse::ShowReportSummaryResponse()
{
    status_ = "";
    statusIsSet_ = false;
    errorIsSet_ = false;
    resultIsSet_ = false;
}

ShowReportSummaryResponse::~ShowReportSummaryResponse() = default;

void ShowReportSummaryResponse::validate()
{
}

web::json::value ShowReportSummaryResponse::toJson() const
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
bool ShowReportSummaryResponse::fromJson(const web::json::value& val)
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
            ShowReportSummaryBody_result refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string ShowReportSummaryResponse::getStatus() const
{
    return status_;
}

void ShowReportSummaryResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowReportSummaryResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowReportSummaryResponse::unsetstatus()
{
    statusIsSet_ = false;
}

Object ShowReportSummaryResponse::getError() const
{
    return error_;
}

void ShowReportSummaryResponse::setError(const Object& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ShowReportSummaryResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ShowReportSummaryResponse::unseterror()
{
    errorIsSet_ = false;
}

ShowReportSummaryBody_result ShowReportSummaryResponse::getResult() const
{
    return result_;
}

void ShowReportSummaryResponse::setResult(const ShowReportSummaryBody_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ShowReportSummaryResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ShowReportSummaryResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


