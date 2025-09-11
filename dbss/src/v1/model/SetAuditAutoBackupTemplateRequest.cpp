

#include "huaweicloud/dbss/v1/model/SetAuditAutoBackupTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




SetAuditAutoBackupTemplateRequest::SetAuditAutoBackupTemplateRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

SetAuditAutoBackupTemplateRequest::~SetAuditAutoBackupTemplateRequest() = default;

void SetAuditAutoBackupTemplateRequest::validate()
{
}

web::json::value SetAuditAutoBackupTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool SetAuditAutoBackupTemplateRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string SetAuditAutoBackupTemplateRequest::getInstanceId() const
{
    return instanceId_;
}

void SetAuditAutoBackupTemplateRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SetAuditAutoBackupTemplateRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SetAuditAutoBackupTemplateRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


