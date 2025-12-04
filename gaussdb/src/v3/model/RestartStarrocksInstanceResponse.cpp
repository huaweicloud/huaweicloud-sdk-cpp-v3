

#include "huaweicloud/gaussdb/v3/model/RestartStarrocksInstanceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




RestartStarrocksInstanceResponse::RestartStarrocksInstanceResponse()
{
    workflowId_ = "";
    workflowIdIsSet_ = false;
}

RestartStarrocksInstanceResponse::~RestartStarrocksInstanceResponse() = default;

void RestartStarrocksInstanceResponse::validate()
{
}

web::json::value RestartStarrocksInstanceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workflowIdIsSet_) {
        val[utility::conversions::to_string_t("workflow_id")] = ModelBase::toJson(workflowId_);
    }

    return val;
}
bool RestartStarrocksInstanceResponse::fromJson(const web::json::value& val)
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


std::string RestartStarrocksInstanceResponse::getWorkflowId() const
{
    return workflowId_;
}

void RestartStarrocksInstanceResponse::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool RestartStarrocksInstanceResponse::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void RestartStarrocksInstanceResponse::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

}
}
}
}
}


