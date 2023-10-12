

#include "huaweicloud/csms/v1/model/ShowSecretVersionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




ShowSecretVersionResponse::ShowSecretVersionResponse()
{
    versionIsSet_ = false;
}

ShowSecretVersionResponse::~ShowSecretVersionResponse() = default;

void ShowSecretVersionResponse::validate()
{
}

web::json::value ShowSecretVersionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }

    return val;
}
bool ShowSecretVersionResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            Version refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    return ok;
}


Version ShowSecretVersionResponse::getVersion() const
{
    return version_;
}

void ShowSecretVersionResponse::setVersion(const Version& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ShowSecretVersionResponse::versionIsSet() const
{
    return versionIsSet_;
}

void ShowSecretVersionResponse::unsetversion()
{
    versionIsSet_ = false;
}

}
}
}
}
}


