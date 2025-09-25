

#include "huaweicloud/codehub/v4/model/SimpleMergeRequestDetailDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




SimpleMergeRequestDetailDto::SimpleMergeRequestDetailDto()
{
    id_ = 0;
    idIsSet_ = false;
    iid_ = 0;
    iidIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    sourceBranch_ = "";
    sourceBranchIsSet_ = false;
    targetBranch_ = "";
    targetBranchIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    reviewMode_ = "";
    reviewModeIsSet_ = false;
    authorIsSet_ = false;
    mergeRequestType_ = "";
    mergeRequestTypeIsSet_ = false;
    moderationResult_ = false;
    moderationResultIsSet_ = false;
    moderationTime_ = 0L;
    moderationTimeIsSet_ = false;
    moderationStatus_ = 0;
    moderationStatusIsSet_ = false;
    isUseTempBranch_ = false;
    isUseTempBranchIsSet_ = false;
}

SimpleMergeRequestDetailDto::~SimpleMergeRequestDetailDto() = default;

void SimpleMergeRequestDetailDto::validate()
{
}

web::json::value SimpleMergeRequestDetailDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(iidIsSet_) {
        val[utility::conversions::to_string_t("iid")] = ModelBase::toJson(iid_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(sourceBranchIsSet_) {
        val[utility::conversions::to_string_t("source_branch")] = ModelBase::toJson(sourceBranch_);
    }
    if(targetBranchIsSet_) {
        val[utility::conversions::to_string_t("target_branch")] = ModelBase::toJson(targetBranch_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(reviewModeIsSet_) {
        val[utility::conversions::to_string_t("review_mode")] = ModelBase::toJson(reviewMode_);
    }
    if(authorIsSet_) {
        val[utility::conversions::to_string_t("author")] = ModelBase::toJson(author_);
    }
    if(mergeRequestTypeIsSet_) {
        val[utility::conversions::to_string_t("merge_request_type")] = ModelBase::toJson(mergeRequestType_);
    }
    if(moderationResultIsSet_) {
        val[utility::conversions::to_string_t("moderation_result")] = ModelBase::toJson(moderationResult_);
    }
    if(moderationTimeIsSet_) {
        val[utility::conversions::to_string_t("moderation_time")] = ModelBase::toJson(moderationTime_);
    }
    if(moderationStatusIsSet_) {
        val[utility::conversions::to_string_t("moderation_status")] = ModelBase::toJson(moderationStatus_);
    }
    if(isUseTempBranchIsSet_) {
        val[utility::conversions::to_string_t("is_use_temp_branch")] = ModelBase::toJson(isUseTempBranch_);
    }

    return val;
}
bool SimpleMergeRequestDetailDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iid"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTitle(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("source_branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_branch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceBranch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_branch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetBranch(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("review_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("review_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReviewMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("author"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("author"));
        if(!fieldValue.is_null())
        {
            UserBasicDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("merge_request_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merge_request_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergeRequestType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("moderation_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("moderation_result"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModerationResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("moderation_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("moderation_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModerationTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("moderation_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("moderation_status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModerationStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_use_temp_branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_use_temp_branch"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsUseTempBranch(refVal);
        }
    }
    return ok;
}


int32_t SimpleMergeRequestDetailDto::getId() const
{
    return id_;
}

void SimpleMergeRequestDetailDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool SimpleMergeRequestDetailDto::idIsSet() const
{
    return idIsSet_;
}

void SimpleMergeRequestDetailDto::unsetid()
{
    idIsSet_ = false;
}

int32_t SimpleMergeRequestDetailDto::getIid() const
{
    return iid_;
}

void SimpleMergeRequestDetailDto::setIid(int32_t value)
{
    iid_ = value;
    iidIsSet_ = true;
}

bool SimpleMergeRequestDetailDto::iidIsSet() const
{
    return iidIsSet_;
}

void SimpleMergeRequestDetailDto::unsetiid()
{
    iidIsSet_ = false;
}

std::string SimpleMergeRequestDetailDto::getTitle() const
{
    return title_;
}

void SimpleMergeRequestDetailDto::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool SimpleMergeRequestDetailDto::titleIsSet() const
{
    return titleIsSet_;
}

void SimpleMergeRequestDetailDto::unsettitle()
{
    titleIsSet_ = false;
}

std::string SimpleMergeRequestDetailDto::getDescription() const
{
    return description_;
}

void SimpleMergeRequestDetailDto::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool SimpleMergeRequestDetailDto::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void SimpleMergeRequestDetailDto::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string SimpleMergeRequestDetailDto::getSourceBranch() const
{
    return sourceBranch_;
}

void SimpleMergeRequestDetailDto::setSourceBranch(const std::string& value)
{
    sourceBranch_ = value;
    sourceBranchIsSet_ = true;
}

bool SimpleMergeRequestDetailDto::sourceBranchIsSet() const
{
    return sourceBranchIsSet_;
}

void SimpleMergeRequestDetailDto::unsetsourceBranch()
{
    sourceBranchIsSet_ = false;
}

std::string SimpleMergeRequestDetailDto::getTargetBranch() const
{
    return targetBranch_;
}

void SimpleMergeRequestDetailDto::setTargetBranch(const std::string& value)
{
    targetBranch_ = value;
    targetBranchIsSet_ = true;
}

bool SimpleMergeRequestDetailDto::targetBranchIsSet() const
{
    return targetBranchIsSet_;
}

void SimpleMergeRequestDetailDto::unsettargetBranch()
{
    targetBranchIsSet_ = false;
}

std::string SimpleMergeRequestDetailDto::getState() const
{
    return state_;
}

void SimpleMergeRequestDetailDto::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool SimpleMergeRequestDetailDto::stateIsSet() const
{
    return stateIsSet_;
}

void SimpleMergeRequestDetailDto::unsetstate()
{
    stateIsSet_ = false;
}

std::string SimpleMergeRequestDetailDto::getCreatedAt() const
{
    return createdAt_;
}

void SimpleMergeRequestDetailDto::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool SimpleMergeRequestDetailDto::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void SimpleMergeRequestDetailDto::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string SimpleMergeRequestDetailDto::getReviewMode() const
{
    return reviewMode_;
}

void SimpleMergeRequestDetailDto::setReviewMode(const std::string& value)
{
    reviewMode_ = value;
    reviewModeIsSet_ = true;
}

bool SimpleMergeRequestDetailDto::reviewModeIsSet() const
{
    return reviewModeIsSet_;
}

void SimpleMergeRequestDetailDto::unsetreviewMode()
{
    reviewModeIsSet_ = false;
}

UserBasicDto SimpleMergeRequestDetailDto::getAuthor() const
{
    return author_;
}

void SimpleMergeRequestDetailDto::setAuthor(const UserBasicDto& value)
{
    author_ = value;
    authorIsSet_ = true;
}

bool SimpleMergeRequestDetailDto::authorIsSet() const
{
    return authorIsSet_;
}

void SimpleMergeRequestDetailDto::unsetauthor()
{
    authorIsSet_ = false;
}

std::string SimpleMergeRequestDetailDto::getMergeRequestType() const
{
    return mergeRequestType_;
}

void SimpleMergeRequestDetailDto::setMergeRequestType(const std::string& value)
{
    mergeRequestType_ = value;
    mergeRequestTypeIsSet_ = true;
}

bool SimpleMergeRequestDetailDto::mergeRequestTypeIsSet() const
{
    return mergeRequestTypeIsSet_;
}

void SimpleMergeRequestDetailDto::unsetmergeRequestType()
{
    mergeRequestTypeIsSet_ = false;
}

bool SimpleMergeRequestDetailDto::isModerationResult() const
{
    return moderationResult_;
}

void SimpleMergeRequestDetailDto::setModerationResult(bool value)
{
    moderationResult_ = value;
    moderationResultIsSet_ = true;
}

bool SimpleMergeRequestDetailDto::moderationResultIsSet() const
{
    return moderationResultIsSet_;
}

void SimpleMergeRequestDetailDto::unsetmoderationResult()
{
    moderationResultIsSet_ = false;
}

int64_t SimpleMergeRequestDetailDto::getModerationTime() const
{
    return moderationTime_;
}

void SimpleMergeRequestDetailDto::setModerationTime(int64_t value)
{
    moderationTime_ = value;
    moderationTimeIsSet_ = true;
}

bool SimpleMergeRequestDetailDto::moderationTimeIsSet() const
{
    return moderationTimeIsSet_;
}

void SimpleMergeRequestDetailDto::unsetmoderationTime()
{
    moderationTimeIsSet_ = false;
}

int32_t SimpleMergeRequestDetailDto::getModerationStatus() const
{
    return moderationStatus_;
}

void SimpleMergeRequestDetailDto::setModerationStatus(int32_t value)
{
    moderationStatus_ = value;
    moderationStatusIsSet_ = true;
}

bool SimpleMergeRequestDetailDto::moderationStatusIsSet() const
{
    return moderationStatusIsSet_;
}

void SimpleMergeRequestDetailDto::unsetmoderationStatus()
{
    moderationStatusIsSet_ = false;
}

bool SimpleMergeRequestDetailDto::isIsUseTempBranch() const
{
    return isUseTempBranch_;
}

void SimpleMergeRequestDetailDto::setIsUseTempBranch(bool value)
{
    isUseTempBranch_ = value;
    isUseTempBranchIsSet_ = true;
}

bool SimpleMergeRequestDetailDto::isUseTempBranchIsSet() const
{
    return isUseTempBranchIsSet_;
}

void SimpleMergeRequestDetailDto::unsetisUseTempBranch()
{
    isUseTempBranchIsSet_ = false;
}

}
}
}
}
}


