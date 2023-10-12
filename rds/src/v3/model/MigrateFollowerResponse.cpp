

#include "huaweicloud/rds/v3/model/MigrateFollowerResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




MigrateFollowerResponse::MigrateFollowerResponse()
{
    workflowId_ = "";
    workflowIdIsSet_ = false;
}

MigrateFollowerResponse::~MigrateFollowerResponse() = default;

void MigrateFollowerResponse::validate()
{
}

web::json::value MigrateFollowerResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workflowIdIsSet_) {
        val[utility::conversions::to_string_t("workflowId")] = ModelBase::toJson(workflowId_);
    }

    return val;
}
bool MigrateFollowerResponse::fromJson(const web::json::value& val)
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


std::string MigrateFollowerResponse::getWorkflowId() const
{
    return workflowId_;
}

void MigrateFollowerResponse::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool MigrateFollowerResponse::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void MigrateFollowerResponse::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

}
}
}
}
}


