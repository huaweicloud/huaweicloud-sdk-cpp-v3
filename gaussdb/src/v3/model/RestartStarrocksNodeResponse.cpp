

#include "huaweicloud/gaussdb/v3/model/RestartStarrocksNodeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




RestartStarrocksNodeResponse::RestartStarrocksNodeResponse()
{
    workflowId_ = "";
    workflowIdIsSet_ = false;
}

RestartStarrocksNodeResponse::~RestartStarrocksNodeResponse() = default;

void RestartStarrocksNodeResponse::validate()
{
}

web::json::value RestartStarrocksNodeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workflowIdIsSet_) {
        val[utility::conversions::to_string_t("workflow_id")] = ModelBase::toJson(workflowId_);
    }

    return val;
}
bool RestartStarrocksNodeResponse::fromJson(const web::json::value& val)
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


std::string RestartStarrocksNodeResponse::getWorkflowId() const
{
    return workflowId_;
}

void RestartStarrocksNodeResponse::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool RestartStarrocksNodeResponse::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void RestartStarrocksNodeResponse::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

}
}
}
}
}


