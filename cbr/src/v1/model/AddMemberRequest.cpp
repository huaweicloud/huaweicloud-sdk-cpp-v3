

#include "huaweicloud/cbr/v1/model/AddMemberRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




AddMemberRequest::AddMemberRequest()
{
    backupId_ = "";
    backupIdIsSet_ = false;
    bodyIsSet_ = false;
}

AddMemberRequest::~AddMemberRequest() = default;

void AddMemberRequest::validate()
{
}

web::json::value AddMemberRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(backupIdIsSet_) {
        val[utility::conversions::to_string_t("backup_id")] = ModelBase::toJson(backupId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool AddMemberRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            AddMembersReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AddMemberRequest::getBackupId() const
{
    return backupId_;
}

void AddMemberRequest::setBackupId(const std::string& value)
{
    backupId_ = value;
    backupIdIsSet_ = true;
}

bool AddMemberRequest::backupIdIsSet() const
{
    return backupIdIsSet_;
}

void AddMemberRequest::unsetbackupId()
{
    backupIdIsSet_ = false;
}

AddMembersReq AddMemberRequest::getBody() const
{
    return body_;
}

void AddMemberRequest::setBody(const AddMembersReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddMemberRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddMemberRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


