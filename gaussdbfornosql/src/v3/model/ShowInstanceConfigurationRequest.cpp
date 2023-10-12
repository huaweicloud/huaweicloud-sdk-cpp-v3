

#include "huaweicloud/gaussdbfornosql/v3/model/ShowInstanceConfigurationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ShowInstanceConfigurationRequest::ShowInstanceConfigurationRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowInstanceConfigurationRequest::~ShowInstanceConfigurationRequest() = default;

void ShowInstanceConfigurationRequest::validate()
{
}

web::json::value ShowInstanceConfigurationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool ShowInstanceConfigurationRequest::fromJson(const web::json::value& val)
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


std::string ShowInstanceConfigurationRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowInstanceConfigurationRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowInstanceConfigurationRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowInstanceConfigurationRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


