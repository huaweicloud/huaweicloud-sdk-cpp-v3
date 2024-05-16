

#include "huaweicloud/gaussdb/v3/model/DeleteStarrocksInstanceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DeleteStarrocksInstanceResponse::DeleteStarrocksInstanceResponse()
{
    workflowId_ = "";
    workflowIdIsSet_ = false;
}

DeleteStarrocksInstanceResponse::~DeleteStarrocksInstanceResponse() = default;

void DeleteStarrocksInstanceResponse::validate()
{
}

web::json::value DeleteStarrocksInstanceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workflowIdIsSet_) {
        val[utility::conversions::to_string_t("workflow_id")] = ModelBase::toJson(workflowId_);
    }

    return val;
}
bool DeleteStarrocksInstanceResponse::fromJson(const web::json::value& val)
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


std::string DeleteStarrocksInstanceResponse::getWorkflowId() const
{
    return workflowId_;
}

void DeleteStarrocksInstanceResponse::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool DeleteStarrocksInstanceResponse::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void DeleteStarrocksInstanceResponse::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

}
}
}
}
}


