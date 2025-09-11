

#include "huaweicloud/functiongraph/v2/model/ShowFuncReservedInstanceMetricsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ShowFuncReservedInstanceMetricsRequest::ShowFuncReservedInstanceMetricsRequest()
{
    marker_ = "";
    markerIsSet_ = false;
    limit_ = "";
    limitIsSet_ = false;
    funcUrn_ = "";
    funcUrnIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

ShowFuncReservedInstanceMetricsRequest::~ShowFuncReservedInstanceMetricsRequest() = default;

void ShowFuncReservedInstanceMetricsRequest::validate()
{
}

web::json::value ShowFuncReservedInstanceMetricsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(funcUrnIsSet_) {
        val[utility::conversions::to_string_t("func_urn")] = ModelBase::toJson(funcUrn_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }

    return val;
}
bool ShowFuncReservedInstanceMetricsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarker(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("func_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("func_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFuncUrn(refVal);
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


std::string ShowFuncReservedInstanceMetricsRequest::getMarker() const
{
    return marker_;
}

void ShowFuncReservedInstanceMetricsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ShowFuncReservedInstanceMetricsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ShowFuncReservedInstanceMetricsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::string ShowFuncReservedInstanceMetricsRequest::getLimit() const
{
    return limit_;
}

void ShowFuncReservedInstanceMetricsRequest::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowFuncReservedInstanceMetricsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowFuncReservedInstanceMetricsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ShowFuncReservedInstanceMetricsRequest::getFuncUrn() const
{
    return funcUrn_;
}

void ShowFuncReservedInstanceMetricsRequest::setFuncUrn(const std::string& value)
{
    funcUrn_ = value;
    funcUrnIsSet_ = true;
}

bool ShowFuncReservedInstanceMetricsRequest::funcUrnIsSet() const
{
    return funcUrnIsSet_;
}

void ShowFuncReservedInstanceMetricsRequest::unsetfuncUrn()
{
    funcUrnIsSet_ = false;
}

std::string ShowFuncReservedInstanceMetricsRequest::getContentType() const
{
    return contentType_;
}

void ShowFuncReservedInstanceMetricsRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ShowFuncReservedInstanceMetricsRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ShowFuncReservedInstanceMetricsRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


