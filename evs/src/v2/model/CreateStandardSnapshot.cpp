

#include "huaweicloud/evs/v2/model/CreateStandardSnapshot.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




CreateStandardSnapshot::CreateStandardSnapshot()
{
    volumeId_ = "";
    volumeIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    tagsIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    instantAccess_ = false;
    instantAccessIsSet_ = false;
    incremental_ = false;
    incrementalIsSet_ = false;
    retentionDays_ = 0;
    retentionDaysIsSet_ = false;
}

CreateStandardSnapshot::~CreateStandardSnapshot() = default;

void CreateStandardSnapshot::validate()
{
}

web::json::value CreateStandardSnapshot::toJson() const
{
    web::json::value val = web::json::value::object();

    if(volumeIdIsSet_) {
        val[utility::conversions::to_string_t("volume_id")] = ModelBase::toJson(volumeId_);
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
    if(instantAccessIsSet_) {
        val[utility::conversions::to_string_t("instant_access")] = ModelBase::toJson(instantAccess_);
    }
    if(incrementalIsSet_) {
        val[utility::conversions::to_string_t("incremental")] = ModelBase::toJson(incremental_);
    }
    if(retentionDaysIsSet_) {
        val[utility::conversions::to_string_t("retention_days")] = ModelBase::toJson(retentionDays_);
    }

    return val;
}
bool CreateStandardSnapshot::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("instant_access"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instant_access"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstantAccess(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("retention_days"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("retention_days"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRetentionDays(refVal);
        }
    }
    return ok;
}


std::string CreateStandardSnapshot::getVolumeId() const
{
    return volumeId_;
}

void CreateStandardSnapshot::setVolumeId(const std::string& value)
{
    volumeId_ = value;
    volumeIdIsSet_ = true;
}

bool CreateStandardSnapshot::volumeIdIsSet() const
{
    return volumeIdIsSet_;
}

void CreateStandardSnapshot::unsetvolumeId()
{
    volumeIdIsSet_ = false;
}

std::string CreateStandardSnapshot::getName() const
{
    return name_;
}

void CreateStandardSnapshot::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateStandardSnapshot::nameIsSet() const
{
    return nameIsSet_;
}

void CreateStandardSnapshot::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateStandardSnapshot::getDescription() const
{
    return description_;
}

void CreateStandardSnapshot::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateStandardSnapshot::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateStandardSnapshot::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::map<std::string, std::string>& CreateStandardSnapshot::getTags()
{
    return tags_;
}

void CreateStandardSnapshot::setTags(const std::map<std::string, std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool CreateStandardSnapshot::tagsIsSet() const
{
    return tagsIsSet_;
}

void CreateStandardSnapshot::unsettags()
{
    tagsIsSet_ = false;
}

std::string CreateStandardSnapshot::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void CreateStandardSnapshot::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool CreateStandardSnapshot::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void CreateStandardSnapshot::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

bool CreateStandardSnapshot::isInstantAccess() const
{
    return instantAccess_;
}

void CreateStandardSnapshot::setInstantAccess(bool value)
{
    instantAccess_ = value;
    instantAccessIsSet_ = true;
}

bool CreateStandardSnapshot::instantAccessIsSet() const
{
    return instantAccessIsSet_;
}

void CreateStandardSnapshot::unsetinstantAccess()
{
    instantAccessIsSet_ = false;
}

bool CreateStandardSnapshot::isIncremental() const
{
    return incremental_;
}

void CreateStandardSnapshot::setIncremental(bool value)
{
    incremental_ = value;
    incrementalIsSet_ = true;
}

bool CreateStandardSnapshot::incrementalIsSet() const
{
    return incrementalIsSet_;
}

void CreateStandardSnapshot::unsetincremental()
{
    incrementalIsSet_ = false;
}

int32_t CreateStandardSnapshot::getRetentionDays() const
{
    return retentionDays_;
}

void CreateStandardSnapshot::setRetentionDays(int32_t value)
{
    retentionDays_ = value;
    retentionDaysIsSet_ = true;
}

bool CreateStandardSnapshot::retentionDaysIsSet() const
{
    return retentionDaysIsSet_;
}

void CreateStandardSnapshot::unsetretentionDays()
{
    retentionDaysIsSet_ = false;
}

}
}
}
}
}


