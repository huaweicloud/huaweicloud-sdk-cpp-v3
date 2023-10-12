

#include "huaweicloud/lts/v2/model/ShowMemberGroupAndStreamRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ShowMemberGroupAndStreamRequest::ShowMemberGroupAndStreamRequest()
{
    memberAccountId_ = "";
    memberAccountIdIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

ShowMemberGroupAndStreamRequest::~ShowMemberGroupAndStreamRequest() = default;

void ShowMemberGroupAndStreamRequest::validate()
{
}

web::json::value ShowMemberGroupAndStreamRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(memberAccountIdIsSet_) {
        val[utility::conversions::to_string_t("member_account_id")] = ModelBase::toJson(memberAccountId_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }

    return val;
}
bool ShowMemberGroupAndStreamRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("member_account_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("member_account_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMemberAccountId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Content-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Content-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentType(refVal);
        }
    }
    return ok;
}


std::string ShowMemberGroupAndStreamRequest::getMemberAccountId() const
{
    return memberAccountId_;
}

void ShowMemberGroupAndStreamRequest::setMemberAccountId(const std::string& value)
{
    memberAccountId_ = value;
    memberAccountIdIsSet_ = true;
}

bool ShowMemberGroupAndStreamRequest::memberAccountIdIsSet() const
{
    return memberAccountIdIsSet_;
}

void ShowMemberGroupAndStreamRequest::unsetmemberAccountId()
{
    memberAccountIdIsSet_ = false;
}

std::string ShowMemberGroupAndStreamRequest::getContentType() const
{
    return contentType_;
}

void ShowMemberGroupAndStreamRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ShowMemberGroupAndStreamRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ShowMemberGroupAndStreamRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


