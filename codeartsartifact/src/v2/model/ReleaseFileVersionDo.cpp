

#include "huaweicloud/codeartsartifact/v2/model/ReleaseFileVersionDo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ReleaseFileVersionDo::ReleaseFileVersionDo()
{
    version_ = "";
    versionIsSet_ = false;
    path_ = "";
    pathIsSet_ = false;
    downloadUrl_ = "";
    downloadUrlIsSet_ = false;
}

ReleaseFileVersionDo::~ReleaseFileVersionDo() = default;

void ReleaseFileVersionDo::validate()
{
}

web::json::value ReleaseFileVersionDo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(pathIsSet_) {
        val[utility::conversions::to_string_t("path")] = ModelBase::toJson(path_);
    }
    if(downloadUrlIsSet_) {
        val[utility::conversions::to_string_t("download_url")] = ModelBase::toJson(downloadUrl_);
    }

    return val;
}
bool ReleaseFileVersionDo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("download_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("download_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDownloadUrl(refVal);
        }
    }
    return ok;
}


std::string ReleaseFileVersionDo::getVersion() const
{
    return version_;
}

void ReleaseFileVersionDo::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ReleaseFileVersionDo::versionIsSet() const
{
    return versionIsSet_;
}

void ReleaseFileVersionDo::unsetversion()
{
    versionIsSet_ = false;
}

std::string ReleaseFileVersionDo::getPath() const
{
    return path_;
}

void ReleaseFileVersionDo::setPath(const std::string& value)
{
    path_ = value;
    pathIsSet_ = true;
}

bool ReleaseFileVersionDo::pathIsSet() const
{
    return pathIsSet_;
}

void ReleaseFileVersionDo::unsetpath()
{
    pathIsSet_ = false;
}

std::string ReleaseFileVersionDo::getDownloadUrl() const
{
    return downloadUrl_;
}

void ReleaseFileVersionDo::setDownloadUrl(const std::string& value)
{
    downloadUrl_ = value;
    downloadUrlIsSet_ = true;
}

bool ReleaseFileVersionDo::downloadUrlIsSet() const
{
    return downloadUrlIsSet_;
}

void ReleaseFileVersionDo::unsetdownloadUrl()
{
    downloadUrlIsSet_ = false;
}

}
}
}
}
}


