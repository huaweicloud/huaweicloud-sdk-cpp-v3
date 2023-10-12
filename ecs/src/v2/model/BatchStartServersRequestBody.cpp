

#include "huaweicloud/ecs/v2/model/BatchStartServersRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




BatchStartServersRequestBody::BatchStartServersRequestBody()
{
    osStartIsSet_ = false;
}

BatchStartServersRequestBody::~BatchStartServersRequestBody() = default;

void BatchStartServersRequestBody::validate()
{
}

web::json::value BatchStartServersRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(osStartIsSet_) {
        val[utility::conversions::to_string_t("os-start")] = ModelBase::toJson(osStart_);
    }

    return val;
}
bool BatchStartServersRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("os-start"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os-start"));
        if(!fieldValue.is_null())
        {
            BatchStartServersOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOsStart(refVal);
        }
    }
    return ok;
}


BatchStartServersOption BatchStartServersRequestBody::getOsStart() const
{
    return osStart_;
}

void BatchStartServersRequestBody::setOsStart(const BatchStartServersOption& value)
{
    osStart_ = value;
    osStartIsSet_ = true;
}

bool BatchStartServersRequestBody::osStartIsSet() const
{
    return osStartIsSet_;
}

void BatchStartServersRequestBody::unsetosStart()
{
    osStartIsSet_ = false;
}

}
}
}
}
}


