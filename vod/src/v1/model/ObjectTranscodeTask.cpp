

#include "huaweicloud/vod/v1/model/ObjectTranscodeTask.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ObjectTranscodeTask::ObjectTranscodeTask()
{
    transTemplateId_ = "";
    transTemplateIdIsSet_ = false;
    outputName_ = "";
    outputNameIsSet_ = false;
    outputIsSet_ = false;
}

ObjectTranscodeTask::~ObjectTranscodeTask() = default;

void ObjectTranscodeTask::validate()
{
}

web::json::value ObjectTranscodeTask::toJson() const
{
    web::json::value val = web::json::value::object();

    if(transTemplateIdIsSet_) {
        val[utility::conversions::to_string_t("trans_template_id")] = ModelBase::toJson(transTemplateId_);
    }
    if(outputNameIsSet_) {
        val[utility::conversions::to_string_t("output_name")] = ModelBase::toJson(outputName_);
    }
    if(outputIsSet_) {
        val[utility::conversions::to_string_t("output")] = ModelBase::toJson(output_);
    }

    return val;
}
bool ObjectTranscodeTask::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("trans_template_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trans_template_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTransTemplateId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("output_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("output"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output"));
        if(!fieldValue.is_null())
        {
            ObsInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutput(refVal);
        }
    }
    return ok;
}


std::string ObjectTranscodeTask::getTransTemplateId() const
{
    return transTemplateId_;
}

void ObjectTranscodeTask::setTransTemplateId(const std::string& value)
{
    transTemplateId_ = value;
    transTemplateIdIsSet_ = true;
}

bool ObjectTranscodeTask::transTemplateIdIsSet() const
{
    return transTemplateIdIsSet_;
}

void ObjectTranscodeTask::unsettransTemplateId()
{
    transTemplateIdIsSet_ = false;
}

std::string ObjectTranscodeTask::getOutputName() const
{
    return outputName_;
}

void ObjectTranscodeTask::setOutputName(const std::string& value)
{
    outputName_ = value;
    outputNameIsSet_ = true;
}

bool ObjectTranscodeTask::outputNameIsSet() const
{
    return outputNameIsSet_;
}

void ObjectTranscodeTask::unsetoutputName()
{
    outputNameIsSet_ = false;
}

ObsInfo ObjectTranscodeTask::getOutput() const
{
    return output_;
}

void ObjectTranscodeTask::setOutput(const ObsInfo& value)
{
    output_ = value;
    outputIsSet_ = true;
}

bool ObjectTranscodeTask::outputIsSet() const
{
    return outputIsSet_;
}

void ObjectTranscodeTask::unsetoutput()
{
    outputIsSet_ = false;
}

}
}
}
}
}


