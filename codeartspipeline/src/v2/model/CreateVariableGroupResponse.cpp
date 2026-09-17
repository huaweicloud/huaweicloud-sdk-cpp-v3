

#include "huaweicloud/codeartspipeline/v2/model/CreateVariableGroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




CreateVariableGroupResponse::CreateVariableGroupResponse()
{
    pipelineVariableGroupId_ = "";
    pipelineVariableGroupIdIsSet_ = false;
}

CreateVariableGroupResponse::~CreateVariableGroupResponse() = default;

void CreateVariableGroupResponse::validate()
{
}

web::json::value CreateVariableGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pipelineVariableGroupIdIsSet_) {
        val[utility::conversions::to_string_t("pipeline_variable_group_id")] = ModelBase::toJson(pipelineVariableGroupId_);
    }

    return val;
}
bool CreateVariableGroupResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pipeline_variable_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pipeline_variable_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPipelineVariableGroupId(refVal);
        }
    }
    return ok;
}


std::string CreateVariableGroupResponse::getPipelineVariableGroupId() const
{
    return pipelineVariableGroupId_;
}

void CreateVariableGroupResponse::setPipelineVariableGroupId(const std::string& value)
{
    pipelineVariableGroupId_ = value;
    pipelineVariableGroupIdIsSet_ = true;
}

bool CreateVariableGroupResponse::pipelineVariableGroupIdIsSet() const
{
    return pipelineVariableGroupIdIsSet_;
}

void CreateVariableGroupResponse::unsetpipelineVariableGroupId()
{
    pipelineVariableGroupIdIsSet_ = false;
}

}
}
}
}
}


