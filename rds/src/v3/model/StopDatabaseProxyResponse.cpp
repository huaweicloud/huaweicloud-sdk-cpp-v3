

#include "huaweicloud/rds/v3/model/StopDatabaseProxyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




StopDatabaseProxyResponse::StopDatabaseProxyResponse()
{
    workflowId_ = "";
    workflowIdIsSet_ = false;
}

StopDatabaseProxyResponse::~StopDatabaseProxyResponse() = default;

void StopDatabaseProxyResponse::validate()
{
}

web::json::value StopDatabaseProxyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workflowIdIsSet_) {
        val[utility::conversions::to_string_t("workflow_id")] = ModelBase::toJson(workflowId_);
    }

    return val;
}
bool StopDatabaseProxyResponse::fromJson(const web::json::value& val)
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


std::string StopDatabaseProxyResponse::getWorkflowId() const
{
    return workflowId_;
}

void StopDatabaseProxyResponse::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool StopDatabaseProxyResponse::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void StopDatabaseProxyResponse::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

}
}
}
}
}


