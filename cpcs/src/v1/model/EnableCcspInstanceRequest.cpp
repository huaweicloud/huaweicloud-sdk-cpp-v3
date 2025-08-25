

#include "huaweicloud/cpcs/v1/model/EnableCcspInstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




EnableCcspInstanceRequest::EnableCcspInstanceRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

EnableCcspInstanceRequest::~EnableCcspInstanceRequest() = default;

void EnableCcspInstanceRequest::validate()
{
}

web::json::value EnableCcspInstanceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool EnableCcspInstanceRequest::fromJson(const web::json::value& val)
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


std::string EnableCcspInstanceRequest::getInstanceId() const
{
    return instanceId_;
}

void EnableCcspInstanceRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool EnableCcspInstanceRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void EnableCcspInstanceRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


