

#include "huaweicloud/rds/v3/model/CheckInstanceForUpgradeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CheckInstanceForUpgradeResponse::CheckInstanceForUpgradeResponse()
{
    workflowId_ = "";
    workflowIdIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

CheckInstanceForUpgradeResponse::~CheckInstanceForUpgradeResponse() = default;

void CheckInstanceForUpgradeResponse::validate()
{
}

web::json::value CheckInstanceForUpgradeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workflowIdIsSet_) {
        val[utility::conversions::to_string_t("workflow_id")] = ModelBase::toJson(workflowId_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-request-id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool CheckInstanceForUpgradeResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("workflow_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workflow_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkflowId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-request-id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-request-id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string CheckInstanceForUpgradeResponse::getWorkflowId() const
{
    return workflowId_;
}

void CheckInstanceForUpgradeResponse::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool CheckInstanceForUpgradeResponse::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void CheckInstanceForUpgradeResponse::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

std::string CheckInstanceForUpgradeResponse::getXRequestId() const
{
    return xRequestId_;
}

void CheckInstanceForUpgradeResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CheckInstanceForUpgradeResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CheckInstanceForUpgradeResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


