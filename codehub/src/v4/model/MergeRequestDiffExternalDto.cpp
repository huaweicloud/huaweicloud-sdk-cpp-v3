

#include "huaweicloud/codehub/v4/model/MergeRequestDiffExternalDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




MergeRequestDiffExternalDto::MergeRequestDiffExternalDto()
{
    id_ = 0;
    idIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    mergeRequestId_ = 0;
    mergeRequestIdIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
    baseCommitSha_ = "";
    baseCommitShaIsSet_ = false;
    realSize_ = "";
    realSizeIsSet_ = false;
    headCommitSha_ = "";
    headCommitShaIsSet_ = false;
    startCommitSha_ = "";
    startCommitShaIsSet_ = false;
    commitsCount_ = 0;
    commitsCountIsSet_ = false;
    externalDiff_ = "";
    externalDiffIsSet_ = false;
    externalDiffStore_ = 0;
    externalDiffStoreIsSet_ = false;
    storedExternally_ = false;
    storedExternallyIsSet_ = false;
    addedLines_ = 0;
    addedLinesIsSet_ = false;
    removedLines_ = 0;
    removedLinesIsSet_ = false;
}

MergeRequestDiffExternalDto::~MergeRequestDiffExternalDto() = default;

void MergeRequestDiffExternalDto::validate()
{
}

web::json::value MergeRequestDiffExternalDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(mergeRequestIdIsSet_) {
        val[utility::conversions::to_string_t("merge_request_id")] = ModelBase::toJson(mergeRequestId_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(baseCommitShaIsSet_) {
        val[utility::conversions::to_string_t("base_commit_sha")] = ModelBase::toJson(baseCommitSha_);
    }
    if(realSizeIsSet_) {
        val[utility::conversions::to_string_t("real_size")] = ModelBase::toJson(realSize_);
    }
    if(headCommitShaIsSet_) {
        val[utility::conversions::to_string_t("head_commit_sha")] = ModelBase::toJson(headCommitSha_);
    }
    if(startCommitShaIsSet_) {
        val[utility::conversions::to_string_t("start_commit_sha")] = ModelBase::toJson(startCommitSha_);
    }
    if(commitsCountIsSet_) {
        val[utility::conversions::to_string_t("commits_count")] = ModelBase::toJson(commitsCount_);
    }
    if(externalDiffIsSet_) {
        val[utility::conversions::to_string_t("external_diff")] = ModelBase::toJson(externalDiff_);
    }
    if(externalDiffStoreIsSet_) {
        val[utility::conversions::to_string_t("external_diff_store")] = ModelBase::toJson(externalDiffStore_);
    }
    if(storedExternallyIsSet_) {
        val[utility::conversions::to_string_t("stored_externally")] = ModelBase::toJson(storedExternally_);
    }
    if(addedLinesIsSet_) {
        val[utility::conversions::to_string_t("added_lines")] = ModelBase::toJson(addedLines_);
    }
    if(removedLinesIsSet_) {
        val[utility::conversions::to_string_t("removed_lines")] = ModelBase::toJson(removedLines_);
    }

    return val;
}
bool MergeRequestDiffExternalDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("base_commit_sha"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("base_commit_sha"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBaseCommitSha(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("real_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("real_size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRealSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("head_commit_sha"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("head_commit_sha"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHeadCommitSha(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_commit_sha"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_commit_sha"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartCommitSha(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("commits_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commits_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommitsCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("external_diff"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("external_diff"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExternalDiff(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("external_diff_store"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("external_diff_store"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExternalDiffStore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stored_externally"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stored_externally"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStoredExternally(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("added_lines"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("added_lines"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddedLines(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("removed_lines"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("removed_lines"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemovedLines(refVal);
        }
    }
    return ok;
}


int32_t MergeRequestDiffExternalDto::getId() const
{
    return id_;
}

void MergeRequestDiffExternalDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool MergeRequestDiffExternalDto::idIsSet() const
{
    return idIsSet_;
}

void MergeRequestDiffExternalDto::unsetid()
{
    idIsSet_ = false;
}

std::string MergeRequestDiffExternalDto::getState() const
{
    return state_;
}

void MergeRequestDiffExternalDto::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool MergeRequestDiffExternalDto::stateIsSet() const
{
    return stateIsSet_;
}

void MergeRequestDiffExternalDto::unsetstate()
{
    stateIsSet_ = false;
}

int32_t MergeRequestDiffExternalDto::getMergeRequestId() const
{
    return mergeRequestId_;
}

void MergeRequestDiffExternalDto::setMergeRequestId(int32_t value)
{
    mergeRequestId_ = value;
    mergeRequestIdIsSet_ = true;
}

bool MergeRequestDiffExternalDto::mergeRequestIdIsSet() const
{
    return mergeRequestIdIsSet_;
}

void MergeRequestDiffExternalDto::unsetmergeRequestId()
{
    mergeRequestIdIsSet_ = false;
}

std::string MergeRequestDiffExternalDto::getCreatedAt() const
{
    return createdAt_;
}

void MergeRequestDiffExternalDto::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool MergeRequestDiffExternalDto::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void MergeRequestDiffExternalDto::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string MergeRequestDiffExternalDto::getUpdatedAt() const
{
    return updatedAt_;
}

void MergeRequestDiffExternalDto::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool MergeRequestDiffExternalDto::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void MergeRequestDiffExternalDto::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string MergeRequestDiffExternalDto::getBaseCommitSha() const
{
    return baseCommitSha_;
}

void MergeRequestDiffExternalDto::setBaseCommitSha(const std::string& value)
{
    baseCommitSha_ = value;
    baseCommitShaIsSet_ = true;
}

bool MergeRequestDiffExternalDto::baseCommitShaIsSet() const
{
    return baseCommitShaIsSet_;
}

void MergeRequestDiffExternalDto::unsetbaseCommitSha()
{
    baseCommitShaIsSet_ = false;
}

std::string MergeRequestDiffExternalDto::getRealSize() const
{
    return realSize_;
}

void MergeRequestDiffExternalDto::setRealSize(const std::string& value)
{
    realSize_ = value;
    realSizeIsSet_ = true;
}

bool MergeRequestDiffExternalDto::realSizeIsSet() const
{
    return realSizeIsSet_;
}

void MergeRequestDiffExternalDto::unsetrealSize()
{
    realSizeIsSet_ = false;
}

std::string MergeRequestDiffExternalDto::getHeadCommitSha() const
{
    return headCommitSha_;
}

void MergeRequestDiffExternalDto::setHeadCommitSha(const std::string& value)
{
    headCommitSha_ = value;
    headCommitShaIsSet_ = true;
}

bool MergeRequestDiffExternalDto::headCommitShaIsSet() const
{
    return headCommitShaIsSet_;
}

void MergeRequestDiffExternalDto::unsetheadCommitSha()
{
    headCommitShaIsSet_ = false;
}

std::string MergeRequestDiffExternalDto::getStartCommitSha() const
{
    return startCommitSha_;
}

void MergeRequestDiffExternalDto::setStartCommitSha(const std::string& value)
{
    startCommitSha_ = value;
    startCommitShaIsSet_ = true;
}

bool MergeRequestDiffExternalDto::startCommitShaIsSet() const
{
    return startCommitShaIsSet_;
}

void MergeRequestDiffExternalDto::unsetstartCommitSha()
{
    startCommitShaIsSet_ = false;
}

int32_t MergeRequestDiffExternalDto::getCommitsCount() const
{
    return commitsCount_;
}

void MergeRequestDiffExternalDto::setCommitsCount(int32_t value)
{
    commitsCount_ = value;
    commitsCountIsSet_ = true;
}

bool MergeRequestDiffExternalDto::commitsCountIsSet() const
{
    return commitsCountIsSet_;
}

void MergeRequestDiffExternalDto::unsetcommitsCount()
{
    commitsCountIsSet_ = false;
}

std::string MergeRequestDiffExternalDto::getExternalDiff() const
{
    return externalDiff_;
}

void MergeRequestDiffExternalDto::setExternalDiff(const std::string& value)
{
    externalDiff_ = value;
    externalDiffIsSet_ = true;
}

bool MergeRequestDiffExternalDto::externalDiffIsSet() const
{
    return externalDiffIsSet_;
}

void MergeRequestDiffExternalDto::unsetexternalDiff()
{
    externalDiffIsSet_ = false;
}

int32_t MergeRequestDiffExternalDto::getExternalDiffStore() const
{
    return externalDiffStore_;
}

void MergeRequestDiffExternalDto::setExternalDiffStore(int32_t value)
{
    externalDiffStore_ = value;
    externalDiffStoreIsSet_ = true;
}

bool MergeRequestDiffExternalDto::externalDiffStoreIsSet() const
{
    return externalDiffStoreIsSet_;
}

void MergeRequestDiffExternalDto::unsetexternalDiffStore()
{
    externalDiffStoreIsSet_ = false;
}

bool MergeRequestDiffExternalDto::isStoredExternally() const
{
    return storedExternally_;
}

void MergeRequestDiffExternalDto::setStoredExternally(bool value)
{
    storedExternally_ = value;
    storedExternallyIsSet_ = true;
}

bool MergeRequestDiffExternalDto::storedExternallyIsSet() const
{
    return storedExternallyIsSet_;
}

void MergeRequestDiffExternalDto::unsetstoredExternally()
{
    storedExternallyIsSet_ = false;
}

int32_t MergeRequestDiffExternalDto::getAddedLines() const
{
    return addedLines_;
}

void MergeRequestDiffExternalDto::setAddedLines(int32_t value)
{
    addedLines_ = value;
    addedLinesIsSet_ = true;
}

bool MergeRequestDiffExternalDto::addedLinesIsSet() const
{
    return addedLinesIsSet_;
}

void MergeRequestDiffExternalDto::unsetaddedLines()
{
    addedLinesIsSet_ = false;
}

int32_t MergeRequestDiffExternalDto::getRemovedLines() const
{
    return removedLines_;
}

void MergeRequestDiffExternalDto::setRemovedLines(int32_t value)
{
    removedLines_ = value;
    removedLinesIsSet_ = true;
}

bool MergeRequestDiffExternalDto::removedLinesIsSet() const
{
    return removedLinesIsSet_;
}

void MergeRequestDiffExternalDto::unsetremovedLines()
{
    removedLinesIsSet_ = false;
}

}
}
}
}
}


