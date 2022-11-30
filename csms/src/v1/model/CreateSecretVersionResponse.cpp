

#include "huaweicloud/csms/v1/model/CreateSecretVersionResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




CreateSecretVersionResponse::CreateSecretVersionResponse()
{
    versionMetadataIsSet_ = false;
}

CreateSecretVersionResponse::~CreateSecretVersionResponse() = default;

void CreateSecretVersionResponse::validate()
{
}

web::json::value CreateSecretVersionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(versionMetadataIsSet_) {
        val[utility::conversions::to_string_t("version_metadata")] = ModelBase::toJson(versionMetadata_);
    }

    return val;
}

bool CreateSecretVersionResponse::fromJson(const web::json::value& val)
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


VersionMetadata CreateSecretVersionResponse::getVersionMetadata() const
{
    return versionMetadata_;
}

void CreateSecretVersionResponse::setVersionMetadata(const VersionMetadata& value)
{
    versionMetadata_ = value;
    versionMetadataIsSet_ = true;
}

bool CreateSecretVersionResponse::versionMetadataIsSet() const
{
    return versionMetadataIsSet_;
}

void CreateSecretVersionResponse::unsetversionMetadata()
{
    versionMetadataIsSet_ = false;
}

}
}
}
}
}


