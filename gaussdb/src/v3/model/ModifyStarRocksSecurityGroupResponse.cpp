

#include "huaweicloud/gaussdb/v3/model/ModifyStarRocksSecurityGroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ModifyStarRocksSecurityGroupResponse::ModifyStarRocksSecurityGroupResponse()
{
    workflowId_ = "";
    workflowIdIsSet_ = false;
}

ModifyStarRocksSecurityGroupResponse::~ModifyStarRocksSecurityGroupResponse() = default;

void ModifyStarRocksSecurityGroupResponse::validate()
{
}

web::json::value ModifyStarRocksSecurityGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workflowIdIsSet_) {
        val[utility::conversions::to_string_t("workflow_id")] = ModelBase::toJson(workflowId_);
    }

    return val;
}
bool ModifyStarRocksSecurityGroupResponse::fromJson(const web::json::value& val)
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


std::string ModifyStarRocksSecurityGroupResponse::getWorkflowId() const
{
    return workflowId_;
}

void ModifyStarRocksSecurityGroupResponse::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool ModifyStarRocksSecurityGroupResponse::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void ModifyStarRocksSecurityGroupResponse::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

}
}
}
}
}


