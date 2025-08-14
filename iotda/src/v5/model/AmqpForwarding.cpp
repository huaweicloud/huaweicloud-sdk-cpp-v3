

#include "huaweicloud/iotda/v5/model/AmqpForwarding.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




AmqpForwarding::AmqpForwarding()
{
    queueName_ = "";
    queueNameIsSet_ = false;
}

AmqpForwarding::~AmqpForwarding() = default;

void AmqpForwarding::validate()
{
}

web::json::value AmqpForwarding::toJson() const
{
    web::json::value val = web::json::value::object();

    if(queueNameIsSet_) {
        val[utility::conversions::to_string_t("queue_name")] = ModelBase::toJson(queueName_);
    }

    return val;
}
bool AmqpForwarding::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("queue_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("queue_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueueName(refVal);
        }
    }
    return ok;
}


std::string AmqpForwarding::getQueueName() const
{
    return queueName_;
}

void AmqpForwarding::setQueueName(const std::string& value)
{
    queueName_ = value;
    queueNameIsSet_ = true;
}

bool AmqpForwarding::queueNameIsSet() const
{
    return queueNameIsSet_;
}

void AmqpForwarding::unsetqueueName()
{
    queueNameIsSet_ = false;
}

}
}
}
}
}


