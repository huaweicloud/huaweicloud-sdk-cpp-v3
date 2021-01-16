

#include "huaweicloud/ims/v2/model/CreateWholeImageRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




CreateWholeImageRequestBody::CreateWholeImageRequestBody()
{
    description_ = "";
    descriptionIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    imageTagsIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    tagsIsSet_ = false;
    backupId_ = "";
    backupIdIsSet_ = false;
    wholeImageType_ = "";
    wholeImageTypeIsSet_ = false;
    maxRam_ = 0;
    maxRamIsSet_ = false;
    minRam_ = 0;
    minRamIsSet_ = false;
    vaultId_ = "";
    vaultIdIsSet_ = false;
}

CreateWholeImageRequestBody::~CreateWholeImageRequestBody() = default;

void CreateWholeImageRequestBody::validate()
{
}

web::json::value CreateWholeImageRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(imageTagsIsSet_) {
        val[utility::conversions::to_string_t("image_tags")] = ModelBase::toJson(imageTags_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(backupIdIsSet_) {
        val[utility::conversions::to_string_t("backup_id")] = ModelBase::toJson(backupId_);
    }
    if(wholeImageTypeIsSet_) {
        val[utility::conversions::to_string_t("whole_image_type")] = ModelBase::toJson(wholeImageType_);
    }
    if(maxRamIsSet_) {
        val[utility::conversions::to_string_t("max_ram")] = ModelBase::toJson(maxRam_);
    }
    if(minRamIsSet_) {
        val[utility::conversions::to_string_t("min_ram")] = ModelBase::toJson(minRam_);
    }
    if(vaultIdIsSet_) {
        val[utility::conversions::to_string_t("vault_id")] = ModelBase::toJson(vaultId_);
    }

    return val;
}

bool CreateWholeImageRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("image_tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_tags"));
        if(!fieldValue.is_null())
        {
            std::vector<TagKeyValue> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backup_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("whole_image_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("whole_image_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWholeImageType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_ram"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_ram"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxRam(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("min_ram"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("min_ram"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMinRam(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vault_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vault_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVaultId(refVal);
        }
    }
    return ok;
}


std::string CreateWholeImageRequestBody::getDescription() const
{
    return description_;
}

void CreateWholeImageRequestBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateWholeImageRequestBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateWholeImageRequestBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CreateWholeImageRequestBody::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void CreateWholeImageRequestBody::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool CreateWholeImageRequestBody::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void CreateWholeImageRequestBody::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::vector<TagKeyValue>& CreateWholeImageRequestBody::getImageTags()
{
    return imageTags_;
}

void CreateWholeImageRequestBody::setImageTags(const std::vector<TagKeyValue>& value)
{
    imageTags_ = value;
    imageTagsIsSet_ = true;
}

bool CreateWholeImageRequestBody::imageTagsIsSet() const
{
    return imageTagsIsSet_;
}

void CreateWholeImageRequestBody::unsetimageTags()
{
    imageTagsIsSet_ = false;
}

std::string CreateWholeImageRequestBody::getInstanceId() const
{
    return instanceId_;
}

void CreateWholeImageRequestBody::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateWholeImageRequestBody::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateWholeImageRequestBody::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string CreateWholeImageRequestBody::getName() const
{
    return name_;
}

void CreateWholeImageRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateWholeImageRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void CreateWholeImageRequestBody::unsetname()
{
    nameIsSet_ = false;
}

std::vector<std::string>& CreateWholeImageRequestBody::getTags()
{
    return tags_;
}

void CreateWholeImageRequestBody::setTags(const std::vector<std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool CreateWholeImageRequestBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void CreateWholeImageRequestBody::unsettags()
{
    tagsIsSet_ = false;
}

std::string CreateWholeImageRequestBody::getBackupId() const
{
    return backupId_;
}

void CreateWholeImageRequestBody::setBackupId(const std::string& value)
{
    backupId_ = value;
    backupIdIsSet_ = true;
}

bool CreateWholeImageRequestBody::backupIdIsSet() const
{
    return backupIdIsSet_;
}

void CreateWholeImageRequestBody::unsetbackupId()
{
    backupIdIsSet_ = false;
}

std::string CreateWholeImageRequestBody::getWholeImageType() const
{
    return wholeImageType_;
}

void CreateWholeImageRequestBody::setWholeImageType(const std::string& value)
{
    wholeImageType_ = value;
    wholeImageTypeIsSet_ = true;
}

bool CreateWholeImageRequestBody::wholeImageTypeIsSet() const
{
    return wholeImageTypeIsSet_;
}

void CreateWholeImageRequestBody::unsetwholeImageType()
{
    wholeImageTypeIsSet_ = false;
}

int32_t CreateWholeImageRequestBody::getMaxRam() const
{
    return maxRam_;
}

void CreateWholeImageRequestBody::setMaxRam(int32_t value)
{
    maxRam_ = value;
    maxRamIsSet_ = true;
}

bool CreateWholeImageRequestBody::maxRamIsSet() const
{
    return maxRamIsSet_;
}

void CreateWholeImageRequestBody::unsetmaxRam()
{
    maxRamIsSet_ = false;
}

int32_t CreateWholeImageRequestBody::getMinRam() const
{
    return minRam_;
}

void CreateWholeImageRequestBody::setMinRam(int32_t value)
{
    minRam_ = value;
    minRamIsSet_ = true;
}

bool CreateWholeImageRequestBody::minRamIsSet() const
{
    return minRamIsSet_;
}

void CreateWholeImageRequestBody::unsetminRam()
{
    minRamIsSet_ = false;
}

std::string CreateWholeImageRequestBody::getVaultId() const
{
    return vaultId_;
}

void CreateWholeImageRequestBody::setVaultId(const std::string& value)
{
    vaultId_ = value;
    vaultIdIsSet_ = true;
}

bool CreateWholeImageRequestBody::vaultIdIsSet() const
{
    return vaultIdIsSet_;
}

void CreateWholeImageRequestBody::unsetvaultId()
{
    vaultIdIsSet_ = false;
}

}
}
}
}
}


