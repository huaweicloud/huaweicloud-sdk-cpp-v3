

#include "huaweicloud/cpcs/v1/model/EnableCcspInstanceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




EnableCcspInstanceResponse::EnableCcspInstanceResponse()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

EnableCcspInstanceResponse::~EnableCcspInstanceResponse() = default;

void EnableCcspInstanceResponse::validate()
{
}

web::json::value EnableCcspInstanceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool EnableCcspInstanceResponse::fromJson(const web::json::value& val)
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


std::string EnableCcspInstanceResponse::getInstanceId() const
{
    return instanceId_;
}

void EnableCcspInstanceResponse::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool EnableCcspInstanceResponse::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void EnableCcspInstanceResponse::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


