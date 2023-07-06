

#include "huaweicloud/sdrs/v1/model/ShowProtectedInstanceParams.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




ShowProtectedInstanceParams::ShowProtectedInstanceParams()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    sourceServer_ = "";
    sourceServerIsSet_ = false;
    targetServer_ = "";
    targetServerIsSet_ = false;
    serverGroupId_ = "";
    serverGroupIdIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
    metadataIsSet_ = false;
    attachmentIsSet_ = false;
    tagsIsSet_ = false;
    progress_ = 0;
    progressIsSet_ = false;
    priorityStation_ = "";
    priorityStationIsSet_ = false;
}

ShowProtectedInstanceParams::~ShowProtectedInstanceParams() = default;

void ShowProtectedInstanceParams::validate()
{
}

web::json::value ShowProtectedInstanceParams::toJson() const
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
    if(sourceServerIsSet_) {
        val[utility::conversions::to_string_t("source_server")] = ModelBase::toJson(sourceServer_);
    }
    if(targetServerIsSet_) {
        val[utility::conversions::to_string_t("target_server")] = ModelBase::toJson(targetServer_);
    }
    if(serverGroupIdIsSet_) {
        val[utility::conversions::to_string_t("server_group_id")] = ModelBase::toJson(serverGroupId_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(metadataIsSet_) {
        val[utility::conversions::to_string_t("metadata")] = ModelBase::toJson(metadata_);
    }
    if(attachmentIsSet_) {
        val[utility::conversions::to_string_t("attachment")] = ModelBase::toJson(attachment_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(progressIsSet_) {
        val[utility::conversions::to_string_t("progress")] = ModelBase::toJson(progress_);
    }
    if(priorityStationIsSet_) {
        val[utility::conversions::to_string_t("priority_station")] = ModelBase::toJson(priorityStation_);
    }

    return val;
}

bool ShowProtectedInstanceParams::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("source_server"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_server"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceServer(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_server"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_server"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetServer(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            MetadataParams refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attachment"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attachment"));
        if(!fieldValue.is_null())
        {
            std::vector<ProtectedInstanceAttachment> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttachment(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceTag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("priority_station"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("priority_station"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPriorityStation(refVal);
        }
    }
    return ok;
}

std::string ShowProtectedInstanceParams::getId() const
{
    return id_;
}

void ShowProtectedInstanceParams::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowProtectedInstanceParams::idIsSet() const
{
    return idIsSet_;
}

void ShowProtectedInstanceParams::unsetid()
{
    idIsSet_ = false;
}

std::string ShowProtectedInstanceParams::getName() const
{
    return name_;
}

void ShowProtectedInstanceParams::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowProtectedInstanceParams::nameIsSet() const
{
    return nameIsSet_;
}

void ShowProtectedInstanceParams::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowProtectedInstanceParams::getDescription() const
{
    return description_;
}

void ShowProtectedInstanceParams::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ShowProtectedInstanceParams::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ShowProtectedInstanceParams::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ShowProtectedInstanceParams::getStatus() const
{
    return status_;
}

void ShowProtectedInstanceParams::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowProtectedInstanceParams::statusIsSet() const
{
    return statusIsSet_;
}

void ShowProtectedInstanceParams::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowProtectedInstanceParams::getSourceServer() const
{
    return sourceServer_;
}

void ShowProtectedInstanceParams::setSourceServer(const std::string& value)
{
    sourceServer_ = value;
    sourceServerIsSet_ = true;
}

bool ShowProtectedInstanceParams::sourceServerIsSet() const
{
    return sourceServerIsSet_;
}

void ShowProtectedInstanceParams::unsetsourceServer()
{
    sourceServerIsSet_ = false;
}

std::string ShowProtectedInstanceParams::getTargetServer() const
{
    return targetServer_;
}

void ShowProtectedInstanceParams::setTargetServer(const std::string& value)
{
    targetServer_ = value;
    targetServerIsSet_ = true;
}

bool ShowProtectedInstanceParams::targetServerIsSet() const
{
    return targetServerIsSet_;
}

void ShowProtectedInstanceParams::unsettargetServer()
{
    targetServerIsSet_ = false;
}

std::string ShowProtectedInstanceParams::getServerGroupId() const
{
    return serverGroupId_;
}

void ShowProtectedInstanceParams::setServerGroupId(const std::string& value)
{
    serverGroupId_ = value;
    serverGroupIdIsSet_ = true;
}

bool ShowProtectedInstanceParams::serverGroupIdIsSet() const
{
    return serverGroupIdIsSet_;
}

void ShowProtectedInstanceParams::unsetserverGroupId()
{
    serverGroupIdIsSet_ = false;
}

std::string ShowProtectedInstanceParams::getCreatedAt() const
{
    return createdAt_;
}

void ShowProtectedInstanceParams::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool ShowProtectedInstanceParams::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void ShowProtectedInstanceParams::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string ShowProtectedInstanceParams::getUpdatedAt() const
{
    return updatedAt_;
}

void ShowProtectedInstanceParams::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool ShowProtectedInstanceParams::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void ShowProtectedInstanceParams::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

MetadataParams ShowProtectedInstanceParams::getMetadata() const
{
    return metadata_;
}

void ShowProtectedInstanceParams::setMetadata(const MetadataParams& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool ShowProtectedInstanceParams::metadataIsSet() const
{
    return metadataIsSet_;
}

void ShowProtectedInstanceParams::unsetmetadata()
{
    metadataIsSet_ = false;
}

std::vector<ProtectedInstanceAttachment>& ShowProtectedInstanceParams::getAttachment()
{
    return attachment_;
}

void ShowProtectedInstanceParams::setAttachment(const std::vector<ProtectedInstanceAttachment>& value)
{
    attachment_ = value;
    attachmentIsSet_ = true;
}

bool ShowProtectedInstanceParams::attachmentIsSet() const
{
    return attachmentIsSet_;
}

void ShowProtectedInstanceParams::unsetattachment()
{
    attachmentIsSet_ = false;
}

std::vector<ResourceTag>& ShowProtectedInstanceParams::getTags()
{
    return tags_;
}

void ShowProtectedInstanceParams::setTags(const std::vector<ResourceTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ShowProtectedInstanceParams::tagsIsSet() const
{
    return tagsIsSet_;
}

void ShowProtectedInstanceParams::unsettags()
{
    tagsIsSet_ = false;
}

int32_t ShowProtectedInstanceParams::getProgress() const
{
    return progress_;
}

void ShowProtectedInstanceParams::setProgress(int32_t value)
{
    progress_ = value;
    progressIsSet_ = true;
}

bool ShowProtectedInstanceParams::progressIsSet() const
{
    return progressIsSet_;
}

void ShowProtectedInstanceParams::unsetprogress()
{
    progressIsSet_ = false;
}

std::string ShowProtectedInstanceParams::getPriorityStation() const
{
    return priorityStation_;
}

void ShowProtectedInstanceParams::setPriorityStation(const std::string& value)
{
    priorityStation_ = value;
    priorityStationIsSet_ = true;
}

bool ShowProtectedInstanceParams::priorityStationIsSet() const
{
    return priorityStationIsSet_;
}

void ShowProtectedInstanceParams::unsetpriorityStation()
{
    priorityStationIsSet_ = false;
}

}
}
}
}
}


