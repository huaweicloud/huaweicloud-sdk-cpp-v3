

#include "huaweicloud/organizations/v1/model/ListEntitiesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




ListEntitiesRequest::ListEntitiesRequest()
{
    parentId_ = "";
    parentIdIsSet_ = false;
    childId_ = "";
    childIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
}

ListEntitiesRequest::~ListEntitiesRequest() = default;

void ListEntitiesRequest::validate()
{
}

web::json::value ListEntitiesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(parentIdIsSet_) {
        val[utility::conversions::to_string_t("parent_id")] = ModelBase::toJson(parentId_);
    }
    if(childIdIsSet_) {
        val[utility::conversions::to_string_t("child_id")] = ModelBase::toJson(childId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }

    return val;
}
bool ListEntitiesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("parent_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("child_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("child_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChildId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
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
    return ok;
}


std::string ListEntitiesRequest::getParentId() const
{
    return parentId_;
}

void ListEntitiesRequest::setParentId(const std::string& value)
{
    parentId_ = value;
    parentIdIsSet_ = true;
}

bool ListEntitiesRequest::parentIdIsSet() const
{
    return parentIdIsSet_;
}

void ListEntitiesRequest::unsetparentId()
{
    parentIdIsSet_ = false;
}

std::string ListEntitiesRequest::getChildId() const
{
    return childId_;
}

void ListEntitiesRequest::setChildId(const std::string& value)
{
    childId_ = value;
    childIdIsSet_ = true;
}

bool ListEntitiesRequest::childIdIsSet() const
{
    return childIdIsSet_;
}

void ListEntitiesRequest::unsetchildId()
{
    childIdIsSet_ = false;
}

int32_t ListEntitiesRequest::getLimit() const
{
    return limit_;
}

void ListEntitiesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListEntitiesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListEntitiesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListEntitiesRequest::getMarker() const
{
    return marker_;
}

void ListEntitiesRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListEntitiesRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListEntitiesRequest::unsetmarker()
{
    markerIsSet_ = false;
}

}
}
}
}
}


