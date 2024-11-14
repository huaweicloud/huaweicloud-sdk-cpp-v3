

#include "huaweicloud/gaussdbfornosql/v3/model/ShowBackupPoliciesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ShowBackupPoliciesRequest::ShowBackupPoliciesRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowBackupPoliciesRequest::~ShowBackupPoliciesRequest() = default;

void ShowBackupPoliciesRequest::validate()
{
}

web::json::value ShowBackupPoliciesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool ShowBackupPoliciesRequest::fromJson(const web::json::value& val)
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


std::string ShowBackupPoliciesRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowBackupPoliciesRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowBackupPoliciesRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowBackupPoliciesRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


