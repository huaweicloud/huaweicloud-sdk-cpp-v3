

#include "huaweicloud/rds/v3/model/ShowTransferPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowTransferPolicyRequest::ShowTransferPolicyRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowTransferPolicyRequest::~ShowTransferPolicyRequest() = default;

void ShowTransferPolicyRequest::validate()
{
}

web::json::value ShowTransferPolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool ShowTransferPolicyRequest::fromJson(const web::json::value& val)
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


std::string ShowTransferPolicyRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowTransferPolicyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowTransferPolicyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowTransferPolicyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


