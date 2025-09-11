

#include "huaweicloud/functiongraph/v2/model/ShowFunctionMetricsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ShowFunctionMetricsRequest::ShowFunctionMetricsRequest()
{
    funcUrn_ = "";
    funcUrnIsSet_ = false;
    period_ = "";
    periodIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

ShowFunctionMetricsRequest::~ShowFunctionMetricsRequest() = default;

void ShowFunctionMetricsRequest::validate()
{
}

web::json::value ShowFunctionMetricsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(funcUrnIsSet_) {
        val[utility::conversions::to_string_t("func_urn")] = ModelBase::toJson(funcUrn_);
    }
    if(periodIsSet_) {
        val[utility::conversions::to_string_t("period")] = ModelBase::toJson(period_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }

    return val;
}
bool ShowFunctionMetricsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("func_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("func_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFuncUrn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("period"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("period"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Content-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Content-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentType(refVal);
        }
    }
    return ok;
}


std::string ShowFunctionMetricsRequest::getFuncUrn() const
{
    return funcUrn_;
}

void ShowFunctionMetricsRequest::setFuncUrn(const std::string& value)
{
    funcUrn_ = value;
    funcUrnIsSet_ = true;
}

bool ShowFunctionMetricsRequest::funcUrnIsSet() const
{
    return funcUrnIsSet_;
}

void ShowFunctionMetricsRequest::unsetfuncUrn()
{
    funcUrnIsSet_ = false;
}

std::string ShowFunctionMetricsRequest::getPeriod() const
{
    return period_;
}

void ShowFunctionMetricsRequest::setPeriod(const std::string& value)
{
    period_ = value;
    periodIsSet_ = true;
}

bool ShowFunctionMetricsRequest::periodIsSet() const
{
    return periodIsSet_;
}

void ShowFunctionMetricsRequest::unsetperiod()
{
    periodIsSet_ = false;
}

std::string ShowFunctionMetricsRequest::getContentType() const
{
    return contentType_;
}

void ShowFunctionMetricsRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ShowFunctionMetricsRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ShowFunctionMetricsRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


