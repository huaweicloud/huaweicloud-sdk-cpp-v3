

#include "huaweicloud/metastudio/v1/model/ListVoiceTrainingJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListVoiceTrainingJobRequest::ListVoiceTrainingJobRequest()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    createUntil_ = "";
    createUntilIsSet_ = false;
    createSince_ = "";
    createSinceIsSet_ = false;
    updateUntil_ = "";
    updateUntilIsSet_ = false;
    updateSince_ = "";
    updateSinceIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    voiceName_ = "";
    voiceNameIsSet_ = false;
    tag_ = "";
    tagIsSet_ = false;
    jobType_ = "";
    jobTypeIsSet_ = false;
    batchName_ = "";
    batchNameIsSet_ = false;
    sortKey_ = "";
    sortKeyIsSet_ = false;
    sortDir_ = "";
    sortDirIsSet_ = false;
}

ListVoiceTrainingJobRequest::~ListVoiceTrainingJobRequest() = default;

void ListVoiceTrainingJobRequest::validate()
{
}

web::json::value ListVoiceTrainingJobRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(createUntilIsSet_) {
        val[utility::conversions::to_string_t("create_until")] = ModelBase::toJson(createUntil_);
    }
    if(createSinceIsSet_) {
        val[utility::conversions::to_string_t("create_since")] = ModelBase::toJson(createSince_);
    }
    if(updateUntilIsSet_) {
        val[utility::conversions::to_string_t("update_until")] = ModelBase::toJson(updateUntil_);
    }
    if(updateSinceIsSet_) {
        val[utility::conversions::to_string_t("update_since")] = ModelBase::toJson(updateSince_);
    }
    if(xAppUserIdIsSet_) {
        val[utility::conversions::to_string_t("X-App-UserId")] = ModelBase::toJson(xAppUserId_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(voiceNameIsSet_) {
        val[utility::conversions::to_string_t("voice_name")] = ModelBase::toJson(voiceName_);
    }
    if(tagIsSet_) {
        val[utility::conversions::to_string_t("tag")] = ModelBase::toJson(tag_);
    }
    if(jobTypeIsSet_) {
        val[utility::conversions::to_string_t("job_type")] = ModelBase::toJson(jobType_);
    }
    if(batchNameIsSet_) {
        val[utility::conversions::to_string_t("batch_name")] = ModelBase::toJson(batchName_);
    }
    if(sortKeyIsSet_) {
        val[utility::conversions::to_string_t("sort_key")] = ModelBase::toJson(sortKey_);
    }
    if(sortDirIsSet_) {
        val[utility::conversions::to_string_t("sort_dir")] = ModelBase::toJson(sortDir_);
    }

    return val;
}
bool ListVoiceTrainingJobRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_until"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_until"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateUntil(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_since"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_since"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateSince(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_until"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_until"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateUntil(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_since"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_since"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateSince(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-App-UserId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-App-UserId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXAppUserId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("sort_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_dir"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_dir"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortDir(refVal);
        }
    }
    return ok;
}


int32_t ListVoiceTrainingJobRequest::getOffset() const
{
    return offset_;
}

void ListVoiceTrainingJobRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListVoiceTrainingJobRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListVoiceTrainingJobRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListVoiceTrainingJobRequest::getLimit() const
{
    return limit_;
}

void ListVoiceTrainingJobRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListVoiceTrainingJobRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListVoiceTrainingJobRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListVoiceTrainingJobRequest::getCreateUntil() const
{
    return createUntil_;
}

void ListVoiceTrainingJobRequest::setCreateUntil(const std::string& value)
{
    createUntil_ = value;
    createUntilIsSet_ = true;
}

bool ListVoiceTrainingJobRequest::createUntilIsSet() const
{
    return createUntilIsSet_;
}

void ListVoiceTrainingJobRequest::unsetcreateUntil()
{
    createUntilIsSet_ = false;
}

std::string ListVoiceTrainingJobRequest::getCreateSince() const
{
    return createSince_;
}

void ListVoiceTrainingJobRequest::setCreateSince(const std::string& value)
{
    createSince_ = value;
    createSinceIsSet_ = true;
}

bool ListVoiceTrainingJobRequest::createSinceIsSet() const
{
    return createSinceIsSet_;
}

void ListVoiceTrainingJobRequest::unsetcreateSince()
{
    createSinceIsSet_ = false;
}

std::string ListVoiceTrainingJobRequest::getUpdateUntil() const
{
    return updateUntil_;
}

void ListVoiceTrainingJobRequest::setUpdateUntil(const std::string& value)
{
    updateUntil_ = value;
    updateUntilIsSet_ = true;
}

bool ListVoiceTrainingJobRequest::updateUntilIsSet() const
{
    return updateUntilIsSet_;
}

void ListVoiceTrainingJobRequest::unsetupdateUntil()
{
    updateUntilIsSet_ = false;
}

std::string ListVoiceTrainingJobRequest::getUpdateSince() const
{
    return updateSince_;
}

void ListVoiceTrainingJobRequest::setUpdateSince(const std::string& value)
{
    updateSince_ = value;
    updateSinceIsSet_ = true;
}

bool ListVoiceTrainingJobRequest::updateSinceIsSet() const
{
    return updateSinceIsSet_;
}

void ListVoiceTrainingJobRequest::unsetupdateSince()
{
    updateSinceIsSet_ = false;
}

std::string ListVoiceTrainingJobRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ListVoiceTrainingJobRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ListVoiceTrainingJobRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ListVoiceTrainingJobRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string ListVoiceTrainingJobRequest::getState() const
{
    return state_;
}

void ListVoiceTrainingJobRequest::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool ListVoiceTrainingJobRequest::stateIsSet() const
{
    return stateIsSet_;
}

void ListVoiceTrainingJobRequest::unsetstate()
{
    stateIsSet_ = false;
}

std::string ListVoiceTrainingJobRequest::getJobId() const
{
    return jobId_;
}

void ListVoiceTrainingJobRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ListVoiceTrainingJobRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ListVoiceTrainingJobRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ListVoiceTrainingJobRequest::getVoiceName() const
{
    return voiceName_;
}

void ListVoiceTrainingJobRequest::setVoiceName(const std::string& value)
{
    voiceName_ = value;
    voiceNameIsSet_ = true;
}

bool ListVoiceTrainingJobRequest::voiceNameIsSet() const
{
    return voiceNameIsSet_;
}

void ListVoiceTrainingJobRequest::unsetvoiceName()
{
    voiceNameIsSet_ = false;
}

std::string ListVoiceTrainingJobRequest::getTag() const
{
    return tag_;
}

void ListVoiceTrainingJobRequest::setTag(const std::string& value)
{
    tag_ = value;
    tagIsSet_ = true;
}

bool ListVoiceTrainingJobRequest::tagIsSet() const
{
    return tagIsSet_;
}

void ListVoiceTrainingJobRequest::unsettag()
{
    tagIsSet_ = false;
}

std::string ListVoiceTrainingJobRequest::getJobType() const
{
    return jobType_;
}

void ListVoiceTrainingJobRequest::setJobType(const std::string& value)
{
    jobType_ = value;
    jobTypeIsSet_ = true;
}

bool ListVoiceTrainingJobRequest::jobTypeIsSet() const
{
    return jobTypeIsSet_;
}

void ListVoiceTrainingJobRequest::unsetjobType()
{
    jobTypeIsSet_ = false;
}

std::string ListVoiceTrainingJobRequest::getBatchName() const
{
    return batchName_;
}

void ListVoiceTrainingJobRequest::setBatchName(const std::string& value)
{
    batchName_ = value;
    batchNameIsSet_ = true;
}

bool ListVoiceTrainingJobRequest::batchNameIsSet() const
{
    return batchNameIsSet_;
}

void ListVoiceTrainingJobRequest::unsetbatchName()
{
    batchNameIsSet_ = false;
}

std::string ListVoiceTrainingJobRequest::getSortKey() const
{
    return sortKey_;
}

void ListVoiceTrainingJobRequest::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ListVoiceTrainingJobRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ListVoiceTrainingJobRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::string ListVoiceTrainingJobRequest::getSortDir() const
{
    return sortDir_;
}

void ListVoiceTrainingJobRequest::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ListVoiceTrainingJobRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ListVoiceTrainingJobRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

}
}
}
}
}


