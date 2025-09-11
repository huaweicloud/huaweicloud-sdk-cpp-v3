

#include "huaweicloud/functiongraph/v2/model/ListFunctionApplicationsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ListFunctionApplicationsRequest::ListFunctionApplicationsRequest()
{
    limit_ = "";
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

ListFunctionApplicationsRequest::~ListFunctionApplicationsRequest() = default;

void ListFunctionApplicationsRequest::validate()
{
}

web::json::value ListFunctionApplicationsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }

    return val;
}
bool ListFunctionApplicationsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
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


std::string ListFunctionApplicationsRequest::getLimit() const
{
    return limit_;
}

void ListFunctionApplicationsRequest::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListFunctionApplicationsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListFunctionApplicationsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListFunctionApplicationsRequest::getMarker() const
{
    return marker_;
}

void ListFunctionApplicationsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListFunctionApplicationsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListFunctionApplicationsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::string ListFunctionApplicationsRequest::getContentType() const
{
    return contentType_;
}

void ListFunctionApplicationsRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ListFunctionApplicationsRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ListFunctionApplicationsRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


