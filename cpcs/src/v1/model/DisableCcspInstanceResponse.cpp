

#include "huaweicloud/cpcs/v1/model/DisableCcspInstanceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




DisableCcspInstanceResponse::DisableCcspInstanceResponse()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

DisableCcspInstanceResponse::~DisableCcspInstanceResponse() = default;

void DisableCcspInstanceResponse::validate()
{
}

web::json::value DisableCcspInstanceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool DisableCcspInstanceResponse::fromJson(const web::json::value& val)
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


std::string DisableCcspInstanceResponse::getInstanceId() const
{
    return instanceId_;
}

void DisableCcspInstanceResponse::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DisableCcspInstanceResponse::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DisableCcspInstanceResponse::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


