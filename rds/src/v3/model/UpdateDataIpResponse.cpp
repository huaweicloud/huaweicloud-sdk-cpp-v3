

#include "huaweicloud/rds/v3/model/UpdateDataIpResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdateDataIpResponse::UpdateDataIpResponse()
{
    workflowId_ = "";
    workflowIdIsSet_ = false;
}

UpdateDataIpResponse::~UpdateDataIpResponse() = default;

void UpdateDataIpResponse::validate()
{
}

web::json::value UpdateDataIpResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workflowIdIsSet_) {
        val[utility::conversions::to_string_t("workflowId")] = ModelBase::toJson(workflowId_);
    }

    return val;
}
bool UpdateDataIpResponse::fromJson(const web::json::value& val)
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


std::string UpdateDataIpResponse::getWorkflowId() const
{
    return workflowId_;
}

void UpdateDataIpResponse::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool UpdateDataIpResponse::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void UpdateDataIpResponse::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

}
}
}
}
}


