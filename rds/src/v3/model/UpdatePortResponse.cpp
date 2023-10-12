

#include "huaweicloud/rds/v3/model/UpdatePortResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdatePortResponse::UpdatePortResponse()
{
    workflowId_ = "";
    workflowIdIsSet_ = false;
}

UpdatePortResponse::~UpdatePortResponse() = default;

void UpdatePortResponse::validate()
{
}

web::json::value UpdatePortResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workflowIdIsSet_) {
        val[utility::conversions::to_string_t("workflowId")] = ModelBase::toJson(workflowId_);
    }

    return val;
}
bool UpdatePortResponse::fromJson(const web::json::value& val)
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


std::string UpdatePortResponse::getWorkflowId() const
{
    return workflowId_;
}

void UpdatePortResponse::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool UpdatePortResponse::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void UpdatePortResponse::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

}
}
}
}
}


