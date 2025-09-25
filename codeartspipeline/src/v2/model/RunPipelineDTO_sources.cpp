

#include "huaweicloud/codeartspipeline/v2/model/RunPipelineDTO_sources.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




RunPipelineDTO_sources::RunPipelineDTO_sources()
{
    type_ = "";
    typeIsSet_ = false;
    paramsIsSet_ = false;
}

RunPipelineDTO_sources::~RunPipelineDTO_sources() = default;

void RunPipelineDTO_sources::validate()
{
}

web::json::value RunPipelineDTO_sources::toJson() const
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
bool RunPipelineDTO_sources::fromJson(const web::json::value& val)
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
            RunPipelineDTO_params refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParams(refVal);
        }
    }
    return ok;
}


std::string RunPipelineDTO_sources::getType() const
{
    return type_;
}

void RunPipelineDTO_sources::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool RunPipelineDTO_sources::typeIsSet() const
{
    return typeIsSet_;
}

void RunPipelineDTO_sources::unsettype()
{
    typeIsSet_ = false;
}

RunPipelineDTO_params RunPipelineDTO_sources::getParams() const
{
    return params_;
}

void RunPipelineDTO_sources::setParams(const RunPipelineDTO_params& value)
{
    params_ = value;
    paramsIsSet_ = true;
}

bool RunPipelineDTO_sources::paramsIsSet() const
{
    return paramsIsSet_;
}

void RunPipelineDTO_sources::unsetparams()
{
    paramsIsSet_ = false;
}

}
}
}
}
}


