

#include "huaweicloud/metastudio/v1/model/TrainingJobBasicInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




TrainingJobBasicInfo::TrainingJobBasicInfo()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    assetId_ = "";
    assetIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    coverDownloadUrl_ = "";
    coverDownloadUrlIsSet_ = false;
    lastUpdateTime_ = "";
    lastUpdateTimeIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    contact_ = "";
    contactIsSet_ = false;
    batchName_ = "";
    batchNameIsSet_ = false;
    tagsIsSet_ = false;
    modelVersion_ = "";
    modelVersionIsSet_ = false;
    mattingType_ = "";
    mattingTypeIsSet_ = false;
    modelResolution_ = "";
    modelResolutionIsSet_ = false;
    appUserId_ = "";
    appUserIdIsSet_ = false;
    isFlexus_ = false;
    isFlexusIsSet_ = false;
    isOnlyHumanModel_ = false;
    isOnlyHumanModelIsSet_ = false;
}

TrainingJobBasicInfo::~TrainingJobBasicInfo() = default;

void TrainingJobBasicInfo::validate()
{
}

web::json::value TrainingJobBasicInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(coverDownloadUrlIsSet_) {
        val[utility::conversions::to_string_t("cover_download_url")] = ModelBase::toJson(coverDownloadUrl_);
    }
    if(lastUpdateTimeIsSet_) {
        val[utility::conversions::to_string_t("last_update_time")] = ModelBase::toJson(lastUpdateTime_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(contactIsSet_) {
        val[utility::conversions::to_string_t("contact")] = ModelBase::toJson(contact_);
    }
    if(batchNameIsSet_) {
        val[utility::conversions::to_string_t("batch_name")] = ModelBase::toJson(batchName_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(modelVersionIsSet_) {
        val[utility::conversions::to_string_t("model_version")] = ModelBase::toJson(modelVersion_);
    }
    if(mattingTypeIsSet_) {
        val[utility::conversions::to_string_t("matting_type")] = ModelBase::toJson(mattingType_);
    }
    if(modelResolutionIsSet_) {
        val[utility::conversions::to_string_t("model_resolution")] = ModelBase::toJson(modelResolution_);
    }
    if(appUserIdIsSet_) {
        val[utility::conversions::to_string_t("app_user_id")] = ModelBase::toJson(appUserId_);
    }
    if(isFlexusIsSet_) {
        val[utility::conversions::to_string_t("is_flexus")] = ModelBase::toJson(isFlexus_);
    }
    if(isOnlyHumanModelIsSet_) {
        val[utility::conversions::to_string_t("is_only_human_model")] = ModelBase::toJson(isOnlyHumanModel_);
    }

    return val;
}
bool TrainingJobBasicInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asset_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cover_download_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cover_download_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCoverDownloadUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_update_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("contact"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("contact"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContact(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("batch_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("batch_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBatchName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("model_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("model_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModelVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("matting_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("matting_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMattingType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("model_resolution"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("model_resolution"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModelResolution(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_flexus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_flexus"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsFlexus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_only_human_model"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_only_human_model"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsOnlyHumanModel(refVal);
        }
    }
    return ok;
}


std::string TrainingJobBasicInfo::getJobId() const
{
    return jobId_;
}

void TrainingJobBasicInfo::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool TrainingJobBasicInfo::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void TrainingJobBasicInfo::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string TrainingJobBasicInfo::getName() const
{
    return name_;
}

void TrainingJobBasicInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool TrainingJobBasicInfo::nameIsSet() const
{
    return nameIsSet_;
}

void TrainingJobBasicInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string TrainingJobBasicInfo::getState() const
{
    return state_;
}

void TrainingJobBasicInfo::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool TrainingJobBasicInfo::stateIsSet() const
{
    return stateIsSet_;
}

void TrainingJobBasicInfo::unsetstate()
{
    stateIsSet_ = false;
}

std::string TrainingJobBasicInfo::getAssetId() const
{
    return assetId_;
}

void TrainingJobBasicInfo::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool TrainingJobBasicInfo::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void TrainingJobBasicInfo::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string TrainingJobBasicInfo::getProjectId() const
{
    return projectId_;
}

void TrainingJobBasicInfo::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool TrainingJobBasicInfo::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void TrainingJobBasicInfo::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string TrainingJobBasicInfo::getCoverDownloadUrl() const
{
    return coverDownloadUrl_;
}

void TrainingJobBasicInfo::setCoverDownloadUrl(const std::string& value)
{
    coverDownloadUrl_ = value;
    coverDownloadUrlIsSet_ = true;
}

bool TrainingJobBasicInfo::coverDownloadUrlIsSet() const
{
    return coverDownloadUrlIsSet_;
}

void TrainingJobBasicInfo::unsetcoverDownloadUrl()
{
    coverDownloadUrlIsSet_ = false;
}

std::string TrainingJobBasicInfo::getLastUpdateTime() const
{
    return lastUpdateTime_;
}

void TrainingJobBasicInfo::setLastUpdateTime(const std::string& value)
{
    lastUpdateTime_ = value;
    lastUpdateTimeIsSet_ = true;
}

bool TrainingJobBasicInfo::lastUpdateTimeIsSet() const
{
    return lastUpdateTimeIsSet_;
}

void TrainingJobBasicInfo::unsetlastUpdateTime()
{
    lastUpdateTimeIsSet_ = false;
}

std::string TrainingJobBasicInfo::getCreateTime() const
{
    return createTime_;
}

void TrainingJobBasicInfo::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool TrainingJobBasicInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void TrainingJobBasicInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string TrainingJobBasicInfo::getContact() const
{
    return contact_;
}

void TrainingJobBasicInfo::setContact(const std::string& value)
{
    contact_ = value;
    contactIsSet_ = true;
}

bool TrainingJobBasicInfo::contactIsSet() const
{
    return contactIsSet_;
}

void TrainingJobBasicInfo::unsetcontact()
{
    contactIsSet_ = false;
}

std::string TrainingJobBasicInfo::getBatchName() const
{
    return batchName_;
}

void TrainingJobBasicInfo::setBatchName(const std::string& value)
{
    batchName_ = value;
    batchNameIsSet_ = true;
}

bool TrainingJobBasicInfo::batchNameIsSet() const
{
    return batchNameIsSet_;
}

void TrainingJobBasicInfo::unsetbatchName()
{
    batchNameIsSet_ = false;
}

std::vector<std::string>& TrainingJobBasicInfo::getTags()
{
    return tags_;
}

void TrainingJobBasicInfo::setTags(const std::vector<std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool TrainingJobBasicInfo::tagsIsSet() const
{
    return tagsIsSet_;
}

void TrainingJobBasicInfo::unsettags()
{
    tagsIsSet_ = false;
}

std::string TrainingJobBasicInfo::getModelVersion() const
{
    return modelVersion_;
}

void TrainingJobBasicInfo::setModelVersion(const std::string& value)
{
    modelVersion_ = value;
    modelVersionIsSet_ = true;
}

bool TrainingJobBasicInfo::modelVersionIsSet() const
{
    return modelVersionIsSet_;
}

void TrainingJobBasicInfo::unsetmodelVersion()
{
    modelVersionIsSet_ = false;
}

std::string TrainingJobBasicInfo::getMattingType() const
{
    return mattingType_;
}

void TrainingJobBasicInfo::setMattingType(const std::string& value)
{
    mattingType_ = value;
    mattingTypeIsSet_ = true;
}

bool TrainingJobBasicInfo::mattingTypeIsSet() const
{
    return mattingTypeIsSet_;
}

void TrainingJobBasicInfo::unsetmattingType()
{
    mattingTypeIsSet_ = false;
}

std::string TrainingJobBasicInfo::getModelResolution() const
{
    return modelResolution_;
}

void TrainingJobBasicInfo::setModelResolution(const std::string& value)
{
    modelResolution_ = value;
    modelResolutionIsSet_ = true;
}

bool TrainingJobBasicInfo::modelResolutionIsSet() const
{
    return modelResolutionIsSet_;
}

void TrainingJobBasicInfo::unsetmodelResolution()
{
    modelResolutionIsSet_ = false;
}

std::string TrainingJobBasicInfo::getAppUserId() const
{
    return appUserId_;
}

void TrainingJobBasicInfo::setAppUserId(const std::string& value)
{
    appUserId_ = value;
    appUserIdIsSet_ = true;
}

bool TrainingJobBasicInfo::appUserIdIsSet() const
{
    return appUserIdIsSet_;
}

void TrainingJobBasicInfo::unsetappUserId()
{
    appUserIdIsSet_ = false;
}

bool TrainingJobBasicInfo::isIsFlexus() const
{
    return isFlexus_;
}

void TrainingJobBasicInfo::setIsFlexus(bool value)
{
    isFlexus_ = value;
    isFlexusIsSet_ = true;
}

bool TrainingJobBasicInfo::isFlexusIsSet() const
{
    return isFlexusIsSet_;
}

void TrainingJobBasicInfo::unsetisFlexus()
{
    isFlexusIsSet_ = false;
}

bool TrainingJobBasicInfo::isIsOnlyHumanModel() const
{
    return isOnlyHumanModel_;
}

void TrainingJobBasicInfo::setIsOnlyHumanModel(bool value)
{
    isOnlyHumanModel_ = value;
    isOnlyHumanModelIsSet_ = true;
}

bool TrainingJobBasicInfo::isOnlyHumanModelIsSet() const
{
    return isOnlyHumanModelIsSet_;
}

void TrainingJobBasicInfo::unsetisOnlyHumanModel()
{
    isOnlyHumanModelIsSet_ = false;
}

}
}
}
}
}


