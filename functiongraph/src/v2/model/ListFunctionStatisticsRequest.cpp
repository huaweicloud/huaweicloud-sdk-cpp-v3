

#include "huaweicloud/functiongraph/v2/model/ListFunctionStatisticsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ListFunctionStatisticsRequest::ListFunctionStatisticsRequest()
{
    funcUrn_ = "";
    funcUrnIsSet_ = false;
    period_ = "";
    periodIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

ListFunctionStatisticsRequest::~ListFunctionStatisticsRequest() = default;

void ListFunctionStatisticsRequest::validate()
{
}

web::json::value ListFunctionStatisticsRequest::toJson() const
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
bool ListFunctionStatisticsRequest::fromJson(const web::json::value& val)
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


std::string ListFunctionStatisticsRequest::getFuncUrn() const
{
    return funcUrn_;
}

void ListFunctionStatisticsRequest::setFuncUrn(const std::string& value)
{
    funcUrn_ = value;
    funcUrnIsSet_ = true;
}

bool ListFunctionStatisticsRequest::funcUrnIsSet() const
{
    return funcUrnIsSet_;
}

void ListFunctionStatisticsRequest::unsetfuncUrn()
{
    funcUrnIsSet_ = false;
}

std::string ListFunctionStatisticsRequest::getPeriod() const
{
    return period_;
}

void ListFunctionStatisticsRequest::setPeriod(const std::string& value)
{
    period_ = value;
    periodIsSet_ = true;
}

bool ListFunctionStatisticsRequest::periodIsSet() const
{
    return periodIsSet_;
}

void ListFunctionStatisticsRequest::unsetperiod()
{
    periodIsSet_ = false;
}

std::string ListFunctionStatisticsRequest::getContentType() const
{
    return contentType_;
}

void ListFunctionStatisticsRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ListFunctionStatisticsRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ListFunctionStatisticsRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


