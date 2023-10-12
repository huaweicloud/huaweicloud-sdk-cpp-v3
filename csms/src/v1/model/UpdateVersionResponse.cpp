

#include "huaweicloud/csms/v1/model/UpdateVersionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




UpdateVersionResponse::UpdateVersionResponse()
{
    versionMetadataIsSet_ = false;
}

UpdateVersionResponse::~UpdateVersionResponse() = default;

void UpdateVersionResponse::validate()
{
}

web::json::value UpdateVersionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(versionMetadataIsSet_) {
        val[utility::conversions::to_string_t("version_metadata")] = ModelBase::toJson(versionMetadata_);
    }

    return val;
}
bool UpdateVersionResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("version_metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_metadata"));
        if(!fieldValue.is_null())
        {
            VersionMetadata refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionMetadata(refVal);
        }
    }
    return ok;
}


VersionMetadata UpdateVersionResponse::getVersionMetadata() const
{
    return versionMetadata_;
}

void UpdateVersionResponse::setVersionMetadata(const VersionMetadata& value)
{
    versionMetadata_ = value;
    versionMetadataIsSet_ = true;
}

bool UpdateVersionResponse::versionMetadataIsSet() const
{
    return versionMetadataIsSet_;
}

void UpdateVersionResponse::unsetversionMetadata()
{
    versionMetadataIsSet_ = false;
}

}
}
}
}
}


