

#include "huaweicloud/ecs/model/ListResizeFlavorsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ListResizeFlavorsRequest::ListResizeFlavorsRequest()
{
    instanceUuid_ = "";
    instanceUuidIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    sortDir_ = "";
    sortDirIsSet_ = false;
    sortKey_ = "";
    sortKeyIsSet_ = false;
    sourceFlavorId_ = "";
    sourceFlavorIdIsSet_ = false;
    sourceFlavorName_ = "";
    sourceFlavorNameIsSet_ = false;
}

ListResizeFlavorsRequest::~ListResizeFlavorsRequest() = default;

void ListResizeFlavorsRequest::validate()
{
}

web::json::value ListResizeFlavorsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceUuidIsSet_) {
        val[utility::conversions::to_string_t("instance_uuid")] = ModelBase::toJson(instanceUuid_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(sortDirIsSet_) {
        val[utility::conversions::to_string_t("sort_dir")] = ModelBase::toJson(sortDir_);
    }
    if(sortKeyIsSet_) {
        val[utility::conversions::to_string_t("sort_key")] = ModelBase::toJson(sortKey_);
    }
    if(sourceFlavorIdIsSet_) {
        val[utility::conversions::to_string_t("source_flavor_id")] = ModelBase::toJson(sourceFlavorId_);
    }
    if(sourceFlavorNameIsSet_) {
        val[utility::conversions::to_string_t("source_flavor_name")] = ModelBase::toJson(sourceFlavorName_);
    }

    return val;
}

bool ListResizeFlavorsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceUuid(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("sort_dir"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_dir"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortDir(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_flavor_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_flavor_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceFlavorId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_flavor_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_flavor_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceFlavorName(refVal);
        }
    }
    return ok;
}


std::string ListResizeFlavorsRequest::getInstanceUuid() const
{
    return instanceUuid_;
}

void ListResizeFlavorsRequest::setInstanceUuid(const std::string& value)
{
    instanceUuid_ = value;
    instanceUuidIsSet_ = true;
}

bool ListResizeFlavorsRequest::instanceUuidIsSet() const
{
    return instanceUuidIsSet_;
}

void ListResizeFlavorsRequest::unsetinstanceUuid()
{
    instanceUuidIsSet_ = false;
}

int32_t ListResizeFlavorsRequest::getLimit() const
{
    return limit_;
}

void ListResizeFlavorsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListResizeFlavorsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListResizeFlavorsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListResizeFlavorsRequest::getMarker() const
{
    return marker_;
}

void ListResizeFlavorsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListResizeFlavorsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListResizeFlavorsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::string ListResizeFlavorsRequest::getSortDir() const
{
    return sortDir_;
}

void ListResizeFlavorsRequest::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ListResizeFlavorsRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ListResizeFlavorsRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

std::string ListResizeFlavorsRequest::getSortKey() const
{
    return sortKey_;
}

void ListResizeFlavorsRequest::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ListResizeFlavorsRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ListResizeFlavorsRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::string ListResizeFlavorsRequest::getSourceFlavorId() const
{
    return sourceFlavorId_;
}

void ListResizeFlavorsRequest::setSourceFlavorId(const std::string& value)
{
    sourceFlavorId_ = value;
    sourceFlavorIdIsSet_ = true;
}

bool ListResizeFlavorsRequest::sourceFlavorIdIsSet() const
{
    return sourceFlavorIdIsSet_;
}

void ListResizeFlavorsRequest::unsetsourceFlavorId()
{
    sourceFlavorIdIsSet_ = false;
}

std::string ListResizeFlavorsRequest::getSourceFlavorName() const
{
    return sourceFlavorName_;
}

void ListResizeFlavorsRequest::setSourceFlavorName(const std::string& value)
{
    sourceFlavorName_ = value;
    sourceFlavorNameIsSet_ = true;
}

bool ListResizeFlavorsRequest::sourceFlavorNameIsSet() const
{
    return sourceFlavorNameIsSet_;
}

void ListResizeFlavorsRequest::unsetsourceFlavorName()
{
    sourceFlavorNameIsSet_ = false;
}

}
}
}
}
}


