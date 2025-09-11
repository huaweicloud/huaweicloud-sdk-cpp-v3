

#include "huaweicloud/dbss/v1/model/ShowAuditBackupStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ShowAuditBackupStatusRequest::ShowAuditBackupStatusRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowAuditBackupStatusRequest::~ShowAuditBackupStatusRequest() = default;

void ShowAuditBackupStatusRequest::validate()
{
}

web::json::value ShowAuditBackupStatusRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool ShowAuditBackupStatusRequest::fromJson(const web::json::value& val)
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


std::string ShowAuditBackupStatusRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowAuditBackupStatusRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowAuditBackupStatusRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowAuditBackupStatusRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


