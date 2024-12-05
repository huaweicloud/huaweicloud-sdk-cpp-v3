

#include "huaweicloud/gaussdbfornosql/v3/model/SwitchOverRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




SwitchOverRequest::SwitchOverRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

SwitchOverRequest::~SwitchOverRequest() = default;

void SwitchOverRequest::validate()
{
}

web::json::value SwitchOverRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool SwitchOverRequest::fromJson(const web::json::value& val)
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


std::string SwitchOverRequest::getInstanceId() const
{
    return instanceId_;
}

void SwitchOverRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SwitchOverRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SwitchOverRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


