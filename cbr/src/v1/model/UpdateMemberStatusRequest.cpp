

#include "huaweicloud/cbr/v1/model/UpdateMemberStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




UpdateMemberStatusRequest::UpdateMemberStatusRequest()
{
    memberId_ = "";
    memberIdIsSet_ = false;
    backupId_ = "";
    backupIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateMemberStatusRequest::~UpdateMemberStatusRequest() = default;

void UpdateMemberStatusRequest::validate()
{
}

web::json::value UpdateMemberStatusRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(memberIdIsSet_) {
        val[utility::conversions::to_string_t("member_id")] = ModelBase::toJson(memberId_);
    }
    if(backupIdIsSet_) {
        val[utility::conversions::to_string_t("backup_id")] = ModelBase::toJson(backupId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateMemberStatusRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("member_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("member_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMemberId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backup_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateMember refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateMemberStatusRequest::getMemberId() const
{
    return memberId_;
}

void UpdateMemberStatusRequest::setMemberId(const std::string& value)
{
    memberId_ = value;
    memberIdIsSet_ = true;
}

bool UpdateMemberStatusRequest::memberIdIsSet() const
{
    return memberIdIsSet_;
}

void UpdateMemberStatusRequest::unsetmemberId()
{
    memberIdIsSet_ = false;
}

std::string UpdateMemberStatusRequest::getBackupId() const
{
    return backupId_;
}

void UpdateMemberStatusRequest::setBackupId(const std::string& value)
{
    backupId_ = value;
    backupIdIsSet_ = true;
}

bool UpdateMemberStatusRequest::backupIdIsSet() const
{
    return backupIdIsSet_;
}

void UpdateMemberStatusRequest::unsetbackupId()
{
    backupIdIsSet_ = false;
}

UpdateMember UpdateMemberStatusRequest::getBody() const
{
    return body_;
}

void UpdateMemberStatusRequest::setBody(const UpdateMember& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateMemberStatusRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateMemberStatusRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


