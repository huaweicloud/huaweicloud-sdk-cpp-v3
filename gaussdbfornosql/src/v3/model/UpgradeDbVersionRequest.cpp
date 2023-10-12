

#include "huaweicloud/gaussdbfornosql/v3/model/UpgradeDbVersionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




UpgradeDbVersionRequest::UpgradeDbVersionRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

UpgradeDbVersionRequest::~UpgradeDbVersionRequest() = default;

void UpgradeDbVersionRequest::validate()
{
}

web::json::value UpgradeDbVersionRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool UpgradeDbVersionRequest::fromJson(const web::json::value& val)
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


std::string UpgradeDbVersionRequest::getInstanceId() const
{
    return instanceId_;
}

void UpgradeDbVersionRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpgradeDbVersionRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpgradeDbVersionRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


