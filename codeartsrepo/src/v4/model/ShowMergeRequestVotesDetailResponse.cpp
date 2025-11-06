

#include "huaweicloud/codeartsrepo/v4/model/ShowMergeRequestVotesDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowMergeRequestVotesDetailResponse::ShowMergeRequestVotesDetailResponse()
{
    scores_ = 0;
    scoresIsSet_ = false;
    mergeRequestId_ = 0;
    mergeRequestIdIsSet_ = false;
    mergeRequestCreator_ = "";
    mergeRequestCreatorIsSet_ = false;
    votesIsSet_ = false;
}

ShowMergeRequestVotesDetailResponse::~ShowMergeRequestVotesDetailResponse() = default;

void ShowMergeRequestVotesDetailResponse::validate()
{
}

web::json::value ShowMergeRequestVotesDetailResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(scoresIsSet_) {
        val[utility::conversions::to_string_t("scores")] = ModelBase::toJson(scores_);
    }
    if(mergeRequestIdIsSet_) {
        val[utility::conversions::to_string_t("merge_request_id")] = ModelBase::toJson(mergeRequestId_);
    }
    if(mergeRequestCreatorIsSet_) {
        val[utility::conversions::to_string_t("merge_request_creator")] = ModelBase::toJson(mergeRequestCreator_);
    }
    if(votesIsSet_) {
        val[utility::conversions::to_string_t("votes")] = ModelBase::toJson(votes_);
    }

    return val;
}
bool ShowMergeRequestVotesDetailResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("scores"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scores"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScores(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("merge_request_creator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merge_request_creator"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergeRequestCreator(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("votes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("votes"));
        if(!fieldValue.is_null())
        {
            std::vector<MergeRequestVotesDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVotes(refVal);
        }
    }
    return ok;
}


int32_t ShowMergeRequestVotesDetailResponse::getScores() const
{
    return scores_;
}

void ShowMergeRequestVotesDetailResponse::setScores(int32_t value)
{
    scores_ = value;
    scoresIsSet_ = true;
}

bool ShowMergeRequestVotesDetailResponse::scoresIsSet() const
{
    return scoresIsSet_;
}

void ShowMergeRequestVotesDetailResponse::unsetscores()
{
    scoresIsSet_ = false;
}

int32_t ShowMergeRequestVotesDetailResponse::getMergeRequestId() const
{
    return mergeRequestId_;
}

void ShowMergeRequestVotesDetailResponse::setMergeRequestId(int32_t value)
{
    mergeRequestId_ = value;
    mergeRequestIdIsSet_ = true;
}

bool ShowMergeRequestVotesDetailResponse::mergeRequestIdIsSet() const
{
    return mergeRequestIdIsSet_;
}

void ShowMergeRequestVotesDetailResponse::unsetmergeRequestId()
{
    mergeRequestIdIsSet_ = false;
}

std::string ShowMergeRequestVotesDetailResponse::getMergeRequestCreator() const
{
    return mergeRequestCreator_;
}

void ShowMergeRequestVotesDetailResponse::setMergeRequestCreator(const std::string& value)
{
    mergeRequestCreator_ = value;
    mergeRequestCreatorIsSet_ = true;
}

bool ShowMergeRequestVotesDetailResponse::mergeRequestCreatorIsSet() const
{
    return mergeRequestCreatorIsSet_;
}

void ShowMergeRequestVotesDetailResponse::unsetmergeRequestCreator()
{
    mergeRequestCreatorIsSet_ = false;
}

std::vector<MergeRequestVotesDto>& ShowMergeRequestVotesDetailResponse::getVotes()
{
    return votes_;
}

void ShowMergeRequestVotesDetailResponse::setVotes(const std::vector<MergeRequestVotesDto>& value)
{
    votes_ = value;
    votesIsSet_ = true;
}

bool ShowMergeRequestVotesDetailResponse::votesIsSet() const
{
    return votesIsSet_;
}

void ShowMergeRequestVotesDetailResponse::unsetvotes()
{
    votesIsSet_ = false;
}

}
}
}
}
}


