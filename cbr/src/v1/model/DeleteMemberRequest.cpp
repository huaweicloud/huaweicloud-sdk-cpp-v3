

#include "huaweicloud/cbr/v1/model/DeleteMemberRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




DeleteMemberRequest::DeleteMemberRequest()
{
    backupId_ = "";
    backupIdIsSet_ = false;
    memberId_ = "";
    memberIdIsSet_ = false;
}

DeleteMemberRequest::~DeleteMemberRequest() = default;

void DeleteMemberRequest::validate()
{
}

web::json::value DeleteMemberRequest::toJson() const
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

bool DeleteMemberRequest::fromJson(const web::json::value& val)
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


std::string DeleteMemberRequest::getBackupId() const
{
    return backupId_;
}

void DeleteMemberRequest::setBackupId(const std::string& value)
{
    backupId_ = value;
    backupIdIsSet_ = true;
}

bool DeleteMemberRequest::backupIdIsSet() const
{
    return backupIdIsSet_;
}

void DeleteMemberRequest::unsetbackupId()
{
    backupIdIsSet_ = false;
}

std::string DeleteMemberRequest::getMemberId() const
{
    return memberId_;
}

void DeleteMemberRequest::setMemberId(const std::string& value)
{
    memberId_ = value;
    memberIdIsSet_ = true;
}

bool DeleteMemberRequest::memberIdIsSet() const
{
    return memberIdIsSet_;
}

void DeleteMemberRequest::unsetmemberId()
{
    memberIdIsSet_ = false;
}

}
}
}
}
}


