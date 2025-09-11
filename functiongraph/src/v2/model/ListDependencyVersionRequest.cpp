

#include "huaweicloud/functiongraph/v2/model/ListDependencyVersionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ListDependencyVersionRequest::ListDependencyVersionRequest()
{
    dependId_ = "";
    dependIdIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    maxitems_ = "";
    maxitemsIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

ListDependencyVersionRequest::~ListDependencyVersionRequest() = default;

void ListDependencyVersionRequest::validate()
{
}

web::json::value ListDependencyVersionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dependIdIsSet_) {
        val[utility::conversions::to_string_t("depend_id")] = ModelBase::toJson(dependId_);
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
bool ListDependencyVersionRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("depend_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("depend_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDependId(refVal);
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


std::string ListDependencyVersionRequest::getDependId() const
{
    return dependId_;
}

void ListDependencyVersionRequest::setDependId(const std::string& value)
{
    dependId_ = value;
    dependIdIsSet_ = true;
}

bool ListDependencyVersionRequest::dependIdIsSet() const
{
    return dependIdIsSet_;
}

void ListDependencyVersionRequest::unsetdependId()
{
    dependIdIsSet_ = false;
}

std::string ListDependencyVersionRequest::getMarker() const
{
    return marker_;
}

void ListDependencyVersionRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListDependencyVersionRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListDependencyVersionRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::string ListDependencyVersionRequest::getMaxitems() const
{
    return maxitems_;
}

void ListDependencyVersionRequest::setMaxitems(const std::string& value)
{
    maxitems_ = value;
    maxitemsIsSet_ = true;
}

bool ListDependencyVersionRequest::maxitemsIsSet() const
{
    return maxitemsIsSet_;
}

void ListDependencyVersionRequest::unsetmaxitems()
{
    maxitemsIsSet_ = false;
}

std::string ListDependencyVersionRequest::getContentType() const
{
    return contentType_;
}

void ListDependencyVersionRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ListDependencyVersionRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ListDependencyVersionRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


