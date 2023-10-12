

#include "huaweicloud/rds/v3/model/InstanceRestartRequsetBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




InstanceRestartRequsetBody::InstanceRestartRequsetBody()
{
    restartIsSet_ = false;
}

InstanceRestartRequsetBody::~InstanceRestartRequsetBody() = default;

void InstanceRestartRequsetBody::validate()
{
}

web::json::value InstanceRestartRequsetBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(restartIsSet_) {
        val[utility::conversions::to_string_t("restart")] = ModelBase::toJson(restart_);
    }

    return val;
}
bool InstanceRestartRequsetBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("restart"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("restart"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRestart(refVal);
        }
    }
    return ok;
}


Object InstanceRestartRequsetBody::getRestart() const
{
    return restart_;
}

void InstanceRestartRequsetBody::setRestart(const Object& value)
{
    restart_ = value;
    restartIsSet_ = true;
}

bool InstanceRestartRequsetBody::restartIsSet() const
{
    return restartIsSet_;
}

void InstanceRestartRequsetBody::unsetrestart()
{
    restartIsSet_ = false;
}

}
}
}
}
}


