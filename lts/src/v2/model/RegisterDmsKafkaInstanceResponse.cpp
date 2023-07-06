

#include "huaweicloud/lts/v2/model/RegisterDmsKafkaInstanceResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




RegisterDmsKafkaInstanceResponse::RegisterDmsKafkaInstanceResponse()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

RegisterDmsKafkaInstanceResponse::~RegisterDmsKafkaInstanceResponse() = default;

void RegisterDmsKafkaInstanceResponse::validate()
{
}

web::json::value RegisterDmsKafkaInstanceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}

bool RegisterDmsKafkaInstanceResponse::fromJson(const web::json::value& val)
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

std::string RegisterDmsKafkaInstanceResponse::getInstanceId() const
{
    return instanceId_;
}

void RegisterDmsKafkaInstanceResponse::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool RegisterDmsKafkaInstanceResponse::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void RegisterDmsKafkaInstanceResponse::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


