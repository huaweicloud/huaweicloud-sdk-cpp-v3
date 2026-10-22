

#include "huaweicloud/evs/v2/model/CountSnapshotsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




CountSnapshotsRequest::CountSnapshotsRequest()
{
    volumeId_ = "";
    volumeIdIsSet_ = false;
    availabilityZone_ = "";
    availabilityZoneIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
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
}

CountSnapshotsRequest::~CountSnapshotsRequest() = default;

void CountSnapshotsRequest::validate()
{
}

web::json::value CountSnapshotsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(volumeIdIsSet_) {
        val[utility::conversions::to_string_t("volume_id")] = ModelBase::toJson(volumeId_);
    }
    if(availabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("availability_zone")] = ModelBase::toJson(availabilityZone_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
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

    return val;
}
bool CountSnapshotsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    return ok;
}


std::string CountSnapshotsRequest::getVolumeId() const
{
    return volumeId_;
}

void CountSnapshotsRequest::setVolumeId(const std::string& value)
{
    volumeId_ = value;
    volumeIdIsSet_ = true;
}

bool CountSnapshotsRequest::volumeIdIsSet() const
{
    return volumeIdIsSet_;
}

void CountSnapshotsRequest::unsetvolumeId()
{
    volumeIdIsSet_ = false;
}

std::string CountSnapshotsRequest::getAvailabilityZone() const
{
    return availabilityZone_;
}

void CountSnapshotsRequest::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool CountSnapshotsRequest::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void CountSnapshotsRequest::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

std::string CountSnapshotsRequest::getName() const
{
    return name_;
}

void CountSnapshotsRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CountSnapshotsRequest::nameIsSet() const
{
    return nameIsSet_;
}

void CountSnapshotsRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string CountSnapshotsRequest::getStatus() const
{
    return status_;
}

void CountSnapshotsRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CountSnapshotsRequest::statusIsSet() const
{
    return statusIsSet_;
}

void CountSnapshotsRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string CountSnapshotsRequest::getId() const
{
    return id_;
}

void CountSnapshotsRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CountSnapshotsRequest::idIsSet() const
{
    return idIsSet_;
}

void CountSnapshotsRequest::unsetid()
{
    idIsSet_ = false;
}

std::string CountSnapshotsRequest::getSnapshotType() const
{
    return snapshotType_;
}

void CountSnapshotsRequest::setSnapshotType(const std::string& value)
{
    snapshotType_ = value;
    snapshotTypeIsSet_ = true;
}

bool CountSnapshotsRequest::snapshotTypeIsSet() const
{
    return snapshotTypeIsSet_;
}

void CountSnapshotsRequest::unsetsnapshotType()
{
    snapshotTypeIsSet_ = false;
}

std::string CountSnapshotsRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void CountSnapshotsRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool CountSnapshotsRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void CountSnapshotsRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string CountSnapshotsRequest::getTagKey() const
{
    return tagKey_;
}

void CountSnapshotsRequest::setTagKey(const std::string& value)
{
    tagKey_ = value;
    tagKeyIsSet_ = true;
}

bool CountSnapshotsRequest::tagKeyIsSet() const
{
    return tagKeyIsSet_;
}

void CountSnapshotsRequest::unsettagKey()
{
    tagKeyIsSet_ = false;
}

std::string CountSnapshotsRequest::getTags() const
{
    return tags_;
}

void CountSnapshotsRequest::setTags(const std::string& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool CountSnapshotsRequest::tagsIsSet() const
{
    return tagsIsSet_;
}

void CountSnapshotsRequest::unsettags()
{
    tagsIsSet_ = false;
}

std::string CountSnapshotsRequest::getSnapshotChainId() const
{
    return snapshotChainId_;
}

void CountSnapshotsRequest::setSnapshotChainId(const std::string& value)
{
    snapshotChainId_ = value;
    snapshotChainIdIsSet_ = true;
}

bool CountSnapshotsRequest::snapshotChainIdIsSet() const
{
    return snapshotChainIdIsSet_;
}

void CountSnapshotsRequest::unsetsnapshotChainId()
{
    snapshotChainIdIsSet_ = false;
}

}
}
}
}
}


