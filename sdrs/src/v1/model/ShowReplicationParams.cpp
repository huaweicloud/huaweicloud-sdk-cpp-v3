

#include "huaweicloud/sdrs/v1/model/ShowReplicationParams.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




ShowReplicationParams::ShowReplicationParams()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    volumeIds_ = "";
    volumeIdsIsSet_ = false;
    attachmentIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
    replicationModel_ = "";
    replicationModelIsSet_ = false;
    progress_ = 0;
    progressIsSet_ = false;
    failureDetail_ = "";
    failureDetailIsSet_ = false;
    recordMetadataIsSet_ = false;
    faultLevel_ = "";
    faultLevelIsSet_ = false;
    serverGroupId_ = "";
    serverGroupIdIsSet_ = false;
    priorityStation_ = "";
    priorityStationIsSet_ = false;
    replicationStatus_ = "";
    replicationStatusIsSet_ = false;
}

ShowReplicationParams::~ShowReplicationParams() = default;

void ShowReplicationParams::validate()
{
}

web::json::value ShowReplicationParams::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(volumeIdsIsSet_) {
        val[utility::conversions::to_string_t("volume_ids")] = ModelBase::toJson(volumeIds_);
    }
    if(attachmentIsSet_) {
        val[utility::conversions::to_string_t("attachment")] = ModelBase::toJson(attachment_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(replicationModelIsSet_) {
        val[utility::conversions::to_string_t("replication_model")] = ModelBase::toJson(replicationModel_);
    }
    if(progressIsSet_) {
        val[utility::conversions::to_string_t("progress")] = ModelBase::toJson(progress_);
    }
    if(failureDetailIsSet_) {
        val[utility::conversions::to_string_t("failure_detail")] = ModelBase::toJson(failureDetail_);
    }
    if(recordMetadataIsSet_) {
        val[utility::conversions::to_string_t("record_metadata")] = ModelBase::toJson(recordMetadata_);
    }
    if(faultLevelIsSet_) {
        val[utility::conversions::to_string_t("fault_level")] = ModelBase::toJson(faultLevel_);
    }
    if(serverGroupIdIsSet_) {
        val[utility::conversions::to_string_t("server_group_id")] = ModelBase::toJson(serverGroupId_);
    }
    if(priorityStationIsSet_) {
        val[utility::conversions::to_string_t("priority_station")] = ModelBase::toJson(priorityStation_);
    }
    if(replicationStatusIsSet_) {
        val[utility::conversions::to_string_t("replication_status")] = ModelBase::toJson(replicationStatus_);
    }

    return val;
}

bool ShowReplicationParams::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("volume_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume_ids"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attachment"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attachment"));
        if(!fieldValue.is_null())
        {
            std::vector<ReplicationAttachment> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttachment(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("replication_model"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("replication_model"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplicationModel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("progress"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("progress"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProgress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("failure_detail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("failure_detail"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailureDetail(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("record_metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("record_metadata"));
        if(!fieldValue.is_null())
        {
            ReplicationRecordMetadata refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecordMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fault_level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fault_level"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFaultLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("server_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("priority_station"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("priority_station"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPriorityStation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("replication_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("replication_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplicationStatus(refVal);
        }
    }
    return ok;
}

std::string ShowReplicationParams::getId() const
{
    return id_;
}

void ShowReplicationParams::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowReplicationParams::idIsSet() const
{
    return idIsSet_;
}

void ShowReplicationParams::unsetid()
{
    idIsSet_ = false;
}

std::string ShowReplicationParams::getName() const
{
    return name_;
}

void ShowReplicationParams::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowReplicationParams::nameIsSet() const
{
    return nameIsSet_;
}

void ShowReplicationParams::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowReplicationParams::getDescription() const
{
    return description_;
}

void ShowReplicationParams::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ShowReplicationParams::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ShowReplicationParams::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ShowReplicationParams::getStatus() const
{
    return status_;
}

void ShowReplicationParams::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowReplicationParams::statusIsSet() const
{
    return statusIsSet_;
}

void ShowReplicationParams::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowReplicationParams::getVolumeIds() const
{
    return volumeIds_;
}

void ShowReplicationParams::setVolumeIds(const std::string& value)
{
    volumeIds_ = value;
    volumeIdsIsSet_ = true;
}

bool ShowReplicationParams::volumeIdsIsSet() const
{
    return volumeIdsIsSet_;
}

void ShowReplicationParams::unsetvolumeIds()
{
    volumeIdsIsSet_ = false;
}

std::vector<ReplicationAttachment>& ShowReplicationParams::getAttachment()
{
    return attachment_;
}

void ShowReplicationParams::setAttachment(const std::vector<ReplicationAttachment>& value)
{
    attachment_ = value;
    attachmentIsSet_ = true;
}

bool ShowReplicationParams::attachmentIsSet() const
{
    return attachmentIsSet_;
}

void ShowReplicationParams::unsetattachment()
{
    attachmentIsSet_ = false;
}

std::string ShowReplicationParams::getCreatedAt() const
{
    return createdAt_;
}

void ShowReplicationParams::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool ShowReplicationParams::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void ShowReplicationParams::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string ShowReplicationParams::getUpdatedAt() const
{
    return updatedAt_;
}

void ShowReplicationParams::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool ShowReplicationParams::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void ShowReplicationParams::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string ShowReplicationParams::getReplicationModel() const
{
    return replicationModel_;
}

void ShowReplicationParams::setReplicationModel(const std::string& value)
{
    replicationModel_ = value;
    replicationModelIsSet_ = true;
}

bool ShowReplicationParams::replicationModelIsSet() const
{
    return replicationModelIsSet_;
}

void ShowReplicationParams::unsetreplicationModel()
{
    replicationModelIsSet_ = false;
}

int32_t ShowReplicationParams::getProgress() const
{
    return progress_;
}

void ShowReplicationParams::setProgress(int32_t value)
{
    progress_ = value;
    progressIsSet_ = true;
}

bool ShowReplicationParams::progressIsSet() const
{
    return progressIsSet_;
}

void ShowReplicationParams::unsetprogress()
{
    progressIsSet_ = false;
}

std::string ShowReplicationParams::getFailureDetail() const
{
    return failureDetail_;
}

void ShowReplicationParams::setFailureDetail(const std::string& value)
{
    failureDetail_ = value;
    failureDetailIsSet_ = true;
}

bool ShowReplicationParams::failureDetailIsSet() const
{
    return failureDetailIsSet_;
}

void ShowReplicationParams::unsetfailureDetail()
{
    failureDetailIsSet_ = false;
}

ReplicationRecordMetadata ShowReplicationParams::getRecordMetadata() const
{
    return recordMetadata_;
}

void ShowReplicationParams::setRecordMetadata(const ReplicationRecordMetadata& value)
{
    recordMetadata_ = value;
    recordMetadataIsSet_ = true;
}

bool ShowReplicationParams::recordMetadataIsSet() const
{
    return recordMetadataIsSet_;
}

void ShowReplicationParams::unsetrecordMetadata()
{
    recordMetadataIsSet_ = false;
}

std::string ShowReplicationParams::getFaultLevel() const
{
    return faultLevel_;
}

void ShowReplicationParams::setFaultLevel(const std::string& value)
{
    faultLevel_ = value;
    faultLevelIsSet_ = true;
}

bool ShowReplicationParams::faultLevelIsSet() const
{
    return faultLevelIsSet_;
}

void ShowReplicationParams::unsetfaultLevel()
{
    faultLevelIsSet_ = false;
}

std::string ShowReplicationParams::getServerGroupId() const
{
    return serverGroupId_;
}

void ShowReplicationParams::setServerGroupId(const std::string& value)
{
    serverGroupId_ = value;
    serverGroupIdIsSet_ = true;
}

bool ShowReplicationParams::serverGroupIdIsSet() const
{
    return serverGroupIdIsSet_;
}

void ShowReplicationParams::unsetserverGroupId()
{
    serverGroupIdIsSet_ = false;
}

std::string ShowReplicationParams::getPriorityStation() const
{
    return priorityStation_;
}

void ShowReplicationParams::setPriorityStation(const std::string& value)
{
    priorityStation_ = value;
    priorityStationIsSet_ = true;
}

bool ShowReplicationParams::priorityStationIsSet() const
{
    return priorityStationIsSet_;
}

void ShowReplicationParams::unsetpriorityStation()
{
    priorityStationIsSet_ = false;
}

std::string ShowReplicationParams::getReplicationStatus() const
{
    return replicationStatus_;
}

void ShowReplicationParams::setReplicationStatus(const std::string& value)
{
    replicationStatus_ = value;
    replicationStatusIsSet_ = true;
}

bool ShowReplicationParams::replicationStatusIsSet() const
{
    return replicationStatusIsSet_;
}

void ShowReplicationParams::unsetreplicationStatus()
{
    replicationStatusIsSet_ = false;
}

}
}
}
}
}


