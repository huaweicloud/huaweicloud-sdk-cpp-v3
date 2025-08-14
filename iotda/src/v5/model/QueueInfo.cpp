

#include "huaweicloud/iotda/v5/model/QueueInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




QueueInfo::QueueInfo()
{
    queueName_ = "";
    queueNameIsSet_ = false;
}

QueueInfo::~QueueInfo() = default;

void QueueInfo::validate()
{
}

web::json::value QueueInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(queueNameIsSet_) {
        val[utility::conversions::to_string_t("queue_name")] = ModelBase::toJson(queueName_);
    }

    return val;
}
bool QueueInfo::fromJson(const web::json::value& val)
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


std::string QueueInfo::getQueueName() const
{
    return queueName_;
}

void QueueInfo::setQueueName(const std::string& value)
{
    queueName_ = value;
    queueNameIsSet_ = true;
}

bool QueueInfo::queueNameIsSet() const
{
    return queueNameIsSet_;
}

void QueueInfo::unsetqueueName()
{
    queueNameIsSet_ = false;
}

}
}
}
}
}


