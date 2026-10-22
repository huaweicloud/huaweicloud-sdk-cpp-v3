

#include "huaweicloud/evs/v2/model/SnapshotGroup.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




SnapshotGroup::SnapshotGroup()
{
    serverId_ = "";
    serverIdIsSet_ = false;
    volumeIdsIsSet_ = false;
    instantAccess_ = false;
    instantAccessIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    tagsIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    incremental_ = false;
    incrementalIsSet_ = false;
}

SnapshotGroup::~SnapshotGroup() = default;

void SnapshotGroup::validate()
{
}

web::json::value SnapshotGroup::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverIdIsSet_) {
        val[utility::conversions::to_string_t("server_id")] = ModelBase::toJson(serverId_);
    }
    if(volumeIdsIsSet_) {
        val[utility::conversions::to_string_t("volume_ids")] = ModelBase::toJson(volumeIds_);
    }
    if(instantAccessIsSet_) {
        val[utility::conversions::to_string_t("instant_access")] = ModelBase::toJson(instantAccess_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(incrementalIsSet_) {
        val[utility::conversions::to_string_t("incremental")] = ModelBase::toJson(incremental_);
    }

    return val;
}
bool SnapshotGroup::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("server_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volume_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instant_access"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instant_access"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstantAccess(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("incremental"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("incremental"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIncremental(refVal);
        }
    }
    return ok;
}


std::string SnapshotGroup::getServerId() const
{
    return serverId_;
}

void SnapshotGroup::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool SnapshotGroup::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void SnapshotGroup::unsetserverId()
{
    serverIdIsSet_ = false;
}

std::vector<std::string>& SnapshotGroup::getVolumeIds()
{
    return volumeIds_;
}

void SnapshotGroup::setVolumeIds(const std::vector<std::string>& value)
{
    volumeIds_ = value;
    volumeIdsIsSet_ = true;
}

bool SnapshotGroup::volumeIdsIsSet() const
{
    return volumeIdsIsSet_;
}

void SnapshotGroup::unsetvolumeIds()
{
    volumeIdsIsSet_ = false;
}

bool SnapshotGroup::isInstantAccess() const
{
    return instantAccess_;
}

void SnapshotGroup::setInstantAccess(bool value)
{
    instantAccess_ = value;
    instantAccessIsSet_ = true;
}

bool SnapshotGroup::instantAccessIsSet() const
{
    return instantAccessIsSet_;
}

void SnapshotGroup::unsetinstantAccess()
{
    instantAccessIsSet_ = false;
}

std::string SnapshotGroup::getName() const
{
    return name_;
}

void SnapshotGroup::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool SnapshotGroup::nameIsSet() const
{
    return nameIsSet_;
}

void SnapshotGroup::unsetname()
{
    nameIsSet_ = false;
}

std::string SnapshotGroup::getDescription() const
{
    return description_;
}

void SnapshotGroup::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool SnapshotGroup::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void SnapshotGroup::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::map<std::string, std::string>& SnapshotGroup::getTags()
{
    return tags_;
}

void SnapshotGroup::setTags(const std::map<std::string, std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool SnapshotGroup::tagsIsSet() const
{
    return tagsIsSet_;
}

void SnapshotGroup::unsettags()
{
    tagsIsSet_ = false;
}

std::string SnapshotGroup::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void SnapshotGroup::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool SnapshotGroup::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void SnapshotGroup::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

bool SnapshotGroup::isIncremental() const
{
    return incremental_;
}

void SnapshotGroup::setIncremental(bool value)
{
    incremental_ = value;
    incrementalIsSet_ = true;
}

bool SnapshotGroup::incrementalIsSet() const
{
    return incrementalIsSet_;
}

void SnapshotGroup::unsetincremental()
{
    incrementalIsSet_ = false;
}

}
}
}
}
}


