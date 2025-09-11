

#include "huaweicloud/dbss/v1/model/ListAuditBackupInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListAuditBackupInfoRequest::ListAuditBackupInfoRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ListAuditBackupInfoRequest::~ListAuditBackupInfoRequest() = default;

void ListAuditBackupInfoRequest::validate()
{
}

web::json::value ListAuditBackupInfoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListAuditBackupInfoRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BackupPageRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListAuditBackupInfoRequest::getInstanceId() const
{
    return instanceId_;
}

void ListAuditBackupInfoRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListAuditBackupInfoRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListAuditBackupInfoRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

BackupPageRequest ListAuditBackupInfoRequest::getBody() const
{
    return body_;
}

void ListAuditBackupInfoRequest::setBody(const BackupPageRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListAuditBackupInfoRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListAuditBackupInfoRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


