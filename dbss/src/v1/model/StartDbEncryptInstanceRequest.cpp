

#include "huaweicloud/dbss/v1/model/StartDbEncryptInstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




StartDbEncryptInstanceRequest::StartDbEncryptInstanceRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

StartDbEncryptInstanceRequest::~StartDbEncryptInstanceRequest() = default;

void StartDbEncryptInstanceRequest::validate()
{
}

web::json::value StartDbEncryptInstanceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool StartDbEncryptInstanceRequest::fromJson(const web::json::value& val)
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


std::string StartDbEncryptInstanceRequest::getInstanceId() const
{
    return instanceId_;
}

void StartDbEncryptInstanceRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool StartDbEncryptInstanceRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void StartDbEncryptInstanceRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


