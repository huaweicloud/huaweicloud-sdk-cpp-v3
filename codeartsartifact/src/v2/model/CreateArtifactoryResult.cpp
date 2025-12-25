

#include "huaweicloud/codeartsartifact/v2/model/CreateArtifactoryResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




CreateArtifactoryResult::CreateArtifactoryResult()
{
    artifactoryIsSet_ = false;
}

CreateArtifactoryResult::~CreateArtifactoryResult() = default;

void CreateArtifactoryResult::validate()
{
}

web::json::value CreateArtifactoryResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(artifactoryIsSet_) {
        val[utility::conversions::to_string_t("artifactory")] = ModelBase::toJson(artifactory_);
    }

    return val;
}
bool CreateArtifactoryResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("artifactory"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("artifactory"));
        if(!fieldValue.is_null())
        {
            RepositoryDO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArtifactory(refVal);
        }
    }
    return ok;
}


RepositoryDO CreateArtifactoryResult::getArtifactory() const
{
    return artifactory_;
}

void CreateArtifactoryResult::setArtifactory(const RepositoryDO& value)
{
    artifactory_ = value;
    artifactoryIsSet_ = true;
}

bool CreateArtifactoryResult::artifactoryIsSet() const
{
    return artifactoryIsSet_;
}

void CreateArtifactoryResult::unsetartifactory()
{
    artifactoryIsSet_ = false;
}

}
}
}
}
}


