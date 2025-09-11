

#include "huaweicloud/functiongraph/v2/model/ListFunctionVersionsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ListFunctionVersionsRequest::ListFunctionVersionsRequest()
{
    functionUrn_ = "";
    functionUrnIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    maxitems_ = "";
    maxitemsIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

ListFunctionVersionsRequest::~ListFunctionVersionsRequest() = default;

void ListFunctionVersionsRequest::validate()
{
}

web::json::value ListFunctionVersionsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(functionUrnIsSet_) {
        val[utility::conversions::to_string_t("function_urn")] = ModelBase::toJson(functionUrn_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(maxitemsIsSet_) {
        val[utility::conversions::to_string_t("maxitems")] = ModelBase::toJson(maxitems_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }

    return val;
}
bool ListFunctionVersionsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("maxitems"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("maxitems"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxitems(refVal);
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


std::string ListFunctionVersionsRequest::getFunctionUrn() const
{
    return functionUrn_;
}

void ListFunctionVersionsRequest::setFunctionUrn(const std::string& value)
{
    functionUrn_ = value;
    functionUrnIsSet_ = true;
}

bool ListFunctionVersionsRequest::functionUrnIsSet() const
{
    return functionUrnIsSet_;
}

void ListFunctionVersionsRequest::unsetfunctionUrn()
{
    functionUrnIsSet_ = false;
}

std::string ListFunctionVersionsRequest::getMarker() const
{
    return marker_;
}

void ListFunctionVersionsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListFunctionVersionsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListFunctionVersionsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::string ListFunctionVersionsRequest::getMaxitems() const
{
    return maxitems_;
}

void ListFunctionVersionsRequest::setMaxitems(const std::string& value)
{
    maxitems_ = value;
    maxitemsIsSet_ = true;
}

bool ListFunctionVersionsRequest::maxitemsIsSet() const
{
    return maxitemsIsSet_;
}

void ListFunctionVersionsRequest::unsetmaxitems()
{
    maxitemsIsSet_ = false;
}

std::string ListFunctionVersionsRequest::getContentType() const
{
    return contentType_;
}

void ListFunctionVersionsRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ListFunctionVersionsRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ListFunctionVersionsRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


