

#include "huaweicloud/ecs/v2/model/MigrateServerOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




MigrateServerOption::MigrateServerOption()
{
    dedicatedHostId_ = "";
    dedicatedHostIdIsSet_ = false;
}

MigrateServerOption::~MigrateServerOption() = default;

void MigrateServerOption::validate()
{
}

web::json::value MigrateServerOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dedicatedHostIdIsSet_) {
        val[utility::conversions::to_string_t("dedicated_host_id")] = ModelBase::toJson(dedicatedHostId_);
    }

    return val;
}

bool MigrateServerOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("dedicated_host_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dedicated_host_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDedicatedHostId(refVal);
        }
    }
    return ok;
}

std::string MigrateServerOption::getDedicatedHostId() const
{
    return dedicatedHostId_;
}

void MigrateServerOption::setDedicatedHostId(const std::string& value)
{
    dedicatedHostId_ = value;
    dedicatedHostIdIsSet_ = true;
}

bool MigrateServerOption::dedicatedHostIdIsSet() const
{
    return dedicatedHostIdIsSet_;
}

void MigrateServerOption::unsetdedicatedHostId()
{
    dedicatedHostIdIsSet_ = false;
}

}
}
}
}
}


