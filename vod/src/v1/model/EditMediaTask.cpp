

#include "huaweicloud/vod/v1/model/EditMediaTask.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




EditMediaTask::EditMediaTask()
{
    inputsIsSet_ = false;
    outputIsSet_ = false;
}

EditMediaTask::~EditMediaTask() = default;

void EditMediaTask::validate()
{
}

web::json::value EditMediaTask::toJson() const
{
    web::json::value val = web::json::value::object();

    if(inputsIsSet_) {
        val[utility::conversions::to_string_t("inputs")] = ModelBase::toJson(inputs_);
    }
    if(outputIsSet_) {
        val[utility::conversions::to_string_t("output")] = ModelBase::toJson(output_);
    }

    return val;
}
bool EditMediaTask::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("inputs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inputs"));
        if(!fieldValue.is_null())
        {
            std::vector<EditMediaTaskInput> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInputs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("output"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output"));
        if(!fieldValue.is_null())
        {
            TaskOutPut refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutput(refVal);
        }
    }
    return ok;
}


std::vector<EditMediaTaskInput>& EditMediaTask::getInputs()
{
    return inputs_;
}

void EditMediaTask::setInputs(const std::vector<EditMediaTaskInput>& value)
{
    inputs_ = value;
    inputsIsSet_ = true;
}

bool EditMediaTask::inputsIsSet() const
{
    return inputsIsSet_;
}

void EditMediaTask::unsetinputs()
{
    inputsIsSet_ = false;
}

TaskOutPut EditMediaTask::getOutput() const
{
    return output_;
}

void EditMediaTask::setOutput(const TaskOutPut& value)
{
    output_ = value;
    outputIsSet_ = true;
}

bool EditMediaTask::outputIsSet() const
{
    return outputIsSet_;
}

void EditMediaTask::unsetoutput()
{
    outputIsSet_ = false;
}

}
}
}
}
}


