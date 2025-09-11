

#include "huaweicloud/functiongraph/v2/model/ListFunctionReservedInstancesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ListFunctionReservedInstancesRequest::ListFunctionReservedInstancesRequest()
{
    marker_ = "";
    markerIsSet_ = false;
    limit_ = "";
    limitIsSet_ = false;
    urn_ = "";
    urnIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

ListFunctionReservedInstancesRequest::~ListFunctionReservedInstancesRequest() = default;

void ListFunctionReservedInstancesRequest::validate()
{
}

web::json::value ListFunctionReservedInstancesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(urnIsSet_) {
        val[utility::conversions::to_string_t("urn")] = ModelBase::toJson(urn_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }

    return val;
}
bool ListFunctionReservedInstancesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrn(refVal);
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


std::string ListFunctionReservedInstancesRequest::getMarker() const
{
    return marker_;
}

void ListFunctionReservedInstancesRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListFunctionReservedInstancesRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListFunctionReservedInstancesRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::string ListFunctionReservedInstancesRequest::getLimit() const
{
    return limit_;
}

void ListFunctionReservedInstancesRequest::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListFunctionReservedInstancesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListFunctionReservedInstancesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListFunctionReservedInstancesRequest::getUrn() const
{
    return urn_;
}

void ListFunctionReservedInstancesRequest::setUrn(const std::string& value)
{
    urn_ = value;
    urnIsSet_ = true;
}

bool ListFunctionReservedInstancesRequest::urnIsSet() const
{
    return urnIsSet_;
}

void ListFunctionReservedInstancesRequest::unseturn()
{
    urnIsSet_ = false;
}

std::string ListFunctionReservedInstancesRequest::getContentType() const
{
    return contentType_;
}

void ListFunctionReservedInstancesRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ListFunctionReservedInstancesRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ListFunctionReservedInstancesRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


