

#include "huaweicloud/mpc/v1/model/TransIdTemplate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




TransIdTemplate::TransIdTemplate()
{
    templateId_ = 0;
    templateIdIsSet_ = false;
    outputIsSet_ = false;
    outputFilename_ = "";
    outputFilenameIsSet_ = false;
}

TransIdTemplate::~TransIdTemplate() = default;

void TransIdTemplate::validate()
{
}

web::json::value TransIdTemplate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("template_id")] = ModelBase::toJson(templateId_);
    }
    if(outputIsSet_) {
        val[utility::conversions::to_string_t("output")] = ModelBase::toJson(output_);
    }
    if(outputFilenameIsSet_) {
        val[utility::conversions::to_string_t("output_filename")] = ModelBase::toJson(outputFilename_);
    }

    return val;
}
bool TransIdTemplate::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("template_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("output"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output"));
        if(!fieldValue.is_null())
        {
            ObsObjInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutput(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("output_filename"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output_filename"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputFilename(refVal);
        }
    }
    return ok;
}


int32_t TransIdTemplate::getTemplateId() const
{
    return templateId_;
}

void TransIdTemplate::setTemplateId(int32_t value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool TransIdTemplate::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void TransIdTemplate::unsettemplateId()
{
    templateIdIsSet_ = false;
}

ObsObjInfo TransIdTemplate::getOutput() const
{
    return output_;
}

void TransIdTemplate::setOutput(const ObsObjInfo& value)
{
    output_ = value;
    outputIsSet_ = true;
}

bool TransIdTemplate::outputIsSet() const
{
    return outputIsSet_;
}

void TransIdTemplate::unsetoutput()
{
    outputIsSet_ = false;
}

std::string TransIdTemplate::getOutputFilename() const
{
    return outputFilename_;
}

void TransIdTemplate::setOutputFilename(const std::string& value)
{
    outputFilename_ = value;
    outputFilenameIsSet_ = true;
}

bool TransIdTemplate::outputFilenameIsSet() const
{
    return outputFilenameIsSet_;
}

void TransIdTemplate::unsetoutputFilename()
{
    outputFilenameIsSet_ = false;
}

}
}
}
}
}


