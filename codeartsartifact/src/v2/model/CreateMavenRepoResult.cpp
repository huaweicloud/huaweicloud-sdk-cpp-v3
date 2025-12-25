

#include "huaweicloud/codeartsartifact/v2/model/CreateMavenRepoResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




CreateMavenRepoResult::CreateMavenRepoResult()
{
    release_ = "";
    releaseIsSet_ = false;
    snapshot_ = "";
    snapshotIsSet_ = false;
}

CreateMavenRepoResult::~CreateMavenRepoResult() = default;

void CreateMavenRepoResult::validate()
{
}

web::json::value CreateMavenRepoResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(releaseIsSet_) {
        val[utility::conversions::to_string_t("release")] = ModelBase::toJson(release_);
    }
    if(snapshotIsSet_) {
        val[utility::conversions::to_string_t("snapshot")] = ModelBase::toJson(snapshot_);
    }

    return val;
}
bool CreateMavenRepoResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("release"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("release"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRelease(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("snapshot"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("snapshot"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnapshot(refVal);
        }
    }
    return ok;
}


std::string CreateMavenRepoResult::getRelease() const
{
    return release_;
}

void CreateMavenRepoResult::setRelease(const std::string& value)
{
    release_ = value;
    releaseIsSet_ = true;
}

bool CreateMavenRepoResult::releaseIsSet() const
{
    return releaseIsSet_;
}

void CreateMavenRepoResult::unsetrelease()
{
    releaseIsSet_ = false;
}

std::string CreateMavenRepoResult::getSnapshot() const
{
    return snapshot_;
}

void CreateMavenRepoResult::setSnapshot(const std::string& value)
{
    snapshot_ = value;
    snapshotIsSet_ = true;
}

bool CreateMavenRepoResult::snapshotIsSet() const
{
    return snapshotIsSet_;
}

void CreateMavenRepoResult::unsetsnapshot()
{
    snapshotIsSet_ = false;
}

}
}
}
}
}


