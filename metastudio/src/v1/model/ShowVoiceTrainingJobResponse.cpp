

#include "huaweicloud/metastudio/v1/model/ShowVoiceTrainingJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowVoiceTrainingJobResponse::ShowVoiceTrainingJobResponse()
{
    jobTypeIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    appUserId_ = "";
    appUserIdIsSet_ = false;
    voiceName_ = "";
    voiceNameIsSet_ = false;
    sex_ = "";
    sexIsSet_ = false;
    language_ = "";
    languageIsSet_ = false;
    stateIsSet_ = false;
    rejectTimes_ = 0;
    rejectTimesIsSet_ = false;
    assetId_ = "";
    assetIdIsSet_ = false;
    jobFailedCode_ = "";
    jobFailedCodeIsSet_ = false;
    jobFailedReason_ = "";
    jobFailedReasonIsSet_ = false;
    createTime_ = 0L;
    createTimeIsSet_ = false;
    lastupdateTime_ = 0L;
    lastupdateTimeIsSet_ = false;
    voiceAuthorizationUrl_ = "";
    voiceAuthorizationUrlIsSet_ = false;
    trainingInputSourceUrl_ = "";
    trainingInputSourceUrlIsSet_ = false;
    createTypeIsSet_ = false;
    tagIsSet_ = false;
    phone_ = "";
    phoneIsSet_ = false;
    dhtmsJobId_ = "";
    dhtmsJobIdIsSet_ = false;
    batchName_ = "";
    batchNameIsSet_ = false;
    allocatedResourceIsSet_ = false;
    outputLanguage_ = "";
    outputLanguageIsSet_ = false;
    isRemake_ = false;
    isRemakeIsSet_ = false;
}

ShowVoiceTrainingJobResponse::~ShowVoiceTrainingJobResponse() = default;

void ShowVoiceTrainingJobResponse::validate()
{
}

web::json::value ShowVoiceTrainingJobResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobTypeIsSet_) {
        val[utility::conversions::to_string_t("job_type")] = ModelBase::toJson(jobType_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(appUserIdIsSet_) {
        val[utility::conversions::to_string_t("app_user_id")] = ModelBase::toJson(appUserId_);
    }
    if(voiceNameIsSet_) {
        val[utility::conversions::to_string_t("voice_name")] = ModelBase::toJson(voiceName_);
    }
    if(sexIsSet_) {
        val[utility::conversions::to_string_t("sex")] = ModelBase::toJson(sex_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(rejectTimesIsSet_) {
        val[utility::conversions::to_string_t("reject_times")] = ModelBase::toJson(rejectTimes_);
    }
    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(jobFailedCodeIsSet_) {
        val[utility::conversions::to_string_t("job_failed_code")] = ModelBase::toJson(jobFailedCode_);
    }
    if(jobFailedReasonIsSet_) {
        val[utility::conversions::to_string_t("job_failed_reason")] = ModelBase::toJson(jobFailedReason_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(lastupdateTimeIsSet_) {
        val[utility::conversions::to_string_t("lastupdate_time")] = ModelBase::toJson(lastupdateTime_);
    }
    if(voiceAuthorizationUrlIsSet_) {
        val[utility::conversions::to_string_t("voice_authorization_url")] = ModelBase::toJson(voiceAuthorizationUrl_);
    }
    if(trainingInputSourceUrlIsSet_) {
        val[utility::conversions::to_string_t("training_input_source_url")] = ModelBase::toJson(trainingInputSourceUrl_);
    }
    if(createTypeIsSet_) {
        val[utility::conversions::to_string_t("create_type")] = ModelBase::toJson(createType_);
    }
    if(tagIsSet_) {
        val[utility::conversions::to_string_t("tag")] = ModelBase::toJson(tag_);
    }
    if(phoneIsSet_) {
        val[utility::conversions::to_string_t("phone")] = ModelBase::toJson(phone_);
    }
    if(dhtmsJobIdIsSet_) {
        val[utility::conversions::to_string_t("dhtms_job_id")] = ModelBase::toJson(dhtmsJobId_);
    }
    if(batchNameIsSet_) {
        val[utility::conversions::to_string_t("batch_name")] = ModelBase::toJson(batchName_);
    }
    if(allocatedResourceIsSet_) {
        val[utility::conversions::to_string_t("allocated_resource")] = ModelBase::toJson(allocatedResource_);
    }
    if(outputLanguageIsSet_) {
        val[utility::conversions::to_string_t("output_language")] = ModelBase::toJson(outputLanguage_);
    }
    if(isRemakeIsSet_) {
        val[utility::conversions::to_string_t("is_remake")] = ModelBase::toJson(isRemake_);
    }

    return val;
}
bool ShowVoiceTrainingJobResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_type"));
        if(!fieldValue.is_null())
        {
            JobType refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("voice_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("voice_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVoiceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sex"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sex"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            JobState refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reject_times"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reject_times"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRejectTimes(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("job_failed_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_failed_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobFailedCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_failed_reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_failed_reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobFailedReason(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lastupdate_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lastupdate_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastupdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("voice_authorization_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("voice_authorization_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVoiceAuthorizationUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("training_input_source_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("training_input_source_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrainingInputSourceUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_type"));
        if(!fieldValue.is_null())
        {
            CreateType refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag"));
        if(!fieldValue.is_null())
        {
            JobTag refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("phone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("phone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPhone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dhtms_job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dhtms_job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDhtmsJobId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("allocated_resource"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("allocated_resource"));
        if(!fieldValue.is_null())
        {
            VoiceTrainingAllocatedResource refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllocatedResource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("output_language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output_language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_remake"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_remake"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsRemake(refVal);
        }
    }
    return ok;
}


JobType ShowVoiceTrainingJobResponse::getJobType() const
{
    return jobType_;
}

void ShowVoiceTrainingJobResponse::setJobType(const JobType& value)
{
    jobType_ = value;
    jobTypeIsSet_ = true;
}

bool ShowVoiceTrainingJobResponse::jobTypeIsSet() const
{
    return jobTypeIsSet_;
}

void ShowVoiceTrainingJobResponse::unsetjobType()
{
    jobTypeIsSet_ = false;
}

std::string ShowVoiceTrainingJobResponse::getJobId() const
{
    return jobId_;
}

void ShowVoiceTrainingJobResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowVoiceTrainingJobResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowVoiceTrainingJobResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ShowVoiceTrainingJobResponse::getAppUserId() const
{
    return appUserId_;
}

void ShowVoiceTrainingJobResponse::setAppUserId(const std::string& value)
{
    appUserId_ = value;
    appUserIdIsSet_ = true;
}

bool ShowVoiceTrainingJobResponse::appUserIdIsSet() const
{
    return appUserIdIsSet_;
}

void ShowVoiceTrainingJobResponse::unsetappUserId()
{
    appUserIdIsSet_ = false;
}

std::string ShowVoiceTrainingJobResponse::getVoiceName() const
{
    return voiceName_;
}

void ShowVoiceTrainingJobResponse::setVoiceName(const std::string& value)
{
    voiceName_ = value;
    voiceNameIsSet_ = true;
}

bool ShowVoiceTrainingJobResponse::voiceNameIsSet() const
{
    return voiceNameIsSet_;
}

void ShowVoiceTrainingJobResponse::unsetvoiceName()
{
    voiceNameIsSet_ = false;
}

std::string ShowVoiceTrainingJobResponse::getSex() const
{
    return sex_;
}

void ShowVoiceTrainingJobResponse::setSex(const std::string& value)
{
    sex_ = value;
    sexIsSet_ = true;
}

bool ShowVoiceTrainingJobResponse::sexIsSet() const
{
    return sexIsSet_;
}

void ShowVoiceTrainingJobResponse::unsetsex()
{
    sexIsSet_ = false;
}

std::string ShowVoiceTrainingJobResponse::getLanguage() const
{
    return language_;
}

void ShowVoiceTrainingJobResponse::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool ShowVoiceTrainingJobResponse::languageIsSet() const
{
    return languageIsSet_;
}

void ShowVoiceTrainingJobResponse::unsetlanguage()
{
    languageIsSet_ = false;
}

JobState ShowVoiceTrainingJobResponse::getState() const
{
    return state_;
}

void ShowVoiceTrainingJobResponse::setState(const JobState& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool ShowVoiceTrainingJobResponse::stateIsSet() const
{
    return stateIsSet_;
}

void ShowVoiceTrainingJobResponse::unsetstate()
{
    stateIsSet_ = false;
}

int32_t ShowVoiceTrainingJobResponse::getRejectTimes() const
{
    return rejectTimes_;
}

void ShowVoiceTrainingJobResponse::setRejectTimes(int32_t value)
{
    rejectTimes_ = value;
    rejectTimesIsSet_ = true;
}

bool ShowVoiceTrainingJobResponse::rejectTimesIsSet() const
{
    return rejectTimesIsSet_;
}

void ShowVoiceTrainingJobResponse::unsetrejectTimes()
{
    rejectTimesIsSet_ = false;
}

std::string ShowVoiceTrainingJobResponse::getAssetId() const
{
    return assetId_;
}

void ShowVoiceTrainingJobResponse::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool ShowVoiceTrainingJobResponse::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void ShowVoiceTrainingJobResponse::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string ShowVoiceTrainingJobResponse::getJobFailedCode() const
{
    return jobFailedCode_;
}

void ShowVoiceTrainingJobResponse::setJobFailedCode(const std::string& value)
{
    jobFailedCode_ = value;
    jobFailedCodeIsSet_ = true;
}

bool ShowVoiceTrainingJobResponse::jobFailedCodeIsSet() const
{
    return jobFailedCodeIsSet_;
}

void ShowVoiceTrainingJobResponse::unsetjobFailedCode()
{
    jobFailedCodeIsSet_ = false;
}

std::string ShowVoiceTrainingJobResponse::getJobFailedReason() const
{
    return jobFailedReason_;
}

void ShowVoiceTrainingJobResponse::setJobFailedReason(const std::string& value)
{
    jobFailedReason_ = value;
    jobFailedReasonIsSet_ = true;
}

bool ShowVoiceTrainingJobResponse::jobFailedReasonIsSet() const
{
    return jobFailedReasonIsSet_;
}

void ShowVoiceTrainingJobResponse::unsetjobFailedReason()
{
    jobFailedReasonIsSet_ = false;
}

int64_t ShowVoiceTrainingJobResponse::getCreateTime() const
{
    return createTime_;
}

void ShowVoiceTrainingJobResponse::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowVoiceTrainingJobResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowVoiceTrainingJobResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

int64_t ShowVoiceTrainingJobResponse::getLastupdateTime() const
{
    return lastupdateTime_;
}

void ShowVoiceTrainingJobResponse::setLastupdateTime(int64_t value)
{
    lastupdateTime_ = value;
    lastupdateTimeIsSet_ = true;
}

bool ShowVoiceTrainingJobResponse::lastupdateTimeIsSet() const
{
    return lastupdateTimeIsSet_;
}

void ShowVoiceTrainingJobResponse::unsetlastupdateTime()
{
    lastupdateTimeIsSet_ = false;
}

std::string ShowVoiceTrainingJobResponse::getVoiceAuthorizationUrl() const
{
    return voiceAuthorizationUrl_;
}

void ShowVoiceTrainingJobResponse::setVoiceAuthorizationUrl(const std::string& value)
{
    voiceAuthorizationUrl_ = value;
    voiceAuthorizationUrlIsSet_ = true;
}

bool ShowVoiceTrainingJobResponse::voiceAuthorizationUrlIsSet() const
{
    return voiceAuthorizationUrlIsSet_;
}

void ShowVoiceTrainingJobResponse::unsetvoiceAuthorizationUrl()
{
    voiceAuthorizationUrlIsSet_ = false;
}

std::string ShowVoiceTrainingJobResponse::getTrainingInputSourceUrl() const
{
    return trainingInputSourceUrl_;
}

void ShowVoiceTrainingJobResponse::setTrainingInputSourceUrl(const std::string& value)
{
    trainingInputSourceUrl_ = value;
    trainingInputSourceUrlIsSet_ = true;
}

bool ShowVoiceTrainingJobResponse::trainingInputSourceUrlIsSet() const
{
    return trainingInputSourceUrlIsSet_;
}

void ShowVoiceTrainingJobResponse::unsettrainingInputSourceUrl()
{
    trainingInputSourceUrlIsSet_ = false;
}

CreateType ShowVoiceTrainingJobResponse::getCreateType() const
{
    return createType_;
}

void ShowVoiceTrainingJobResponse::setCreateType(const CreateType& value)
{
    createType_ = value;
    createTypeIsSet_ = true;
}

bool ShowVoiceTrainingJobResponse::createTypeIsSet() const
{
    return createTypeIsSet_;
}

void ShowVoiceTrainingJobResponse::unsetcreateType()
{
    createTypeIsSet_ = false;
}

JobTag ShowVoiceTrainingJobResponse::getTag() const
{
    return tag_;
}

void ShowVoiceTrainingJobResponse::setTag(const JobTag& value)
{
    tag_ = value;
    tagIsSet_ = true;
}

bool ShowVoiceTrainingJobResponse::tagIsSet() const
{
    return tagIsSet_;
}

void ShowVoiceTrainingJobResponse::unsettag()
{
    tagIsSet_ = false;
}

std::string ShowVoiceTrainingJobResponse::getPhone() const
{
    return phone_;
}

void ShowVoiceTrainingJobResponse::setPhone(const std::string& value)
{
    phone_ = value;
    phoneIsSet_ = true;
}

bool ShowVoiceTrainingJobResponse::phoneIsSet() const
{
    return phoneIsSet_;
}

void ShowVoiceTrainingJobResponse::unsetphone()
{
    phoneIsSet_ = false;
}

std::string ShowVoiceTrainingJobResponse::getDhtmsJobId() const
{
    return dhtmsJobId_;
}

void ShowVoiceTrainingJobResponse::setDhtmsJobId(const std::string& value)
{
    dhtmsJobId_ = value;
    dhtmsJobIdIsSet_ = true;
}

bool ShowVoiceTrainingJobResponse::dhtmsJobIdIsSet() const
{
    return dhtmsJobIdIsSet_;
}

void ShowVoiceTrainingJobResponse::unsetdhtmsJobId()
{
    dhtmsJobIdIsSet_ = false;
}

std::string ShowVoiceTrainingJobResponse::getBatchName() const
{
    return batchName_;
}

void ShowVoiceTrainingJobResponse::setBatchName(const std::string& value)
{
    batchName_ = value;
    batchNameIsSet_ = true;
}

bool ShowVoiceTrainingJobResponse::batchNameIsSet() const
{
    return batchNameIsSet_;
}

void ShowVoiceTrainingJobResponse::unsetbatchName()
{
    batchNameIsSet_ = false;
}

VoiceTrainingAllocatedResource ShowVoiceTrainingJobResponse::getAllocatedResource() const
{
    return allocatedResource_;
}

void ShowVoiceTrainingJobResponse::setAllocatedResource(const VoiceTrainingAllocatedResource& value)
{
    allocatedResource_ = value;
    allocatedResourceIsSet_ = true;
}

bool ShowVoiceTrainingJobResponse::allocatedResourceIsSet() const
{
    return allocatedResourceIsSet_;
}

void ShowVoiceTrainingJobResponse::unsetallocatedResource()
{
    allocatedResourceIsSet_ = false;
}

std::string ShowVoiceTrainingJobResponse::getOutputLanguage() const
{
    return outputLanguage_;
}

void ShowVoiceTrainingJobResponse::setOutputLanguage(const std::string& value)
{
    outputLanguage_ = value;
    outputLanguageIsSet_ = true;
}

bool ShowVoiceTrainingJobResponse::outputLanguageIsSet() const
{
    return outputLanguageIsSet_;
}

void ShowVoiceTrainingJobResponse::unsetoutputLanguage()
{
    outputLanguageIsSet_ = false;
}

bool ShowVoiceTrainingJobResponse::isIsRemake() const
{
    return isRemake_;
}

void ShowVoiceTrainingJobResponse::setIsRemake(bool value)
{
    isRemake_ = value;
    isRemakeIsSet_ = true;
}

bool ShowVoiceTrainingJobResponse::isRemakeIsSet() const
{
    return isRemakeIsSet_;
}

void ShowVoiceTrainingJobResponse::unsetisRemake()
{
    isRemakeIsSet_ = false;
}

}
}
}
}
}


