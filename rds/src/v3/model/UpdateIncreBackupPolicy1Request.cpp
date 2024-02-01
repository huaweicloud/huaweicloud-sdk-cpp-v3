

#include "huaweicloud/rds/v3/model/UpdateIncreBackupPolicy1Request.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdateIncreBackupPolicy1Request::UpdateIncreBackupPolicy1Request()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateIncreBackupPolicy1Request::~UpdateIncreBackupPolicy1Request() = default;

void UpdateIncreBackupPolicy1Request::validate()
{
}

web::json::value UpdateIncreBackupPolicy1Request::toJson() const
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
bool UpdateIncreBackupPolicy1Request::fromJson(const web::json::value& val)
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
            UpdateIncreBackupPolicy1RequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateIncreBackupPolicy1Request::getInstanceId() const
{
    return instanceId_;
}

void UpdateIncreBackupPolicy1Request::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateIncreBackupPolicy1Request::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateIncreBackupPolicy1Request::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

UpdateIncreBackupPolicy1RequestBody UpdateIncreBackupPolicy1Request::getBody() const
{
    return body_;
}

void UpdateIncreBackupPolicy1Request::setBody(const UpdateIncreBackupPolicy1RequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateIncreBackupPolicy1Request::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateIncreBackupPolicy1Request::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


