

#include "huaweicloud/evs/v2/model/ListSnapshotsDetailsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




ListSnapshotsDetailsRequest::ListSnapshotsDetailsRequest()
{
    marker_ = "";
    markerIsSet_ = false;
    volumeId_ = "";
    volumeIdIsSet_ = false;
    availabilityZone_ = "";
    availabilityZoneIsSet_ = false;
    limit_ = "";
    limitIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    offset_ = "";
    offsetIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    sortKey_ = "";
    sortKeyIsSet_ = false;
    sortDir_ = "";
    sortDirIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    ids_ = "";
    idsIsSet_ = false;
    snapshotType_ = "";
    snapshotTypeIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    tagKey_ = "";
    tagKeyIsSet_ = false;
    tags_ = "";
    tagsIsSet_ = false;
    snapshotChainId_ = "";
    snapshotChainIdIsSet_ = false;
    snapshotGroupId_ = "";
    snapshotGroupIdIsSet_ = false;
}

ListSnapshotsDetailsRequest::~ListSnapshotsDetailsRequest() = default;

void ListSnapshotsDetailsRequest::validate()
{
}

web::json::value ListSnapshotsDetailsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(volumeIdIsSet_) {
        val[utility::conversions::to_string_t("volume_id")] = ModelBase::toJson(volumeId_);
    }
    if(availabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("availability_zone")] = ModelBase::toJson(availabilityZone_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
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
    if(idsIsSet_) {
        val[utility::conversions::to_string_t("ids")] = ModelBase::toJson(ids_);
    }
    if(snapshotTypeIsSet_) {
        val[utility::conversions::to_string_t("snapshot_type")] = ModelBase::toJson(snapshotType_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(tagKeyIsSet_) {
        val[utility::conversions::to_string_t("tag_key")] = ModelBase::toJson(tagKey_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(snapshotChainIdIsSet_) {
        val[utility::conversions::to_string_t("snapshot_chain_id")] = ModelBase::toJson(snapshotChainId_);
    }
    if(snapshotGroupIdIsSet_) {
        val[utility::conversions::to_string_t("snapshot_group_id")] = ModelBase::toJson(snapshotGroupId_);
    }

    return val;
}
bool ListSnapshotsDetailsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("volume_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("availability_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availability_zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityZone(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("sort_dir"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_dir"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortDir(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ids"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("snapshot_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("snapshot_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnapshotType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tag_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTagKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("snapshot_chain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("snapshot_chain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnapshotChainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("snapshot_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("snapshot_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnapshotGroupId(refVal);
        }
    }
    return ok;
}


std::string ListSnapshotsDetailsRequest::getMarker() const
{
    return marker_;
}

void ListSnapshotsDetailsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListSnapshotsDetailsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListSnapshotsDetailsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::string ListSnapshotsDetailsRequest::getVolumeId() const
{
    return volumeId_;
}

void ListSnapshotsDetailsRequest::setVolumeId(const std::string& value)
{
    volumeId_ = value;
    volumeIdIsSet_ = true;
}

bool ListSnapshotsDetailsRequest::volumeIdIsSet() const
{
    return volumeIdIsSet_;
}

void ListSnapshotsDetailsRequest::unsetvolumeId()
{
    volumeIdIsSet_ = false;
}

std::string ListSnapshotsDetailsRequest::getAvailabilityZone() const
{
    return availabilityZone_;
}

void ListSnapshotsDetailsRequest::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool ListSnapshotsDetailsRequest::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void ListSnapshotsDetailsRequest::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

std::string ListSnapshotsDetailsRequest::getLimit() const
{
    return limit_;
}

void ListSnapshotsDetailsRequest::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListSnapshotsDetailsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListSnapshotsDetailsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListSnapshotsDetailsRequest::getName() const
{
    return name_;
}

void ListSnapshotsDetailsRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListSnapshotsDetailsRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListSnapshotsDetailsRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListSnapshotsDetailsRequest::getOffset() const
{
    return offset_;
}

void ListSnapshotsDetailsRequest::setOffset(const std::string& value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListSnapshotsDetailsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListSnapshotsDetailsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListSnapshotsDetailsRequest::getStatus() const
{
    return status_;
}

void ListSnapshotsDetailsRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListSnapshotsDetailsRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListSnapshotsDetailsRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListSnapshotsDetailsRequest::getSortKey() const
{
    return sortKey_;
}

void ListSnapshotsDetailsRequest::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ListSnapshotsDetailsRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ListSnapshotsDetailsRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::string ListSnapshotsDetailsRequest::getSortDir() const
{
    return sortDir_;
}

void ListSnapshotsDetailsRequest::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ListSnapshotsDetailsRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ListSnapshotsDetailsRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

std::string ListSnapshotsDetailsRequest::getId() const
{
    return id_;
}

void ListSnapshotsDetailsRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListSnapshotsDetailsRequest::idIsSet() const
{
    return idIsSet_;
}

void ListSnapshotsDetailsRequest::unsetid()
{
    idIsSet_ = false;
}

std::string ListSnapshotsDetailsRequest::getIds() const
{
    return ids_;
}

void ListSnapshotsDetailsRequest::setIds(const std::string& value)
{
    ids_ = value;
    idsIsSet_ = true;
}

bool ListSnapshotsDetailsRequest::idsIsSet() const
{
    return idsIsSet_;
}

void ListSnapshotsDetailsRequest::unsetids()
{
    idsIsSet_ = false;
}

std::string ListSnapshotsDetailsRequest::getSnapshotType() const
{
    return snapshotType_;
}

void ListSnapshotsDetailsRequest::setSnapshotType(const std::string& value)
{
    snapshotType_ = value;
    snapshotTypeIsSet_ = true;
}

bool ListSnapshotsDetailsRequest::snapshotTypeIsSet() const
{
    return snapshotTypeIsSet_;
}

void ListSnapshotsDetailsRequest::unsetsnapshotType()
{
    snapshotTypeIsSet_ = false;
}

std::string ListSnapshotsDetailsRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListSnapshotsDetailsRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListSnapshotsDetailsRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListSnapshotsDetailsRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ListSnapshotsDetailsRequest::getTagKey() const
{
    return tagKey_;
}

void ListSnapshotsDetailsRequest::setTagKey(const std::string& value)
{
    tagKey_ = value;
    tagKeyIsSet_ = true;
}

bool ListSnapshotsDetailsRequest::tagKeyIsSet() const
{
    return tagKeyIsSet_;
}

void ListSnapshotsDetailsRequest::unsettagKey()
{
    tagKeyIsSet_ = false;
}

std::string ListSnapshotsDetailsRequest::getTags() const
{
    return tags_;
}

void ListSnapshotsDetailsRequest::setTags(const std::string& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListSnapshotsDetailsRequest::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListSnapshotsDetailsRequest::unsettags()
{
    tagsIsSet_ = false;
}

std::string ListSnapshotsDetailsRequest::getSnapshotChainId() const
{
    return snapshotChainId_;
}

void ListSnapshotsDetailsRequest::setSnapshotChainId(const std::string& value)
{
    snapshotChainId_ = value;
    snapshotChainIdIsSet_ = true;
}

bool ListSnapshotsDetailsRequest::snapshotChainIdIsSet() const
{
    return snapshotChainIdIsSet_;
}

void ListSnapshotsDetailsRequest::unsetsnapshotChainId()
{
    snapshotChainIdIsSet_ = false;
}

std::string ListSnapshotsDetailsRequest::getSnapshotGroupId() const
{
    return snapshotGroupId_;
}

void ListSnapshotsDetailsRequest::setSnapshotGroupId(const std::string& value)
{
    snapshotGroupId_ = value;
    snapshotGroupIdIsSet_ = true;
}

bool ListSnapshotsDetailsRequest::snapshotGroupIdIsSet() const
{
    return snapshotGroupIdIsSet_;
}

void ListSnapshotsDetailsRequest::unsetsnapshotGroupId()
{
    snapshotGroupIdIsSet_ = false;
}

}
}
}
}
}


