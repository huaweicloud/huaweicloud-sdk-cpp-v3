

#include "huaweicloud/gaussdb/v3/model/SetDdlLogPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




SetDdlLogPolicyResponse::SetDdlLogPolicyResponse()
{
    workflowId_ = "";
    workflowIdIsSet_ = false;
}

SetDdlLogPolicyResponse::~SetDdlLogPolicyResponse() = default;

void SetDdlLogPolicyResponse::validate()
{
}

web::json::value SetDdlLogPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workflowIdIsSet_) {
        val[utility::conversions::to_string_t("workflow_id")] = ModelBase::toJson(workflowId_);
    }

    return val;
}
bool SetDdlLogPolicyResponse::fromJson(const web::json::value& val)
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
    return ok;
}


std::string SetDdlLogPolicyResponse::getWorkflowId() const
{
    return workflowId_;
}

void SetDdlLogPolicyResponse::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool SetDdlLogPolicyResponse::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void SetDdlLogPolicyResponse::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

}
}
}
}
}


