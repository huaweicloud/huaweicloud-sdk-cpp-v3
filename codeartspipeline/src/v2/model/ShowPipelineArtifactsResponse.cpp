

#include "huaweicloud/codeartspipeline/v2/model/ShowPipelineArtifactsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ShowPipelineArtifactsResponse::ShowPipelineArtifactsResponse()
{
    artifactsIsSet_ = false;
}

ShowPipelineArtifactsResponse::~ShowPipelineArtifactsResponse() = default;

void ShowPipelineArtifactsResponse::validate()
{
}

web::json::value ShowPipelineArtifactsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(artifactsIsSet_) {
        val[utility::conversions::to_string_t("artifacts")] = ModelBase::toJson(artifacts_);
    }

    return val;
}
bool ShowPipelineArtifactsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("artifacts"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("artifacts"));
        if(!fieldValue.is_null())
        {
            std::vector<Artifact> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArtifacts(refVal);
        }
    }
    return ok;
}


std::vector<Artifact>& ShowPipelineArtifactsResponse::getArtifacts()
{
    return artifacts_;
}

void ShowPipelineArtifactsResponse::setArtifacts(const std::vector<Artifact>& value)
{
    artifacts_ = value;
    artifactsIsSet_ = true;
}

bool ShowPipelineArtifactsResponse::artifactsIsSet() const
{
    return artifactsIsSet_;
}

void ShowPipelineArtifactsResponse::unsetartifacts()
{
    artifactsIsSet_ = false;
}

}
}
}
}
}


