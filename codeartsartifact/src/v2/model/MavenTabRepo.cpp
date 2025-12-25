

#include "huaweicloud/codeartsartifact/v2/model/MavenTabRepo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




MavenTabRepo::MavenTabRepo()
{
    release_ = "";
    releaseIsSet_ = false;
    snapshot_ = "";
    snapshotIsSet_ = false;
}

MavenTabRepo::~MavenTabRepo() = default;

void MavenTabRepo::validate()
{
}

web::json::value MavenTabRepo::toJson() const
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
bool MavenTabRepo::fromJson(const web::json::value& val)
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


std::string MavenTabRepo::getRelease() const
{
    return release_;
}

void MavenTabRepo::setRelease(const std::string& value)
{
    release_ = value;
    releaseIsSet_ = true;
}

bool MavenTabRepo::releaseIsSet() const
{
    return releaseIsSet_;
}

void MavenTabRepo::unsetrelease()
{
    releaseIsSet_ = false;
}

std::string MavenTabRepo::getSnapshot() const
{
    return snapshot_;
}

void MavenTabRepo::setSnapshot(const std::string& value)
{
    snapshot_ = value;
    snapshotIsSet_ = true;
}

bool MavenTabRepo::snapshotIsSet() const
{
    return snapshotIsSet_;
}

void MavenTabRepo::unsetsnapshot()
{
    snapshotIsSet_ = false;
}

}
}
}
}
}


