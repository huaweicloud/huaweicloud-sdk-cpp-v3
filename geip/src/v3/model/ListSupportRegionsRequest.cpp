

#include "huaweicloud/geip/v3/model/ListSupportRegionsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




ListSupportRegionsRequest::ListSupportRegionsRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    pageReverse_ = false;
    pageReverseIsSet_ = false;
    fieldsIsSet_ = false;
    sortKeyIsSet_ = false;
    sortDirIsSet_ = false;
    idIsSet_ = false;
    instanceTypeIsSet_ = false;
    publicBorderGroupIsSet_ = false;
    accessSiteIsSet_ = false;
    regionIdIsSet_ = false;
    remoteEndpointIsSet_ = false;
    statusIsSet_ = false;
}

ListSupportRegionsRequest::~ListSupportRegionsRequest() = default;

void ListSupportRegionsRequest::validate()
{
}

web::json::value ListSupportRegionsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(pageReverseIsSet_) {
        val[utility::conversions::to_string_t("page_reverse")] = ModelBase::toJson(pageReverse_);
    }
    if(fieldsIsSet_) {
        val[utility::conversions::to_string_t("fields")] = ModelBase::toJson(fields_);
    }
    if(sortKeyIsSet_) {
        val[utility::conversions::to_string_t("sort_key")] = ModelBase::toJson(sortKey_);
    }
    if(sortDirIsSet_) {
        val[utility::conversions::to_string_t("sort_dir")] = ModelBase::toJson(sortDir_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(instanceTypeIsSet_) {
        val[utility::conversions::to_string_t("instance_type")] = ModelBase::toJson(instanceType_);
    }
    if(publicBorderGroupIsSet_) {
        val[utility::conversions::to_string_t("public_border_group")] = ModelBase::toJson(publicBorderGroup_);
    }
    if(accessSiteIsSet_) {
        val[utility::conversions::to_string_t("access_site")] = ModelBase::toJson(accessSite_);
    }
    if(regionIdIsSet_) {
        val[utility::conversions::to_string_t("region_id")] = ModelBase::toJson(regionId_);
    }
    if(remoteEndpointIsSet_) {
        val[utility::conversions::to_string_t("remote_endpoint")] = ModelBase::toJson(remoteEndpoint_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool ListSupportRegionsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("page_reverse"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_reverse"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageReverse(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fields"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fields"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFields(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_key"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_dir"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_dir"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortDir(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_type"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("public_border_group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_border_group"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicBorderGroup(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("access_site"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_site"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessSite(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region_id"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("remote_endpoint"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remote_endpoint"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemoteEndpoint(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


int32_t ListSupportRegionsRequest::getLimit() const
{
    return limit_;
}

void ListSupportRegionsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListSupportRegionsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListSupportRegionsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListSupportRegionsRequest::getOffset() const
{
    return offset_;
}

void ListSupportRegionsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListSupportRegionsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListSupportRegionsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListSupportRegionsRequest::getMarker() const
{
    return marker_;
}

void ListSupportRegionsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListSupportRegionsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListSupportRegionsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

bool ListSupportRegionsRequest::isPageReverse() const
{
    return pageReverse_;
}

void ListSupportRegionsRequest::setPageReverse(bool value)
{
    pageReverse_ = value;
    pageReverseIsSet_ = true;
}

bool ListSupportRegionsRequest::pageReverseIsSet() const
{
    return pageReverseIsSet_;
}

void ListSupportRegionsRequest::unsetpageReverse()
{
    pageReverseIsSet_ = false;
}

std::vector<std::string>& ListSupportRegionsRequest::getFields()
{
    return fields_;
}

void ListSupportRegionsRequest::setFields(const std::vector<std::string>& value)
{
    fields_ = value;
    fieldsIsSet_ = true;
}

bool ListSupportRegionsRequest::fieldsIsSet() const
{
    return fieldsIsSet_;
}

void ListSupportRegionsRequest::unsetfields()
{
    fieldsIsSet_ = false;
}

std::vector<std::string>& ListSupportRegionsRequest::getSortKey()
{
    return sortKey_;
}

void ListSupportRegionsRequest::setSortKey(const std::vector<std::string>& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ListSupportRegionsRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ListSupportRegionsRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::vector<std::string>& ListSupportRegionsRequest::getSortDir()
{
    return sortDir_;
}

void ListSupportRegionsRequest::setSortDir(const std::vector<std::string>& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ListSupportRegionsRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ListSupportRegionsRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

std::vector<std::string>& ListSupportRegionsRequest::getId()
{
    return id_;
}

void ListSupportRegionsRequest::setId(const std::vector<std::string>& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListSupportRegionsRequest::idIsSet() const
{
    return idIsSet_;
}

void ListSupportRegionsRequest::unsetid()
{
    idIsSet_ = false;
}

std::vector<std::string>& ListSupportRegionsRequest::getInstanceType()
{
    return instanceType_;
}

void ListSupportRegionsRequest::setInstanceType(const std::vector<std::string>& value)
{
    instanceType_ = value;
    instanceTypeIsSet_ = true;
}

bool ListSupportRegionsRequest::instanceTypeIsSet() const
{
    return instanceTypeIsSet_;
}

void ListSupportRegionsRequest::unsetinstanceType()
{
    instanceTypeIsSet_ = false;
}

std::vector<std::string>& ListSupportRegionsRequest::getPublicBorderGroup()
{
    return publicBorderGroup_;
}

void ListSupportRegionsRequest::setPublicBorderGroup(const std::vector<std::string>& value)
{
    publicBorderGroup_ = value;
    publicBorderGroupIsSet_ = true;
}

bool ListSupportRegionsRequest::publicBorderGroupIsSet() const
{
    return publicBorderGroupIsSet_;
}

void ListSupportRegionsRequest::unsetpublicBorderGroup()
{
    publicBorderGroupIsSet_ = false;
}

std::vector<std::string>& ListSupportRegionsRequest::getAccessSite()
{
    return accessSite_;
}

void ListSupportRegionsRequest::setAccessSite(const std::vector<std::string>& value)
{
    accessSite_ = value;
    accessSiteIsSet_ = true;
}

bool ListSupportRegionsRequest::accessSiteIsSet() const
{
    return accessSiteIsSet_;
}

void ListSupportRegionsRequest::unsetaccessSite()
{
    accessSiteIsSet_ = false;
}

std::vector<std::string>& ListSupportRegionsRequest::getRegionId()
{
    return regionId_;
}

void ListSupportRegionsRequest::setRegionId(const std::vector<std::string>& value)
{
    regionId_ = value;
    regionIdIsSet_ = true;
}

bool ListSupportRegionsRequest::regionIdIsSet() const
{
    return regionIdIsSet_;
}

void ListSupportRegionsRequest::unsetregionId()
{
    regionIdIsSet_ = false;
}

std::vector<std::string>& ListSupportRegionsRequest::getRemoteEndpoint()
{
    return remoteEndpoint_;
}

void ListSupportRegionsRequest::setRemoteEndpoint(const std::vector<std::string>& value)
{
    remoteEndpoint_ = value;
    remoteEndpointIsSet_ = true;
}

bool ListSupportRegionsRequest::remoteEndpointIsSet() const
{
    return remoteEndpointIsSet_;
}

void ListSupportRegionsRequest::unsetremoteEndpoint()
{
    remoteEndpointIsSet_ = false;
}

std::vector<std::string>& ListSupportRegionsRequest::getStatus()
{
    return status_;
}

void ListSupportRegionsRequest::setStatus(const std::vector<std::string>& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListSupportRegionsRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListSupportRegionsRequest::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


