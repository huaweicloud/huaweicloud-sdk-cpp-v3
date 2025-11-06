

#include "huaweicloud/codeartsrepo/v4/model/MrCherryRevertDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




MrCherryRevertDto::MrCherryRevertDto()
{
    branch_ = "";
    branchIsSet_ = false;
    withNewMergeRequest_ = false;
    withNewMergeRequestIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

MrCherryRevertDto::~MrCherryRevertDto() = default;

void MrCherryRevertDto::validate()
{
}

web::json::value MrCherryRevertDto::toJson() const
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
bool MrCherryRevertDto::fromJson(const web::json::value& val)
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


std::string MrCherryRevertDto::getBranch() const
{
    return branch_;
}

void MrCherryRevertDto::setBranch(const std::string& value)
{
    branch_ = value;
    branchIsSet_ = true;
}

bool MrCherryRevertDto::branchIsSet() const
{
    return branchIsSet_;
}

void MrCherryRevertDto::unsetbranch()
{
    branchIsSet_ = false;
}

bool MrCherryRevertDto::isWithNewMergeRequest() const
{
    return withNewMergeRequest_;
}

void MrCherryRevertDto::setWithNewMergeRequest(bool value)
{
    withNewMergeRequest_ = value;
    withNewMergeRequestIsSet_ = true;
}

bool MrCherryRevertDto::withNewMergeRequestIsSet() const
{
    return withNewMergeRequestIsSet_;
}

void MrCherryRevertDto::unsetwithNewMergeRequest()
{
    withNewMergeRequestIsSet_ = false;
}

std::string MrCherryRevertDto::getMessage() const
{
    return message_;
}

void MrCherryRevertDto::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool MrCherryRevertDto::messageIsSet() const
{
    return messageIsSet_;
}

void MrCherryRevertDto::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


