

#include "huaweicloud/rds/v3/model/SetSecurityGroupResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SetSecurityGroupResponse::SetSecurityGroupResponse()
{
    workflowId_ = "";
    workflowIdIsSet_ = false;
}

SetSecurityGroupResponse::~SetSecurityGroupResponse() = default;

void SetSecurityGroupResponse::validate()
{
}

web::json::value SetSecurityGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workflowIdIsSet_) {
        val[utility::conversions::to_string_t("workflowId")] = ModelBase::toJson(workflowId_);
    }

    return val;
}

bool SetSecurityGroupResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("workflowId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workflowId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkflowId(refVal);
        }
    }
    return ok;
}

std::string SetSecurityGroupResponse::getWorkflowId() const
{
    return workflowId_;
}

void SetSecurityGroupResponse::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool SetSecurityGroupResponse::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void SetSecurityGroupResponse::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

}
}
}
}
}


