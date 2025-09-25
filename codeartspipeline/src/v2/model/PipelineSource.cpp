

#include "huaweicloud/codeartspipeline/v2/model/PipelineSource.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




PipelineSource::PipelineSource()
{
    type_ = "";
    typeIsSet_ = false;
    paramsIsSet_ = false;
}

PipelineSource::~PipelineSource() = default;

void PipelineSource::validate()
{
}

web::json::value PipelineSource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(paramsIsSet_) {
        val[utility::conversions::to_string_t("params")] = ModelBase::toJson(params_);
    }

    return val;
}
bool PipelineSource::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("params"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("params"));
        if(!fieldValue.is_null())
        {
            PipelineSourceParam refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParams(refVal);
        }
    }
    return ok;
}


std::string PipelineSource::getType() const
{
    return type_;
}

void PipelineSource::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool PipelineSource::typeIsSet() const
{
    return typeIsSet_;
}

void PipelineSource::unsettype()
{
    typeIsSet_ = false;
}

PipelineSourceParam PipelineSource::getParams() const
{
    return params_;
}

void PipelineSource::setParams(const PipelineSourceParam& value)
{
    params_ = value;
    paramsIsSet_ = true;
}

bool PipelineSource::paramsIsSet() const
{
    return paramsIsSet_;
}

void PipelineSource::unsetparams()
{
    paramsIsSet_ = false;
}

}
}
}
}
}


