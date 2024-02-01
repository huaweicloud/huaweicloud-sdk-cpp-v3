

#include "huaweicloud/rds/v3/model/ShowIncreBackupPolicy1Request.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowIncreBackupPolicy1Request::ShowIncreBackupPolicy1Request()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowIncreBackupPolicy1Request::~ShowIncreBackupPolicy1Request() = default;

void ShowIncreBackupPolicy1Request::validate()
{
}

web::json::value ShowIncreBackupPolicy1Request::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool ShowIncreBackupPolicy1Request::fromJson(const web::json::value& val)
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


std::string ShowIncreBackupPolicy1Request::getInstanceId() const
{
    return instanceId_;
}

void ShowIncreBackupPolicy1Request::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowIncreBackupPolicy1Request::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowIncreBackupPolicy1Request::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


