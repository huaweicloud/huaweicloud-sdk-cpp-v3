

#include "huaweicloud/ims/v2/model/ListOsVersionsResponseBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




ListOsVersionsResponseBody::ListOsVersionsResponseBody()
{
    platform_ = "";
    platformIsSet_ = false;
    versionListIsSet_ = false;
}

ListOsVersionsResponseBody::~ListOsVersionsResponseBody() = default;

void ListOsVersionsResponseBody::validate()
{
}

web::json::value ListOsVersionsResponseBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(platformIsSet_) {
        val[utility::conversions::to_string_t("platform")] = ModelBase::toJson(platform_);
    }
    if(versionListIsSet_) {
        val[utility::conversions::to_string_t("version_list")] = ModelBase::toJson(versionList_);
    }

    return val;
}
bool ListOsVersionsResponseBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("platform"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("platform"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlatform(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_list"));
        if(!fieldValue.is_null())
        {
            std::vector<OsVersionInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionList(refVal);
        }
    }
    return ok;
}


std::string ListOsVersionsResponseBody::getPlatform() const
{
    return platform_;
}

void ListOsVersionsResponseBody::setPlatform(const std::string& value)
{
    platform_ = value;
    platformIsSet_ = true;
}

bool ListOsVersionsResponseBody::platformIsSet() const
{
    return platformIsSet_;
}

void ListOsVersionsResponseBody::unsetplatform()
{
    platformIsSet_ = false;
}

std::vector<OsVersionInfo>& ListOsVersionsResponseBody::getVersionList()
{
    return versionList_;
}

void ListOsVersionsResponseBody::setVersionList(const std::vector<OsVersionInfo>& value)
{
    versionList_ = value;
    versionListIsSet_ = true;
}

bool ListOsVersionsResponseBody::versionListIsSet() const
{
    return versionListIsSet_;
}

void ListOsVersionsResponseBody::unsetversionList()
{
    versionListIsSet_ = false;
}

}
}
}
}
}


