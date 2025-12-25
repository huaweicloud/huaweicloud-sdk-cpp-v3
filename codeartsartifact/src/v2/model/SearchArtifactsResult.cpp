

#include "huaweicloud/codeartsartifact/v2/model/SearchArtifactsResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




SearchArtifactsResult::SearchArtifactsResult()
{
    artifactsIsSet_ = false;
}

SearchArtifactsResult::~SearchArtifactsResult() = default;

void SearchArtifactsResult::validate()
{
}

web::json::value SearchArtifactsResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(artifactsIsSet_) {
        val[utility::conversions::to_string_t("artifacts")] = ModelBase::toJson(artifacts_);
    }

    return val;
}
bool SearchArtifactsResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("artifacts"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("artifacts"));
        if(!fieldValue.is_null())
        {
            std::vector<ArtifactSearchResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArtifacts(refVal);
        }
    }
    return ok;
}


std::vector<ArtifactSearchResult>& SearchArtifactsResult::getArtifacts()
{
    return artifacts_;
}

void SearchArtifactsResult::setArtifacts(const std::vector<ArtifactSearchResult>& value)
{
    artifacts_ = value;
    artifactsIsSet_ = true;
}

bool SearchArtifactsResult::artifactsIsSet() const
{
    return artifactsIsSet_;
}

void SearchArtifactsResult::unsetartifacts()
{
    artifactsIsSet_ = false;
}

}
}
}
}
}


