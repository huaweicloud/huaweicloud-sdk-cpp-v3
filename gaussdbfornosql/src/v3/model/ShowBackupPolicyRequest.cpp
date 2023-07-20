

#include "huaweicloud/gaussdbfornosql/v3/model/ShowBackupPolicyRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ShowBackupPolicyRequest::ShowBackupPolicyRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowBackupPolicyRequest::~ShowBackupPolicyRequest() = default;

void ShowBackupPolicyRequest::validate()
{
}

web::json::value ShowBackupPolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}

bool ShowBackupPolicyRequest::fromJson(const web::json::value& val)
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

std::string ShowBackupPolicyRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowBackupPolicyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowBackupPolicyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowBackupPolicyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


