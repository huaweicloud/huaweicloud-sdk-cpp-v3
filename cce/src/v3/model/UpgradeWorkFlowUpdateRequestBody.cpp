

#include "huaweicloud/cce/v3/model/UpgradeWorkFlowUpdateRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




UpgradeWorkFlowUpdateRequestBody::UpgradeWorkFlowUpdateRequestBody()
{
    statusIsSet_ = false;
}

UpgradeWorkFlowUpdateRequestBody::~UpgradeWorkFlowUpdateRequestBody() = default;

void UpgradeWorkFlowUpdateRequestBody::validate()
{
}

web::json::value UpgradeWorkFlowUpdateRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool UpgradeWorkFlowUpdateRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            UpgradeWorkFlowUpdateRequestBody_status refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


UpgradeWorkFlowUpdateRequestBody_status UpgradeWorkFlowUpdateRequestBody::getStatus() const
{
    return status_;
}

void UpgradeWorkFlowUpdateRequestBody::setStatus(const UpgradeWorkFlowUpdateRequestBody_status& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpgradeWorkFlowUpdateRequestBody::statusIsSet() const
{
    return statusIsSet_;
}

void UpgradeWorkFlowUpdateRequestBody::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


