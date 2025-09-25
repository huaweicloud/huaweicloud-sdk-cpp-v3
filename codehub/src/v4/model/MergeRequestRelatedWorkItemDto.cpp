

#include "huaweicloud/codehub/v4/model/MergeRequestRelatedWorkItemDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




MergeRequestRelatedWorkItemDto::MergeRequestRelatedWorkItemDto()
{
    id_ = 0;
    idIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
    repoId_ = 0;
    repoIdIsSet_ = false;
    mergeRequestId_ = 0;
    mergeRequestIdIsSet_ = false;
    targetBranch_ = "";
    targetBranchIsSet_ = false;
    sourceBranch_ = "";
    sourceBranchIsSet_ = false;
    mergeRequestTitle_ = "";
    mergeRequestTitleIsSet_ = false;
    mergeRequestUrl_ = "";
    mergeRequestUrlIsSet_ = false;
    mergeRequestState_ = "";
    mergeRequestStateIsSet_ = false;
    relatedId_ = "";
    relatedIdIsSet_ = false;
    relatedTitle_ = "";
    relatedTitleIsSet_ = false;
    relatedUrl_ = "";
    relatedUrlIsSet_ = false;
    result_ = 0;
    resultIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    createAt_ = "";
    createAtIsSet_ = false;
    updateAt_ = "";
    updateAtIsSet_ = false;
    subject_ = "";
    subjectIsSet_ = false;
    trackerIsSet_ = false;
    statusIsSet_ = false;
}

MergeRequestRelatedWorkItemDto::~MergeRequestRelatedWorkItemDto() = default;

void MergeRequestRelatedWorkItemDto::validate()
{
}

web::json::value MergeRequestRelatedWorkItemDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(repoIdIsSet_) {
        val[utility::conversions::to_string_t("repo_id")] = ModelBase::toJson(repoId_);
    }
    if(mergeRequestIdIsSet_) {
        val[utility::conversions::to_string_t("merge_request_id")] = ModelBase::toJson(mergeRequestId_);
    }
    if(targetBranchIsSet_) {
        val[utility::conversions::to_string_t("target_branch")] = ModelBase::toJson(targetBranch_);
    }
    if(sourceBranchIsSet_) {
        val[utility::conversions::to_string_t("source_branch")] = ModelBase::toJson(sourceBranch_);
    }
    if(mergeRequestTitleIsSet_) {
        val[utility::conversions::to_string_t("merge_request_title")] = ModelBase::toJson(mergeRequestTitle_);
    }
    if(mergeRequestUrlIsSet_) {
        val[utility::conversions::to_string_t("merge_request_url")] = ModelBase::toJson(mergeRequestUrl_);
    }
    if(mergeRequestStateIsSet_) {
        val[utility::conversions::to_string_t("merge_request_state")] = ModelBase::toJson(mergeRequestState_);
    }
    if(relatedIdIsSet_) {
        val[utility::conversions::to_string_t("related_id")] = ModelBase::toJson(relatedId_);
    }
    if(relatedTitleIsSet_) {
        val[utility::conversions::to_string_t("related_title")] = ModelBase::toJson(relatedTitle_);
    }
    if(relatedUrlIsSet_) {
        val[utility::conversions::to_string_t("related_url")] = ModelBase::toJson(relatedUrl_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(createAtIsSet_) {
        val[utility::conversions::to_string_t("create_at")] = ModelBase::toJson(createAt_);
    }
    if(updateAtIsSet_) {
        val[utility::conversions::to_string_t("update_at")] = ModelBase::toJson(updateAt_);
    }
    if(subjectIsSet_) {
        val[utility::conversions::to_string_t("subject")] = ModelBase::toJson(subject_);
    }
    if(trackerIsSet_) {
        val[utility::conversions::to_string_t("tracker")] = ModelBase::toJson(tracker_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool MergeRequestRelatedWorkItemDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repo_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repo_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepoId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("merge_request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merge_request_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergeRequestId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("source_branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_branch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceBranch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("merge_request_title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merge_request_title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergeRequestTitle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("merge_request_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merge_request_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergeRequestUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("merge_request_state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merge_request_state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergeRequestState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("related_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("related_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRelatedId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("related_title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("related_title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRelatedTitle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("related_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("related_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRelatedUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subject"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subject"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubject(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tracker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tracker"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTracker(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


int32_t MergeRequestRelatedWorkItemDto::getId() const
{
    return id_;
}

void MergeRequestRelatedWorkItemDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool MergeRequestRelatedWorkItemDto::idIsSet() const
{
    return idIsSet_;
}

void MergeRequestRelatedWorkItemDto::unsetid()
{
    idIsSet_ = false;
}

std::string MergeRequestRelatedWorkItemDto::getUserId() const
{
    return userId_;
}

void MergeRequestRelatedWorkItemDto::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool MergeRequestRelatedWorkItemDto::userIdIsSet() const
{
    return userIdIsSet_;
}

void MergeRequestRelatedWorkItemDto::unsetuserId()
{
    userIdIsSet_ = false;
}

int32_t MergeRequestRelatedWorkItemDto::getRepoId() const
{
    return repoId_;
}

void MergeRequestRelatedWorkItemDto::setRepoId(int32_t value)
{
    repoId_ = value;
    repoIdIsSet_ = true;
}

bool MergeRequestRelatedWorkItemDto::repoIdIsSet() const
{
    return repoIdIsSet_;
}

void MergeRequestRelatedWorkItemDto::unsetrepoId()
{
    repoIdIsSet_ = false;
}

int32_t MergeRequestRelatedWorkItemDto::getMergeRequestId() const
{
    return mergeRequestId_;
}

void MergeRequestRelatedWorkItemDto::setMergeRequestId(int32_t value)
{
    mergeRequestId_ = value;
    mergeRequestIdIsSet_ = true;
}

bool MergeRequestRelatedWorkItemDto::mergeRequestIdIsSet() const
{
    return mergeRequestIdIsSet_;
}

void MergeRequestRelatedWorkItemDto::unsetmergeRequestId()
{
    mergeRequestIdIsSet_ = false;
}

std::string MergeRequestRelatedWorkItemDto::getTargetBranch() const
{
    return targetBranch_;
}

void MergeRequestRelatedWorkItemDto::setTargetBranch(const std::string& value)
{
    targetBranch_ = value;
    targetBranchIsSet_ = true;
}

bool MergeRequestRelatedWorkItemDto::targetBranchIsSet() const
{
    return targetBranchIsSet_;
}

void MergeRequestRelatedWorkItemDto::unsettargetBranch()
{
    targetBranchIsSet_ = false;
}

std::string MergeRequestRelatedWorkItemDto::getSourceBranch() const
{
    return sourceBranch_;
}

void MergeRequestRelatedWorkItemDto::setSourceBranch(const std::string& value)
{
    sourceBranch_ = value;
    sourceBranchIsSet_ = true;
}

bool MergeRequestRelatedWorkItemDto::sourceBranchIsSet() const
{
    return sourceBranchIsSet_;
}

void MergeRequestRelatedWorkItemDto::unsetsourceBranch()
{
    sourceBranchIsSet_ = false;
}

std::string MergeRequestRelatedWorkItemDto::getMergeRequestTitle() const
{
    return mergeRequestTitle_;
}

void MergeRequestRelatedWorkItemDto::setMergeRequestTitle(const std::string& value)
{
    mergeRequestTitle_ = value;
    mergeRequestTitleIsSet_ = true;
}

bool MergeRequestRelatedWorkItemDto::mergeRequestTitleIsSet() const
{
    return mergeRequestTitleIsSet_;
}

void MergeRequestRelatedWorkItemDto::unsetmergeRequestTitle()
{
    mergeRequestTitleIsSet_ = false;
}

std::string MergeRequestRelatedWorkItemDto::getMergeRequestUrl() const
{
    return mergeRequestUrl_;
}

void MergeRequestRelatedWorkItemDto::setMergeRequestUrl(const std::string& value)
{
    mergeRequestUrl_ = value;
    mergeRequestUrlIsSet_ = true;
}

bool MergeRequestRelatedWorkItemDto::mergeRequestUrlIsSet() const
{
    return mergeRequestUrlIsSet_;
}

void MergeRequestRelatedWorkItemDto::unsetmergeRequestUrl()
{
    mergeRequestUrlIsSet_ = false;
}

std::string MergeRequestRelatedWorkItemDto::getMergeRequestState() const
{
    return mergeRequestState_;
}

void MergeRequestRelatedWorkItemDto::setMergeRequestState(const std::string& value)
{
    mergeRequestState_ = value;
    mergeRequestStateIsSet_ = true;
}

bool MergeRequestRelatedWorkItemDto::mergeRequestStateIsSet() const
{
    return mergeRequestStateIsSet_;
}

void MergeRequestRelatedWorkItemDto::unsetmergeRequestState()
{
    mergeRequestStateIsSet_ = false;
}

std::string MergeRequestRelatedWorkItemDto::getRelatedId() const
{
    return relatedId_;
}

void MergeRequestRelatedWorkItemDto::setRelatedId(const std::string& value)
{
    relatedId_ = value;
    relatedIdIsSet_ = true;
}

bool MergeRequestRelatedWorkItemDto::relatedIdIsSet() const
{
    return relatedIdIsSet_;
}

void MergeRequestRelatedWorkItemDto::unsetrelatedId()
{
    relatedIdIsSet_ = false;
}

std::string MergeRequestRelatedWorkItemDto::getRelatedTitle() const
{
    return relatedTitle_;
}

void MergeRequestRelatedWorkItemDto::setRelatedTitle(const std::string& value)
{
    relatedTitle_ = value;
    relatedTitleIsSet_ = true;
}

bool MergeRequestRelatedWorkItemDto::relatedTitleIsSet() const
{
    return relatedTitleIsSet_;
}

void MergeRequestRelatedWorkItemDto::unsetrelatedTitle()
{
    relatedTitleIsSet_ = false;
}

std::string MergeRequestRelatedWorkItemDto::getRelatedUrl() const
{
    return relatedUrl_;
}

void MergeRequestRelatedWorkItemDto::setRelatedUrl(const std::string& value)
{
    relatedUrl_ = value;
    relatedUrlIsSet_ = true;
}

bool MergeRequestRelatedWorkItemDto::relatedUrlIsSet() const
{
    return relatedUrlIsSet_;
}

void MergeRequestRelatedWorkItemDto::unsetrelatedUrl()
{
    relatedUrlIsSet_ = false;
}

int32_t MergeRequestRelatedWorkItemDto::getResult() const
{
    return result_;
}

void MergeRequestRelatedWorkItemDto::setResult(int32_t value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool MergeRequestRelatedWorkItemDto::resultIsSet() const
{
    return resultIsSet_;
}

void MergeRequestRelatedWorkItemDto::unsetresult()
{
    resultIsSet_ = false;
}

std::string MergeRequestRelatedWorkItemDto::getMessage() const
{
    return message_;
}

void MergeRequestRelatedWorkItemDto::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool MergeRequestRelatedWorkItemDto::messageIsSet() const
{
    return messageIsSet_;
}

void MergeRequestRelatedWorkItemDto::unsetmessage()
{
    messageIsSet_ = false;
}

std::string MergeRequestRelatedWorkItemDto::getCreateAt() const
{
    return createAt_;
}

void MergeRequestRelatedWorkItemDto::setCreateAt(const std::string& value)
{
    createAt_ = value;
    createAtIsSet_ = true;
}

bool MergeRequestRelatedWorkItemDto::createAtIsSet() const
{
    return createAtIsSet_;
}

void MergeRequestRelatedWorkItemDto::unsetcreateAt()
{
    createAtIsSet_ = false;
}

std::string MergeRequestRelatedWorkItemDto::getUpdateAt() const
{
    return updateAt_;
}

void MergeRequestRelatedWorkItemDto::setUpdateAt(const std::string& value)
{
    updateAt_ = value;
    updateAtIsSet_ = true;
}

bool MergeRequestRelatedWorkItemDto::updateAtIsSet() const
{
    return updateAtIsSet_;
}

void MergeRequestRelatedWorkItemDto::unsetupdateAt()
{
    updateAtIsSet_ = false;
}

std::string MergeRequestRelatedWorkItemDto::getSubject() const
{
    return subject_;
}

void MergeRequestRelatedWorkItemDto::setSubject(const std::string& value)
{
    subject_ = value;
    subjectIsSet_ = true;
}

bool MergeRequestRelatedWorkItemDto::subjectIsSet() const
{
    return subjectIsSet_;
}

void MergeRequestRelatedWorkItemDto::unsetsubject()
{
    subjectIsSet_ = false;
}

Object MergeRequestRelatedWorkItemDto::getTracker() const
{
    return tracker_;
}

void MergeRequestRelatedWorkItemDto::setTracker(const Object& value)
{
    tracker_ = value;
    trackerIsSet_ = true;
}

bool MergeRequestRelatedWorkItemDto::trackerIsSet() const
{
    return trackerIsSet_;
}

void MergeRequestRelatedWorkItemDto::unsettracker()
{
    trackerIsSet_ = false;
}

Object MergeRequestRelatedWorkItemDto::getStatus() const
{
    return status_;
}

void MergeRequestRelatedWorkItemDto::setStatus(const Object& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool MergeRequestRelatedWorkItemDto::statusIsSet() const
{
    return statusIsSet_;
}

void MergeRequestRelatedWorkItemDto::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


