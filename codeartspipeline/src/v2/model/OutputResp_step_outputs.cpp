

#include "huaweicloud/codeartspipeline/v2/model/OutputResp_step_outputs.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




OutputResp_step_outputs::OutputResp_step_outputs()
{
    stepRunId_ = "";
    stepRunIdIsSet_ = false;
    outputResultIsSet_ = false;
}

OutputResp_step_outputs::~OutputResp_step_outputs() = default;

void OutputResp_step_outputs::validate()
{
}

web::json::value OutputResp_step_outputs::toJson() const
{
    web::json::value val = web::json::value::object();

    if(stepRunIdIsSet_) {
        val[utility::conversions::to_string_t("step_run_id")] = ModelBase::toJson(stepRunId_);
    }
    if(outputResultIsSet_) {
        val[utility::conversions::to_string_t("output_result")] = ModelBase::toJson(outputResult_);
    }

    return val;
}
bool OutputResp_step_outputs::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("step_run_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("step_run_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStepRunId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("output_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output_result"));
        if(!fieldValue.is_null())
        {
            std::vector<OutputResp_output_result> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputResult(refVal);
        }
    }
    return ok;
}


std::string OutputResp_step_outputs::getStepRunId() const
{
    return stepRunId_;
}

void OutputResp_step_outputs::setStepRunId(const std::string& value)
{
    stepRunId_ = value;
    stepRunIdIsSet_ = true;
}

bool OutputResp_step_outputs::stepRunIdIsSet() const
{
    return stepRunIdIsSet_;
}

void OutputResp_step_outputs::unsetstepRunId()
{
    stepRunIdIsSet_ = false;
}

std::vector<OutputResp_output_result>& OutputResp_step_outputs::getOutputResult()
{
    return outputResult_;
}

void OutputResp_step_outputs::setOutputResult(const std::vector<OutputResp_output_result>& value)
{
    outputResult_ = value;
    outputResultIsSet_ = true;
}

bool OutputResp_step_outputs::outputResultIsSet() const
{
    return outputResultIsSet_;
}

void OutputResp_step_outputs::unsetoutputResult()
{
    outputResultIsSet_ = false;
}

}
}
}
}
}


