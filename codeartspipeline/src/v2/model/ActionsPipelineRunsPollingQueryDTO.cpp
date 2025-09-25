

#include "huaweicloud/codeartspipeline/v2/model/ActionsPipelineRunsPollingQueryDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ActionsPipelineRunsPollingQueryDTO::ActionsPipelineRunsPollingQueryDTO()
{
    pipelineRunIdsIsSet_ = false;
}

ActionsPipelineRunsPollingQueryDTO::~ActionsPipelineRunsPollingQueryDTO() = default;

void ActionsPipelineRunsPollingQueryDTO::validate()
{
}

web::json::value ActionsPipelineRunsPollingQueryDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pipelineRunIdsIsSet_) {
        val[utility::conversions::to_string_t("pipeline_run_ids")] = ModelBase::toJson(pipelineRunIds_);
    }

    return val;
}
bool ActionsPipelineRunsPollingQueryDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pipeline_run_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pipeline_run_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPipelineRunIds(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& ActionsPipelineRunsPollingQueryDTO::getPipelineRunIds()
{
    return pipelineRunIds_;
}

void ActionsPipelineRunsPollingQueryDTO::setPipelineRunIds(const std::vector<std::string>& value)
{
    pipelineRunIds_ = value;
    pipelineRunIdsIsSet_ = true;
}

bool ActionsPipelineRunsPollingQueryDTO::pipelineRunIdsIsSet() const
{
    return pipelineRunIdsIsSet_;
}

void ActionsPipelineRunsPollingQueryDTO::unsetpipelineRunIds()
{
    pipelineRunIdsIsSet_ = false;
}

}
}
}
}
}


