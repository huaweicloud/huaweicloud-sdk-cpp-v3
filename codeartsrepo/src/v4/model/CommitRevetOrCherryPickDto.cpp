

#include "huaweicloud/codeartsrepo/v4/model/CommitRevetOrCherryPickDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




CommitRevetOrCherryPickDto::CommitRevetOrCherryPickDto()
{
    branch_ = "";
    branchIsSet_ = false;
    withNewMergeRequest_ = false;
    withNewMergeRequestIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

CommitRevetOrCherryPickDto::~CommitRevetOrCherryPickDto() = default;

void CommitRevetOrCherryPickDto::validate()
{
}

web::json::value CommitRevetOrCherryPickDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(branchIsSet_) {
        val[utility::conversions::to_string_t("branch")] = ModelBase::toJson(branch_);
    }
    if(withNewMergeRequestIsSet_) {
        val[utility::conversions::to_string_t("with_new_merge_request")] = ModelBase::toJson(withNewMergeRequest_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }

    return val;
}
bool CommitRevetOrCherryPickDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("with_new_merge_request"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("with_new_merge_request"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWithNewMergeRequest(refVal);
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
    return ok;
}


std::string CommitRevetOrCherryPickDto::getBranch() const
{
    return branch_;
}

void CommitRevetOrCherryPickDto::setBranch(const std::string& value)
{
    branch_ = value;
    branchIsSet_ = true;
}

bool CommitRevetOrCherryPickDto::branchIsSet() const
{
    return branchIsSet_;
}

void CommitRevetOrCherryPickDto::unsetbranch()
{
    branchIsSet_ = false;
}

bool CommitRevetOrCherryPickDto::isWithNewMergeRequest() const
{
    return withNewMergeRequest_;
}

void CommitRevetOrCherryPickDto::setWithNewMergeRequest(bool value)
{
    withNewMergeRequest_ = value;
    withNewMergeRequestIsSet_ = true;
}

bool CommitRevetOrCherryPickDto::withNewMergeRequestIsSet() const
{
    return withNewMergeRequestIsSet_;
}

void CommitRevetOrCherryPickDto::unsetwithNewMergeRequest()
{
    withNewMergeRequestIsSet_ = false;
}

std::string CommitRevetOrCherryPickDto::getMessage() const
{
    return message_;
}

void CommitRevetOrCherryPickDto::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool CommitRevetOrCherryPickDto::messageIsSet() const
{
    return messageIsSet_;
}

void CommitRevetOrCherryPickDto::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


