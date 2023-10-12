

#include "huaweicloud/gaussdb/v3/model/UpgradeDatabaseRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpgradeDatabaseRequest::UpgradeDatabaseRequest()
{
    delay_ = false;
    delayIsSet_ = false;
}

UpgradeDatabaseRequest::~UpgradeDatabaseRequest() = default;

void UpgradeDatabaseRequest::validate()
{
}

web::json::value UpgradeDatabaseRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(delayIsSet_) {
        val[utility::conversions::to_string_t("delay")] = ModelBase::toJson(delay_);
    }

    return val;
}
bool UpgradeDatabaseRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("delay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delay"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDelay(refVal);
        }
    }
    return ok;
}


bool UpgradeDatabaseRequest::isDelay() const
{
    return delay_;
}

void UpgradeDatabaseRequest::setDelay(bool value)
{
    delay_ = value;
    delayIsSet_ = true;
}

bool UpgradeDatabaseRequest::delayIsSet() const
{
    return delayIsSet_;
}

void UpgradeDatabaseRequest::unsetdelay()
{
    delayIsSet_ = false;
}

}
}
}
}
}


