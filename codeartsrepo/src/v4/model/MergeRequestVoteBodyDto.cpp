

#include "huaweicloud/codeartsrepo/v4/model/MergeRequestVoteBodyDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




MergeRequestVoteBodyDto::MergeRequestVoteBodyDto()
{
    score_ = 0;
    scoreIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
}

MergeRequestVoteBodyDto::~MergeRequestVoteBodyDto() = default;

void MergeRequestVoteBodyDto::validate()
{
}

web::json::value MergeRequestVoteBodyDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(scoreIsSet_) {
        val[utility::conversions::to_string_t("score")] = ModelBase::toJson(score_);
    }
    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }

    return val;
}
bool MergeRequestVoteBodyDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("score"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("score"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    return ok;
}


int32_t MergeRequestVoteBodyDto::getScore() const
{
    return score_;
}

void MergeRequestVoteBodyDto::setScore(int32_t value)
{
    score_ = value;
    scoreIsSet_ = true;
}

bool MergeRequestVoteBodyDto::scoreIsSet() const
{
    return scoreIsSet_;
}

void MergeRequestVoteBodyDto::unsetscore()
{
    scoreIsSet_ = false;
}

std::string MergeRequestVoteBodyDto::getAction() const
{
    return action_;
}

void MergeRequestVoteBodyDto::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool MergeRequestVoteBodyDto::actionIsSet() const
{
    return actionIsSet_;
}

void MergeRequestVoteBodyDto::unsetaction()
{
    actionIsSet_ = false;
}

}
}
}
}
}


