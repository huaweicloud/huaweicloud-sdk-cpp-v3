

#include "huaweicloud/codehub/v4/model/MergeMergeRequestBodyDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




MergeMergeRequestBodyDto::MergeMergeRequestBodyDto()
{
    squashCommitMessage_ = "";
    squashCommitMessageIsSet_ = false;
    squash_ = false;
    squashIsSet_ = false;
    forceMerge_ = false;
    forceMergeIsSet_ = false;
}

MergeMergeRequestBodyDto::~MergeMergeRequestBodyDto() = default;

void MergeMergeRequestBodyDto::validate()
{
}

web::json::value MergeMergeRequestBodyDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(squashCommitMessageIsSet_) {
        val[utility::conversions::to_string_t("squash_commit_message")] = ModelBase::toJson(squashCommitMessage_);
    }
    if(squashIsSet_) {
        val[utility::conversions::to_string_t("squash")] = ModelBase::toJson(squash_);
    }
    if(forceMergeIsSet_) {
        val[utility::conversions::to_string_t("force_merge")] = ModelBase::toJson(forceMerge_);
    }

    return val;
}
bool MergeMergeRequestBodyDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("squash_commit_message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("squash_commit_message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSquashCommitMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("squash"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("squash"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSquash(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("force_merge"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("force_merge"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setForceMerge(refVal);
        }
    }
    return ok;
}


std::string MergeMergeRequestBodyDto::getSquashCommitMessage() const
{
    return squashCommitMessage_;
}

void MergeMergeRequestBodyDto::setSquashCommitMessage(const std::string& value)
{
    squashCommitMessage_ = value;
    squashCommitMessageIsSet_ = true;
}

bool MergeMergeRequestBodyDto::squashCommitMessageIsSet() const
{
    return squashCommitMessageIsSet_;
}

void MergeMergeRequestBodyDto::unsetsquashCommitMessage()
{
    squashCommitMessageIsSet_ = false;
}

bool MergeMergeRequestBodyDto::isSquash() const
{
    return squash_;
}

void MergeMergeRequestBodyDto::setSquash(bool value)
{
    squash_ = value;
    squashIsSet_ = true;
}

bool MergeMergeRequestBodyDto::squashIsSet() const
{
    return squashIsSet_;
}

void MergeMergeRequestBodyDto::unsetsquash()
{
    squashIsSet_ = false;
}

bool MergeMergeRequestBodyDto::isForceMerge() const
{
    return forceMerge_;
}

void MergeMergeRequestBodyDto::setForceMerge(bool value)
{
    forceMerge_ = value;
    forceMergeIsSet_ = true;
}

bool MergeMergeRequestBodyDto::forceMergeIsSet() const
{
    return forceMergeIsSet_;
}

void MergeMergeRequestBodyDto::unsetforceMerge()
{
    forceMergeIsSet_ = false;
}

}
}
}
}
}


