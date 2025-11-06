

#include "huaweicloud/codeartsrepo/v4/model/FailureForBatchCreateGroupMembersDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




FailureForBatchCreateGroupMembersDto::FailureForBatchCreateGroupMembersDto()
{
    iamId_ = "";
    iamIdIsSet_ = false;
    messageIsSet_ = false;
}

FailureForBatchCreateGroupMembersDto::~FailureForBatchCreateGroupMembersDto() = default;

void FailureForBatchCreateGroupMembersDto::validate()
{
}

web::json::value FailureForBatchCreateGroupMembersDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(iamIdIsSet_) {
        val[utility::conversions::to_string_t("iam_id")] = ModelBase::toJson(iamId_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }

    return val;
}
bool FailureForBatchCreateGroupMembersDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("iam_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iam_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIamId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    return ok;
}


std::string FailureForBatchCreateGroupMembersDto::getIamId() const
{
    return iamId_;
}

void FailureForBatchCreateGroupMembersDto::setIamId(const std::string& value)
{
    iamId_ = value;
    iamIdIsSet_ = true;
}

bool FailureForBatchCreateGroupMembersDto::iamIdIsSet() const
{
    return iamIdIsSet_;
}

void FailureForBatchCreateGroupMembersDto::unsetiamId()
{
    iamIdIsSet_ = false;
}

std::vector<std::string>& FailureForBatchCreateGroupMembersDto::getMessage()
{
    return message_;
}

void FailureForBatchCreateGroupMembersDto::setMessage(const std::vector<std::string>& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool FailureForBatchCreateGroupMembersDto::messageIsSet() const
{
    return messageIsSet_;
}

void FailureForBatchCreateGroupMembersDto::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


