

#include "huaweicloud/rds/v3/model/ShowApiVersionResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowApiVersionResponse::ShowApiVersionResponse()
{
    versionsIsSet_ = false;
    versionIsSet_ = false;
}

ShowApiVersionResponse::~ShowApiVersionResponse() = default;

void ShowApiVersionResponse::validate()
{
}

web::json::value ShowApiVersionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(versionsIsSet_) {
        val[utility::conversions::to_string_t("versions")] = ModelBase::toJson(versions_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }

    return val;
}

bool ShowApiVersionResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("versions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("versions"));
        if(!fieldValue.is_null())
        {
            ApiVersion refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            ApiVersion refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    return ok;
}

ApiVersion ShowApiVersionResponse::getVersions() const
{
    return versions_;
}

void ShowApiVersionResponse::setVersions(const ApiVersion& value)
{
    versions_ = value;
    versionsIsSet_ = true;
}

bool ShowApiVersionResponse::versionsIsSet() const
{
    return versionsIsSet_;
}

void ShowApiVersionResponse::unsetversions()
{
    versionsIsSet_ = false;
}

ApiVersion ShowApiVersionResponse::getVersion() const
{
    return version_;
}

void ShowApiVersionResponse::setVersion(const ApiVersion& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ShowApiVersionResponse::versionIsSet() const
{
    return versionIsSet_;
}

void ShowApiVersionResponse::unsetversion()
{
    versionIsSet_ = false;
}

}
}
}
}
}


