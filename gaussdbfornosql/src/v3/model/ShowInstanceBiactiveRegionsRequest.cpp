

#include "huaweicloud/gaussdbfornosql/v3/model/ShowInstanceBiactiveRegionsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ShowInstanceBiactiveRegionsRequest::ShowInstanceBiactiveRegionsRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowInstanceBiactiveRegionsRequest::~ShowInstanceBiactiveRegionsRequest() = default;

void ShowInstanceBiactiveRegionsRequest::validate()
{
}

web::json::value ShowInstanceBiactiveRegionsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool ShowInstanceBiactiveRegionsRequest::fromJson(const web::json::value& val)
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


std::string ShowInstanceBiactiveRegionsRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowInstanceBiactiveRegionsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowInstanceBiactiveRegionsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowInstanceBiactiveRegionsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


