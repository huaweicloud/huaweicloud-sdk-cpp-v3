

#include "huaweicloud/lts/v2/model/ShowLogConvergeConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ShowLogConvergeConfigRequest::ShowLogConvergeConfigRequest()
{
    memberAccountId_ = "";
    memberAccountIdIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

ShowLogConvergeConfigRequest::~ShowLogConvergeConfigRequest() = default;

void ShowLogConvergeConfigRequest::validate()
{
}

web::json::value ShowLogConvergeConfigRequest::toJson() const
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
bool ShowLogConvergeConfigRequest::fromJson(const web::json::value& val)
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


std::string ShowLogConvergeConfigRequest::getMemberAccountId() const
{
    return memberAccountId_;
}

void ShowLogConvergeConfigRequest::setMemberAccountId(const std::string& value)
{
    memberAccountId_ = value;
    memberAccountIdIsSet_ = true;
}

bool ShowLogConvergeConfigRequest::memberAccountIdIsSet() const
{
    return memberAccountIdIsSet_;
}

void ShowLogConvergeConfigRequest::unsetmemberAccountId()
{
    memberAccountIdIsSet_ = false;
}

std::string ShowLogConvergeConfigRequest::getContentType() const
{
    return contentType_;
}

void ShowLogConvergeConfigRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ShowLogConvergeConfigRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ShowLogConvergeConfigRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


