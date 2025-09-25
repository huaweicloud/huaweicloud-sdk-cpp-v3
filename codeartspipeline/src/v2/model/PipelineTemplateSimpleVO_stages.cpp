

#include "huaweicloud/codeartspipeline/v2/model/PipelineTemplateSimpleVO_stages.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




PipelineTemplateSimpleVO_stages::PipelineTemplateSimpleVO_stages()
{
    name_ = "";
    nameIsSet_ = false;
    sequence_ = 0;
    sequenceIsSet_ = false;
}

PipelineTemplateSimpleVO_stages::~PipelineTemplateSimpleVO_stages() = default;

void PipelineTemplateSimpleVO_stages::validate()
{
}

web::json::value PipelineTemplateSimpleVO_stages::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(sequenceIsSet_) {
        val[utility::conversions::to_string_t("sequence")] = ModelBase::toJson(sequence_);
    }

    return val;
}
bool PipelineTemplateSimpleVO_stages::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sequence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sequence"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSequence(refVal);
        }
    }
    return ok;
}


std::string PipelineTemplateSimpleVO_stages::getName() const
{
    return name_;
}

void PipelineTemplateSimpleVO_stages::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PipelineTemplateSimpleVO_stages::nameIsSet() const
{
    return nameIsSet_;
}

void PipelineTemplateSimpleVO_stages::unsetname()
{
    nameIsSet_ = false;
}

int32_t PipelineTemplateSimpleVO_stages::getSequence() const
{
    return sequence_;
}

void PipelineTemplateSimpleVO_stages::setSequence(int32_t value)
{
    sequence_ = value;
    sequenceIsSet_ = true;
}

bool PipelineTemplateSimpleVO_stages::sequenceIsSet() const
{
    return sequenceIsSet_;
}

void PipelineTemplateSimpleVO_stages::unsetsequence()
{
    sequenceIsSet_ = false;
}

}
}
}
}
}


