

#include "huaweicloud/aad/v2/model/ShowInstanceByInstanceIdRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




ShowInstanceByInstanceIdRequest::ShowInstanceByInstanceIdRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowInstanceByInstanceIdRequest::~ShowInstanceByInstanceIdRequest() = default;

void ShowInstanceByInstanceIdRequest::validate()
{
}

web::json::value ShowInstanceByInstanceIdRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool ShowInstanceByInstanceIdRequest::fromJson(const web::json::value& val)
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


std::string ShowInstanceByInstanceIdRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowInstanceByInstanceIdRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowInstanceByInstanceIdRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowInstanceByInstanceIdRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


