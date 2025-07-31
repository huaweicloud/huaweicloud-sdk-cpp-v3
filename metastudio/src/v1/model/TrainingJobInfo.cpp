

#include "huaweicloud/metastudio/v1/model/TrainingJobInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




TrainingJobInfo::TrainingJobInfo()
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
    assessResultIsSet_ = false;
    isOndemandResource_ = false;
    isOndemandResourceIsSet_ = false;
}

TrainingJobInfo::~TrainingJobInfo() = default;

void TrainingJobInfo::validate()
{
}

web::json::value TrainingJobInfo::toJson() const
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
    if(assessResultIsSet_) {
        val[utility::conversions::to_string_t("assess_result")] = ModelBase::toJson(assessResult_);
    }
    if(isOndemandResourceIsSet_) {
        val[utility::conversions::to_string_t("is_ondemand_resource")] = ModelBase::toJson(isOndemandResource_);
    }

    return val;
}
bool TrainingJobInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("assess_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("assess_result"));
        if(!fieldValue.is_null())
        {
            AssessResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssessResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_ondemand_resource"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_ondemand_resource"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsOndemandResource(refVal);
        }
    }
    return ok;
}


JobType TrainingJobInfo::getJobType() const
{
    return jobType_;
}

void TrainingJobInfo::setJobType(const JobType& value)
{
    jobType_ = value;
    jobTypeIsSet_ = true;
}

bool TrainingJobInfo::jobTypeIsSet() const
{
    return jobTypeIsSet_;
}

void TrainingJobInfo::unsetjobType()
{
    jobTypeIsSet_ = false;
}

std::string TrainingJobInfo::getJobId() const
{
    return jobId_;
}

void TrainingJobInfo::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool TrainingJobInfo::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void TrainingJobInfo::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string TrainingJobInfo::getAppUserId() const
{
    return appUserId_;
}

void TrainingJobInfo::setAppUserId(const std::string& value)
{
    appUserId_ = value;
    appUserIdIsSet_ = true;
}

bool TrainingJobInfo::appUserIdIsSet() const
{
    return appUserIdIsSet_;
}

void TrainingJobInfo::unsetappUserId()
{
    appUserIdIsSet_ = false;
}

std::string TrainingJobInfo::getVoiceName() const
{
    return voiceName_;
}

void TrainingJobInfo::setVoiceName(const std::string& value)
{
    voiceName_ = value;
    voiceNameIsSet_ = true;
}

bool TrainingJobInfo::voiceNameIsSet() const
{
    return voiceNameIsSet_;
}

void TrainingJobInfo::unsetvoiceName()
{
    voiceNameIsSet_ = false;
}

std::string TrainingJobInfo::getSex() const
{
    return sex_;
}

void TrainingJobInfo::setSex(const std::string& value)
{
    sex_ = value;
    sexIsSet_ = true;
}

bool TrainingJobInfo::sexIsSet() const
{
    return sexIsSet_;
}

void TrainingJobInfo::unsetsex()
{
    sexIsSet_ = false;
}

std::string TrainingJobInfo::getLanguage() const
{
    return language_;
}

void TrainingJobInfo::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool TrainingJobInfo::languageIsSet() const
{
    return languageIsSet_;
}

void TrainingJobInfo::unsetlanguage()
{
    languageIsSet_ = false;
}

JobState TrainingJobInfo::getState() const
{
    return state_;
}

void TrainingJobInfo::setState(const JobState& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool TrainingJobInfo::stateIsSet() const
{
    return stateIsSet_;
}

void TrainingJobInfo::unsetstate()
{
    stateIsSet_ = false;
}

int32_t TrainingJobInfo::getRejectTimes() const
{
    return rejectTimes_;
}

void TrainingJobInfo::setRejectTimes(int32_t value)
{
    rejectTimes_ = value;
    rejectTimesIsSet_ = true;
}

bool TrainingJobInfo::rejectTimesIsSet() const
{
    return rejectTimesIsSet_;
}

void TrainingJobInfo::unsetrejectTimes()
{
    rejectTimesIsSet_ = false;
}

std::string TrainingJobInfo::getAssetId() const
{
    return assetId_;
}

void TrainingJobInfo::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool TrainingJobInfo::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void TrainingJobInfo::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string TrainingJobInfo::getJobFailedCode() const
{
    return jobFailedCode_;
}

void TrainingJobInfo::setJobFailedCode(const std::string& value)
{
    jobFailedCode_ = value;
    jobFailedCodeIsSet_ = true;
}

bool TrainingJobInfo::jobFailedCodeIsSet() const
{
    return jobFailedCodeIsSet_;
}

void TrainingJobInfo::unsetjobFailedCode()
{
    jobFailedCodeIsSet_ = false;
}

std::string TrainingJobInfo::getJobFailedReason() const
{
    return jobFailedReason_;
}

void TrainingJobInfo::setJobFailedReason(const std::string& value)
{
    jobFailedReason_ = value;
    jobFailedReasonIsSet_ = true;
}

bool TrainingJobInfo::jobFailedReasonIsSet() const
{
    return jobFailedReasonIsSet_;
}

void TrainingJobInfo::unsetjobFailedReason()
{
    jobFailedReasonIsSet_ = false;
}

int64_t TrainingJobInfo::getCreateTime() const
{
    return createTime_;
}

void TrainingJobInfo::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool TrainingJobInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void TrainingJobInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

int64_t TrainingJobInfo::getLastupdateTime() const
{
    return lastupdateTime_;
}

void TrainingJobInfo::setLastupdateTime(int64_t value)
{
    lastupdateTime_ = value;
    lastupdateTimeIsSet_ = true;
}

bool TrainingJobInfo::lastupdateTimeIsSet() const
{
    return lastupdateTimeIsSet_;
}

void TrainingJobInfo::unsetlastupdateTime()
{
    lastupdateTimeIsSet_ = false;
}

std::string TrainingJobInfo::getVoiceAuthorizationUrl() const
{
    return voiceAuthorizationUrl_;
}

void TrainingJobInfo::setVoiceAuthorizationUrl(const std::string& value)
{
    voiceAuthorizationUrl_ = value;
    voiceAuthorizationUrlIsSet_ = true;
}

bool TrainingJobInfo::voiceAuthorizationUrlIsSet() const
{
    return voiceAuthorizationUrlIsSet_;
}

void TrainingJobInfo::unsetvoiceAuthorizationUrl()
{
    voiceAuthorizationUrlIsSet_ = false;
}

std::string TrainingJobInfo::getTrainingInputSourceUrl() const
{
    return trainingInputSourceUrl_;
}

void TrainingJobInfo::setTrainingInputSourceUrl(const std::string& value)
{
    trainingInputSourceUrl_ = value;
    trainingInputSourceUrlIsSet_ = true;
}

bool TrainingJobInfo::trainingInputSourceUrlIsSet() const
{
    return trainingInputSourceUrlIsSet_;
}

void TrainingJobInfo::unsettrainingInputSourceUrl()
{
    trainingInputSourceUrlIsSet_ = false;
}

CreateType TrainingJobInfo::getCreateType() const
{
    return createType_;
}

void TrainingJobInfo::setCreateType(const CreateType& value)
{
    createType_ = value;
    createTypeIsSet_ = true;
}

bool TrainingJobInfo::createTypeIsSet() const
{
    return createTypeIsSet_;
}

void TrainingJobInfo::unsetcreateType()
{
    createTypeIsSet_ = false;
}

JobTag TrainingJobInfo::getTag() const
{
    return tag_;
}

void TrainingJobInfo::setTag(const JobTag& value)
{
    tag_ = value;
    tagIsSet_ = true;
}

bool TrainingJobInfo::tagIsSet() const
{
    return tagIsSet_;
}

void TrainingJobInfo::unsettag()
{
    tagIsSet_ = false;
}

std::string TrainingJobInfo::getPhone() const
{
    return phone_;
}

void TrainingJobInfo::setPhone(const std::string& value)
{
    phone_ = value;
    phoneIsSet_ = true;
}

bool TrainingJobInfo::phoneIsSet() const
{
    return phoneIsSet_;
}

void TrainingJobInfo::unsetphone()
{
    phoneIsSet_ = false;
}

std::string TrainingJobInfo::getDhtmsJobId() const
{
    return dhtmsJobId_;
}

void TrainingJobInfo::setDhtmsJobId(const std::string& value)
{
    dhtmsJobId_ = value;
    dhtmsJobIdIsSet_ = true;
}

bool TrainingJobInfo::dhtmsJobIdIsSet() const
{
    return dhtmsJobIdIsSet_;
}

void TrainingJobInfo::unsetdhtmsJobId()
{
    dhtmsJobIdIsSet_ = false;
}

std::string TrainingJobInfo::getBatchName() const
{
    return batchName_;
}

void TrainingJobInfo::setBatchName(const std::string& value)
{
    batchName_ = value;
    batchNameIsSet_ = true;
}

bool TrainingJobInfo::batchNameIsSet() const
{
    return batchNameIsSet_;
}

void TrainingJobInfo::unsetbatchName()
{
    batchNameIsSet_ = false;
}

VoiceTrainingAllocatedResource TrainingJobInfo::getAllocatedResource() const
{
    return allocatedResource_;
}

void TrainingJobInfo::setAllocatedResource(const VoiceTrainingAllocatedResource& value)
{
    allocatedResource_ = value;
    allocatedResourceIsSet_ = true;
}

bool TrainingJobInfo::allocatedResourceIsSet() const
{
    return allocatedResourceIsSet_;
}

void TrainingJobInfo::unsetallocatedResource()
{
    allocatedResourceIsSet_ = false;
}

std::string TrainingJobInfo::getOutputLanguage() const
{
    return outputLanguage_;
}

void TrainingJobInfo::setOutputLanguage(const std::string& value)
{
    outputLanguage_ = value;
    outputLanguageIsSet_ = true;
}

bool TrainingJobInfo::outputLanguageIsSet() const
{
    return outputLanguageIsSet_;
}

void TrainingJobInfo::unsetoutputLanguage()
{
    outputLanguageIsSet_ = false;
}

bool TrainingJobInfo::isIsRemake() const
{
    return isRemake_;
}

void TrainingJobInfo::setIsRemake(bool value)
{
    isRemake_ = value;
    isRemakeIsSet_ = true;
}

bool TrainingJobInfo::isRemakeIsSet() const
{
    return isRemakeIsSet_;
}

void TrainingJobInfo::unsetisRemake()
{
    isRemakeIsSet_ = false;
}

AssessResult TrainingJobInfo::getAssessResult() const
{
    return assessResult_;
}

void TrainingJobInfo::setAssessResult(const AssessResult& value)
{
    assessResult_ = value;
    assessResultIsSet_ = true;
}

bool TrainingJobInfo::assessResultIsSet() const
{
    return assessResultIsSet_;
}

void TrainingJobInfo::unsetassessResult()
{
    assessResultIsSet_ = false;
}

bool TrainingJobInfo::isIsOndemandResource() const
{
    return isOndemandResource_;
}

void TrainingJobInfo::setIsOndemandResource(bool value)
{
    isOndemandResource_ = value;
    isOndemandResourceIsSet_ = true;
}

bool TrainingJobInfo::isOndemandResourceIsSet() const
{
    return isOndemandResourceIsSet_;
}

void TrainingJobInfo::unsetisOndemandResource()
{
    isOndemandResourceIsSet_ = false;
}

}
}
}
}
}


