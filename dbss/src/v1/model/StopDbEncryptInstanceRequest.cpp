

#include "huaweicloud/dbss/v1/model/StopDbEncryptInstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




StopDbEncryptInstanceRequest::StopDbEncryptInstanceRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

StopDbEncryptInstanceRequest::~StopDbEncryptInstanceRequest() = default;

void StopDbEncryptInstanceRequest::validate()
{
}

web::json::value StopDbEncryptInstanceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool StopDbEncryptInstanceRequest::fromJson(const web::json::value& val)
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


std::string StopDbEncryptInstanceRequest::getInstanceId() const
{
    return instanceId_;
}

void StopDbEncryptInstanceRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool StopDbEncryptInstanceRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void StopDbEncryptInstanceRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


