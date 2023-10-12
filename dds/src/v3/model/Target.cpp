

#include "huaweicloud/dds/v3/model/Target.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




Target::Target()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

Target::~Target() = default;

void Target::validate()
{
}

web::json::value Target::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool Target::fromJson(const web::json::value& val)
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


std::string Target::getInstanceId() const
{
    return instanceId_;
}

void Target::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool Target::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void Target::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


