

#include "huaweicloud/codeartspipeline/v2/model/RunPipelineSource.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




RunPipelineSource::RunPipelineSource()
{
    type_ = "";
    typeIsSet_ = false;
    paramsIsSet_ = false;
}

RunPipelineSource::~RunPipelineSource() = default;

void RunPipelineSource::validate()
{
}

web::json::value RunPipelineSource::toJson() const
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
bool RunPipelineSource::fromJson(const web::json::value& val)
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
            RunPipelineSource_params refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParams(refVal);
        }
    }
    return ok;
}


std::string RunPipelineSource::getType() const
{
    return type_;
}

void RunPipelineSource::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool RunPipelineSource::typeIsSet() const
{
    return typeIsSet_;
}

void RunPipelineSource::unsettype()
{
    typeIsSet_ = false;
}

RunPipelineSource_params RunPipelineSource::getParams() const
{
    return params_;
}

void RunPipelineSource::setParams(const RunPipelineSource_params& value)
{
    params_ = value;
    paramsIsSet_ = true;
}

bool RunPipelineSource::paramsIsSet() const
{
    return paramsIsSet_;
}

void RunPipelineSource::unsetparams()
{
    paramsIsSet_ = false;
}

}
}
}
}
}


