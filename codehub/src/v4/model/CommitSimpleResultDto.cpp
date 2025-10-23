

#include "huaweicloud/codehub/v4/model/CommitSimpleResultDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




CommitSimpleResultDto::CommitSimpleResultDto()
{
    commitsIsSet_ = false;
}

CommitSimpleResultDto::~CommitSimpleResultDto() = default;

void CommitSimpleResultDto::validate()
{
}

web::json::value CommitSimpleResultDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(commitsIsSet_) {
        val[utility::conversions::to_string_t("commits")] = ModelBase::toJson(commits_);
    }

    return val;
}
bool CommitSimpleResultDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("commits"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commits"));
        if(!fieldValue.is_null())
        {
            std::vector<CommitDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommits(refVal);
        }
    }
    return ok;
}


std::vector<CommitDto>& CommitSimpleResultDto::getCommits()
{
    return commits_;
}

void CommitSimpleResultDto::setCommits(const std::vector<CommitDto>& value)
{
    commits_ = value;
    commitsIsSet_ = true;
}

bool CommitSimpleResultDto::commitsIsSet() const
{
    return commitsIsSet_;
}

void CommitSimpleResultDto::unsetcommits()
{
    commitsIsSet_ = false;
}

}
}
}
}
}


