

#include "huaweicloud/cbr/v1/model/ShowMemberDetailRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ShowMemberDetailRequest::ShowMemberDetailRequest()
{
    backupId_ = "";
    backupIdIsSet_ = false;
    memberId_ = "";
    memberIdIsSet_ = false;
}

ShowMemberDetailRequest::~ShowMemberDetailRequest() = default;

void ShowMemberDetailRequest::validate()
{
}

web::json::value ShowMemberDetailRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(backupIdIsSet_) {
        val[utility::conversions::to_string_t("backup_id")] = ModelBase::toJson(backupId_);
    }
    if(memberIdIsSet_) {
        val[utility::conversions::to_string_t("member_id")] = ModelBase::toJson(memberId_);
    }

    return val;
}

bool ShowMemberDetailRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("backup_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("member_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("member_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMemberId(refVal);
        }
    }
    return ok;
}


std::string ShowMemberDetailRequest::getBackupId() const
{
    return backupId_;
}

void ShowMemberDetailRequest::setBackupId(const std::string& value)
{
    backupId_ = value;
    backupIdIsSet_ = true;
}

bool ShowMemberDetailRequest::backupIdIsSet() const
{
    return backupIdIsSet_;
}

void ShowMemberDetailRequest::unsetbackupId()
{
    backupIdIsSet_ = false;
}

std::string ShowMemberDetailRequest::getMemberId() const
{
    return memberId_;
}

void ShowMemberDetailRequest::setMemberId(const std::string& value)
{
    memberId_ = value;
    memberIdIsSet_ = true;
}

bool ShowMemberDetailRequest::memberIdIsSet() const
{
    return memberIdIsSet_;
}

void ShowMemberDetailRequest::unsetmemberId()
{
    memberIdIsSet_ = false;
}

}
}
}
}
}


