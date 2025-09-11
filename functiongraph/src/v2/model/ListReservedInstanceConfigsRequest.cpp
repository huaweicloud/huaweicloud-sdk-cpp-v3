

#include "huaweicloud/functiongraph/v2/model/ListReservedInstanceConfigsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ListReservedInstanceConfigsRequest::ListReservedInstanceConfigsRequest()
{
    functionUrn_ = "";
    functionUrnIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    limit_ = "";
    limitIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

ListReservedInstanceConfigsRequest::~ListReservedInstanceConfigsRequest() = default;

void ListReservedInstanceConfigsRequest::validate()
{
}

web::json::value ListReservedInstanceConfigsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(functionUrnIsSet_) {
        val[utility::conversions::to_string_t("function_urn")] = ModelBase::toJson(functionUrn_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }

    return val;
}
bool ListReservedInstanceConfigsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("function_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("function_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFunctionUrn(refVal);
        }
    }
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


std::string ListReservedInstanceConfigsRequest::getFunctionUrn() const
{
    return functionUrn_;
}

void ListReservedInstanceConfigsRequest::setFunctionUrn(const std::string& value)
{
    functionUrn_ = value;
    functionUrnIsSet_ = true;
}

bool ListReservedInstanceConfigsRequest::functionUrnIsSet() const
{
    return functionUrnIsSet_;
}

void ListReservedInstanceConfigsRequest::unsetfunctionUrn()
{
    functionUrnIsSet_ = false;
}

std::string ListReservedInstanceConfigsRequest::getMarker() const
{
    return marker_;
}

void ListReservedInstanceConfigsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListReservedInstanceConfigsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListReservedInstanceConfigsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::string ListReservedInstanceConfigsRequest::getLimit() const
{
    return limit_;
}

void ListReservedInstanceConfigsRequest::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListReservedInstanceConfigsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListReservedInstanceConfigsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListReservedInstanceConfigsRequest::getContentType() const
{
    return contentType_;
}

void ListReservedInstanceConfigsRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ListReservedInstanceConfigsRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ListReservedInstanceConfigsRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


