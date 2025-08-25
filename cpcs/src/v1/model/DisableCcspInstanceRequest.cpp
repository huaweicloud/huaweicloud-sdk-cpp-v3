

#include "huaweicloud/cpcs/v1/model/DisableCcspInstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




DisableCcspInstanceRequest::DisableCcspInstanceRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

DisableCcspInstanceRequest::~DisableCcspInstanceRequest() = default;

void DisableCcspInstanceRequest::validate()
{
}

web::json::value DisableCcspInstanceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool DisableCcspInstanceRequest::fromJson(const web::json::value& val)
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


std::string DisableCcspInstanceRequest::getInstanceId() const
{
    return instanceId_;
}

void DisableCcspInstanceRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DisableCcspInstanceRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DisableCcspInstanceRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


