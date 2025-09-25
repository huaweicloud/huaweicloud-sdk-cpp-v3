

#include "huaweicloud/codeartspipeline/v2/model/ShowPipleineStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ShowPipleineStatusRequest::ShowPipleineStatusRequest()
{
    pipelineId_ = "";
    pipelineIdIsSet_ = false;
    buildId_ = "";
    buildIdIsSet_ = false;
}

ShowPipleineStatusRequest::~ShowPipleineStatusRequest() = default;

void ShowPipleineStatusRequest::validate()
{
}

web::json::value ShowPipleineStatusRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pipelineIdIsSet_) {
        val[utility::conversions::to_string_t("pipeline_id")] = ModelBase::toJson(pipelineId_);
    }
    if(buildIdIsSet_) {
        val[utility::conversions::to_string_t("build_id")] = ModelBase::toJson(buildId_);
    }

    return val;
}
bool ShowPipleineStatusRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pipeline_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pipeline_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPipelineId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("build_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildId(refVal);
        }
    }
    return ok;
}


std::string ShowPipleineStatusRequest::getPipelineId() const
{
    return pipelineId_;
}

void ShowPipleineStatusRequest::setPipelineId(const std::string& value)
{
    pipelineId_ = value;
    pipelineIdIsSet_ = true;
}

bool ShowPipleineStatusRequest::pipelineIdIsSet() const
{
    return pipelineIdIsSet_;
}

void ShowPipleineStatusRequest::unsetpipelineId()
{
    pipelineIdIsSet_ = false;
}

std::string ShowPipleineStatusRequest::getBuildId() const
{
    return buildId_;
}

void ShowPipleineStatusRequest::setBuildId(const std::string& value)
{
    buildId_ = value;
    buildIdIsSet_ = true;
}

bool ShowPipleineStatusRequest::buildIdIsSet() const
{
    return buildIdIsSet_;
}

void ShowPipleineStatusRequest::unsetbuildId()
{
    buildIdIsSet_ = false;
}

}
}
}
}
}


