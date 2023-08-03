

#include "huaweicloud/rds/v3/model/StartDatabaseProxyResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




StartDatabaseProxyResponse::StartDatabaseProxyResponse()
{
    workflowId_ = "";
    workflowIdIsSet_ = false;
}

StartDatabaseProxyResponse::~StartDatabaseProxyResponse() = default;

void StartDatabaseProxyResponse::validate()
{
}

web::json::value StartDatabaseProxyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workflowIdIsSet_) {
        val[utility::conversions::to_string_t("workflow_id")] = ModelBase::toJson(workflowId_);
    }

    return val;
}

bool StartDatabaseProxyResponse::fromJson(const web::json::value& val)
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

std::string StartDatabaseProxyResponse::getWorkflowId() const
{
    return workflowId_;
}

void StartDatabaseProxyResponse::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool StartDatabaseProxyResponse::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void StartDatabaseProxyResponse::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

}
}
}
}
}


