

#include "huaweicloud/cloudtest/v1/model/InitExecuteTaskInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




InitExecuteTaskInfo::InitExecuteTaskInfo()
{
    releaseDev_ = "";
    releaseDevIsSet_ = false;
    versionUri_ = "";
    versionUriIsSet_ = false;
    isQuery_ = false;
    isQueryIsSet_ = false;
}

InitExecuteTaskInfo::~InitExecuteTaskInfo() = default;

void InitExecuteTaskInfo::validate()
{
}

web::json::value InitExecuteTaskInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(releaseDevIsSet_) {
        val[utility::conversions::to_string_t("release_dev")] = ModelBase::toJson(releaseDev_);
    }
    if(versionUriIsSet_) {
        val[utility::conversions::to_string_t("version_uri")] = ModelBase::toJson(versionUri_);
    }
    if(isQueryIsSet_) {
        val[utility::conversions::to_string_t("is_query")] = ModelBase::toJson(isQuery_);
    }

    return val;
}
bool InitExecuteTaskInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("release_dev"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("release_dev"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReleaseDev(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_query"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_query"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsQuery(refVal);
        }
    }
    return ok;
}


std::string InitExecuteTaskInfo::getReleaseDev() const
{
    return releaseDev_;
}

void InitExecuteTaskInfo::setReleaseDev(const std::string& value)
{
    releaseDev_ = value;
    releaseDevIsSet_ = true;
}

bool InitExecuteTaskInfo::releaseDevIsSet() const
{
    return releaseDevIsSet_;
}

void InitExecuteTaskInfo::unsetreleaseDev()
{
    releaseDevIsSet_ = false;
}

std::string InitExecuteTaskInfo::getVersionUri() const
{
    return versionUri_;
}

void InitExecuteTaskInfo::setVersionUri(const std::string& value)
{
    versionUri_ = value;
    versionUriIsSet_ = true;
}

bool InitExecuteTaskInfo::versionUriIsSet() const
{
    return versionUriIsSet_;
}

void InitExecuteTaskInfo::unsetversionUri()
{
    versionUriIsSet_ = false;
}

bool InitExecuteTaskInfo::isIsQuery() const
{
    return isQuery_;
}

void InitExecuteTaskInfo::setIsQuery(bool value)
{
    isQuery_ = value;
    isQueryIsSet_ = true;
}

bool InitExecuteTaskInfo::isQueryIsSet() const
{
    return isQueryIsSet_;
}

void InitExecuteTaskInfo::unsetisQuery()
{
    isQueryIsSet_ = false;
}

}
}
}
}
}


