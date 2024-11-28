

#include "huaweicloud/gaussdbfornosql/v3/model/ShowRedisPitrInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ShowRedisPitrInfoRequest::ShowRedisPitrInfoRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowRedisPitrInfoRequest::~ShowRedisPitrInfoRequest() = default;

void ShowRedisPitrInfoRequest::validate()
{
}

web::json::value ShowRedisPitrInfoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool ShowRedisPitrInfoRequest::fromJson(const web::json::value& val)
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


std::string ShowRedisPitrInfoRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowRedisPitrInfoRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowRedisPitrInfoRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowRedisPitrInfoRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


