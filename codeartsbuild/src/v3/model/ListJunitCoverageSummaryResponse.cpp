

#include "huaweicloud/codeartsbuild/v3/model/ListJunitCoverageSummaryResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ListJunitCoverageSummaryResponse::ListJunitCoverageSummaryResponse()
{
    resultIsSet_ = false;
    error_ = "";
    errorIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

ListJunitCoverageSummaryResponse::~ListJunitCoverageSummaryResponse() = default;

void ListJunitCoverageSummaryResponse::validate()
{
}

web::json::value ListJunitCoverageSummaryResponse::toJson() const
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
bool ListJunitCoverageSummaryResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            ListJunitCoverageSummary_result refVal;
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


ListJunitCoverageSummary_result ListJunitCoverageSummaryResponse::getResult() const
{
    return result_;
}

void ListJunitCoverageSummaryResponse::setResult(const ListJunitCoverageSummary_result& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListJunitCoverageSummaryResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListJunitCoverageSummaryResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string ListJunitCoverageSummaryResponse::getError() const
{
    return error_;
}

void ListJunitCoverageSummaryResponse::setError(const std::string& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool ListJunitCoverageSummaryResponse::errorIsSet() const
{
    return errorIsSet_;
}

void ListJunitCoverageSummaryResponse::unseterror()
{
    errorIsSet_ = false;
}

std::string ListJunitCoverageSummaryResponse::getStatus() const
{
    return status_;
}

void ListJunitCoverageSummaryResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListJunitCoverageSummaryResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListJunitCoverageSummaryResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


