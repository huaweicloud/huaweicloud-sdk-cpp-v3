

#include "huaweicloud/rgc/v1/model/LandingZoneVersionDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




LandingZoneVersionDetail::LandingZoneVersionDetail()
{
    version_ = "";
    versionIsSet_ = false;
    releaseDate_ = "";
    releaseDateIsSet_ = false;
    releaseNotes_ = "";
    releaseNotesIsSet_ = false;
}

LandingZoneVersionDetail::~LandingZoneVersionDetail() = default;

void LandingZoneVersionDetail::validate()
{
}

web::json::value LandingZoneVersionDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(releaseDateIsSet_) {
        val[utility::conversions::to_string_t("release_date")] = ModelBase::toJson(releaseDate_);
    }
    if(releaseNotesIsSet_) {
        val[utility::conversions::to_string_t("release_notes")] = ModelBase::toJson(releaseNotes_);
    }

    return val;
}
bool LandingZoneVersionDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("release_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("release_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReleaseDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("release_notes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("release_notes"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReleaseNotes(refVal);
        }
    }
    return ok;
}


std::string LandingZoneVersionDetail::getVersion() const
{
    return version_;
}

void LandingZoneVersionDetail::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool LandingZoneVersionDetail::versionIsSet() const
{
    return versionIsSet_;
}

void LandingZoneVersionDetail::unsetversion()
{
    versionIsSet_ = false;
}

std::string LandingZoneVersionDetail::getReleaseDate() const
{
    return releaseDate_;
}

void LandingZoneVersionDetail::setReleaseDate(const std::string& value)
{
    releaseDate_ = value;
    releaseDateIsSet_ = true;
}

bool LandingZoneVersionDetail::releaseDateIsSet() const
{
    return releaseDateIsSet_;
}

void LandingZoneVersionDetail::unsetreleaseDate()
{
    releaseDateIsSet_ = false;
}

std::string LandingZoneVersionDetail::getReleaseNotes() const
{
    return releaseNotes_;
}

void LandingZoneVersionDetail::setReleaseNotes(const std::string& value)
{
    releaseNotes_ = value;
    releaseNotesIsSet_ = true;
}

bool LandingZoneVersionDetail::releaseNotesIsSet() const
{
    return releaseNotesIsSet_;
}

void LandingZoneVersionDetail::unsetreleaseNotes()
{
    releaseNotesIsSet_ = false;
}

}
}
}
}
}


