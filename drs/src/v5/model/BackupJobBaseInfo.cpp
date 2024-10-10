

#include "huaweicloud/drs/v5/model/BackupJobBaseInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




BackupJobBaseInfo::BackupJobBaseInfo()
{
    name_ = "";
    nameIsSet_ = false;
    engineType_ = "";
    engineTypeIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    tagsIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
}

BackupJobBaseInfo::~BackupJobBaseInfo() = default;

void BackupJobBaseInfo::validate()
{
}

web::json::value BackupJobBaseInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(engineTypeIsSet_) {
        val[utility::conversions::to_string_t("engine_type")] = ModelBase::toJson(engineType_);
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

    return val;
}
bool BackupJobBaseInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("engine_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineType(refVal);
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
            std::vector<ResourceTag> refVal;
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
    return ok;
}


std::string BackupJobBaseInfo::getName() const
{
    return name_;
}

void BackupJobBaseInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool BackupJobBaseInfo::nameIsSet() const
{
    return nameIsSet_;
}

void BackupJobBaseInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string BackupJobBaseInfo::getEngineType() const
{
    return engineType_;
}

void BackupJobBaseInfo::setEngineType(const std::string& value)
{
    engineType_ = value;
    engineTypeIsSet_ = true;
}

bool BackupJobBaseInfo::engineTypeIsSet() const
{
    return engineTypeIsSet_;
}

void BackupJobBaseInfo::unsetengineType()
{
    engineTypeIsSet_ = false;
}

std::string BackupJobBaseInfo::getDescription() const
{
    return description_;
}

void BackupJobBaseInfo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool BackupJobBaseInfo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void BackupJobBaseInfo::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<ResourceTag>& BackupJobBaseInfo::getTags()
{
    return tags_;
}

void BackupJobBaseInfo::setTags(const std::vector<ResourceTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool BackupJobBaseInfo::tagsIsSet() const
{
    return tagsIsSet_;
}

void BackupJobBaseInfo::unsettags()
{
    tagsIsSet_ = false;
}

std::string BackupJobBaseInfo::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void BackupJobBaseInfo::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool BackupJobBaseInfo::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void BackupJobBaseInfo::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

}
}
}
}
}


