

#include "huaweicloud/rds/v3/model/ShowMsdtcLocalHostRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowMsdtcLocalHostRequest::ShowMsdtcLocalHostRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowMsdtcLocalHostRequest::~ShowMsdtcLocalHostRequest() = default;

void ShowMsdtcLocalHostRequest::validate()
{
}

web::json::value ShowMsdtcLocalHostRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool ShowMsdtcLocalHostRequest::fromJson(const web::json::value& val)
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


std::string ShowMsdtcLocalHostRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowMsdtcLocalHostRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowMsdtcLocalHostRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowMsdtcLocalHostRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


