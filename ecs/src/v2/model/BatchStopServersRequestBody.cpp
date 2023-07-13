

#include "huaweicloud/ecs/v2/model/BatchStopServersRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




BatchStopServersRequestBody::BatchStopServersRequestBody()
{
    osStopIsSet_ = false;
}

BatchStopServersRequestBody::~BatchStopServersRequestBody() = default;

void BatchStopServersRequestBody::validate()
{
}

web::json::value BatchStopServersRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(osStopIsSet_) {
        val[utility::conversions::to_string_t("os-stop")] = ModelBase::toJson(osStop_);
    }

    return val;
}

bool BatchStopServersRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("os-stop"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os-stop"));
        if(!fieldValue.is_null())
        {
            BatchStopServersOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsStop(refVal);
        }
    }
    return ok;
}

BatchStopServersOption BatchStopServersRequestBody::getOsStop() const
{
    return osStop_;
}

void BatchStopServersRequestBody::setOsStop(const BatchStopServersOption& value)
{
    osStop_ = value;
    osStopIsSet_ = true;
}

bool BatchStopServersRequestBody::osStopIsSet() const
{
    return osStopIsSet_;
}

void BatchStopServersRequestBody::unsetosStop()
{
    osStopIsSet_ = false;
}

}
}
}
}
}


