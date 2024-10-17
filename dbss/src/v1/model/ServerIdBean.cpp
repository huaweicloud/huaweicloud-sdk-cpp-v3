

#include "huaweicloud/dbss/v1/model/ServerIdBean.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ServerIdBean::ServerIdBean()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ServerIdBean::~ServerIdBean() = default;

void ServerIdBean::validate()
{
}

web::json::value ServerIdBean::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool ServerIdBean::fromJson(const web::json::value& val)
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


std::string ServerIdBean::getInstanceId() const
{
    return instanceId_;
}

void ServerIdBean::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ServerIdBean::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ServerIdBean::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


