

#include "huaweicloud/rds/v3/model/RotateAuditLogRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




RotateAuditLogRequestBody::RotateAuditLogRequestBody()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

RotateAuditLogRequestBody::~RotateAuditLogRequestBody() = default;

void RotateAuditLogRequestBody::validate()
{
}

web::json::value RotateAuditLogRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool RotateAuditLogRequestBody::fromJson(const web::json::value& val)
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


std::string RotateAuditLogRequestBody::getInstanceId() const
{
    return instanceId_;
}

void RotateAuditLogRequestBody::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool RotateAuditLogRequestBody::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void RotateAuditLogRequestBody::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


