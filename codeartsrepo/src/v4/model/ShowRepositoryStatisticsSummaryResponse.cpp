

#include "huaweicloud/codeartsrepo/v4/model/ShowRepositoryStatisticsSummaryResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowRepositoryStatisticsSummaryResponse::ShowRepositoryStatisticsSummaryResponse()
{
    branchesCount_ = 0;
    branchesCountIsSet_ = false;
    commitsCount_ = 0;
    commitsCountIsSet_ = false;
    membersCount_ = 0;
    membersCountIsSet_ = false;
    tagsCount_ = 0;
    tagsCountIsSet_ = false;
    mergeRequestCount_ = 0L;
    mergeRequestCountIsSet_ = false;
    noteCount_ = 0L;
    noteCountIsSet_ = false;
}

ShowRepositoryStatisticsSummaryResponse::~ShowRepositoryStatisticsSummaryResponse() = default;

void ShowRepositoryStatisticsSummaryResponse::validate()
{
}

web::json::value ShowRepositoryStatisticsSummaryResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(branchesCountIsSet_) {
        val[utility::conversions::to_string_t("branches_count")] = ModelBase::toJson(branchesCount_);
    }
    if(commitsCountIsSet_) {
        val[utility::conversions::to_string_t("commits_count")] = ModelBase::toJson(commitsCount_);
    }
    if(membersCountIsSet_) {
        val[utility::conversions::to_string_t("members_count")] = ModelBase::toJson(membersCount_);
    }
    if(tagsCountIsSet_) {
        val[utility::conversions::to_string_t("tags_count")] = ModelBase::toJson(tagsCount_);
    }
    if(mergeRequestCountIsSet_) {
        val[utility::conversions::to_string_t("merge_request_count")] = ModelBase::toJson(mergeRequestCount_);
    }
    if(noteCountIsSet_) {
        val[utility::conversions::to_string_t("note_count")] = ModelBase::toJson(noteCount_);
    }

    return val;
}
bool ShowRepositoryStatisticsSummaryResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("branches_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branches_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranchesCount(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("members_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("members_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMembersCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTagsCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("merge_request_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merge_request_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergeRequestCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("note_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("note_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNoteCount(refVal);
        }
    }
    return ok;
}


int32_t ShowRepositoryStatisticsSummaryResponse::getBranchesCount() const
{
    return branchesCount_;
}

void ShowRepositoryStatisticsSummaryResponse::setBranchesCount(int32_t value)
{
    branchesCount_ = value;
    branchesCountIsSet_ = true;
}

bool ShowRepositoryStatisticsSummaryResponse::branchesCountIsSet() const
{
    return branchesCountIsSet_;
}

void ShowRepositoryStatisticsSummaryResponse::unsetbranchesCount()
{
    branchesCountIsSet_ = false;
}

int32_t ShowRepositoryStatisticsSummaryResponse::getCommitsCount() const
{
    return commitsCount_;
}

void ShowRepositoryStatisticsSummaryResponse::setCommitsCount(int32_t value)
{
    commitsCount_ = value;
    commitsCountIsSet_ = true;
}

bool ShowRepositoryStatisticsSummaryResponse::commitsCountIsSet() const
{
    return commitsCountIsSet_;
}

void ShowRepositoryStatisticsSummaryResponse::unsetcommitsCount()
{
    commitsCountIsSet_ = false;
}

int32_t ShowRepositoryStatisticsSummaryResponse::getMembersCount() const
{
    return membersCount_;
}

void ShowRepositoryStatisticsSummaryResponse::setMembersCount(int32_t value)
{
    membersCount_ = value;
    membersCountIsSet_ = true;
}

bool ShowRepositoryStatisticsSummaryResponse::membersCountIsSet() const
{
    return membersCountIsSet_;
}

void ShowRepositoryStatisticsSummaryResponse::unsetmembersCount()
{
    membersCountIsSet_ = false;
}

int32_t ShowRepositoryStatisticsSummaryResponse::getTagsCount() const
{
    return tagsCount_;
}

void ShowRepositoryStatisticsSummaryResponse::setTagsCount(int32_t value)
{
    tagsCount_ = value;
    tagsCountIsSet_ = true;
}

bool ShowRepositoryStatisticsSummaryResponse::tagsCountIsSet() const
{
    return tagsCountIsSet_;
}

void ShowRepositoryStatisticsSummaryResponse::unsettagsCount()
{
    tagsCountIsSet_ = false;
}

int64_t ShowRepositoryStatisticsSummaryResponse::getMergeRequestCount() const
{
    return mergeRequestCount_;
}

void ShowRepositoryStatisticsSummaryResponse::setMergeRequestCount(int64_t value)
{
    mergeRequestCount_ = value;
    mergeRequestCountIsSet_ = true;
}

bool ShowRepositoryStatisticsSummaryResponse::mergeRequestCountIsSet() const
{
    return mergeRequestCountIsSet_;
}

void ShowRepositoryStatisticsSummaryResponse::unsetmergeRequestCount()
{
    mergeRequestCountIsSet_ = false;
}

int64_t ShowRepositoryStatisticsSummaryResponse::getNoteCount() const
{
    return noteCount_;
}

void ShowRepositoryStatisticsSummaryResponse::setNoteCount(int64_t value)
{
    noteCount_ = value;
    noteCountIsSet_ = true;
}

bool ShowRepositoryStatisticsSummaryResponse::noteCountIsSet() const
{
    return noteCountIsSet_;
}

void ShowRepositoryStatisticsSummaryResponse::unsetnoteCount()
{
    noteCountIsSet_ = false;
}

}
}
}
}
}


