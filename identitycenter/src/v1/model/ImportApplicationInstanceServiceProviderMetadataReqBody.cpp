

#include "huaweicloud/identitycenter/v1/model/ImportApplicationInstanceServiceProviderMetadataReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




ImportApplicationInstanceServiceProviderMetadataReqBody::ImportApplicationInstanceServiceProviderMetadataReqBody()
{
    metadata_ = "";
    metadataIsSet_ = false;
}

ImportApplicationInstanceServiceProviderMetadataReqBody::~ImportApplicationInstanceServiceProviderMetadataReqBody() = default;

void ImportApplicationInstanceServiceProviderMetadataReqBody::validate()
{
}

web::json::value ImportApplicationInstanceServiceProviderMetadataReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(metadataIsSet_) {
        val[utility::conversions::to_string_t("metadata")] = ModelBase::toJson(metadata_);
    }

    return val;
}
bool ImportApplicationInstanceServiceProviderMetadataReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    return ok;
}


std::string ImportApplicationInstanceServiceProviderMetadataReqBody::getMetadata() const
{
    return metadata_;
}

void ImportApplicationInstanceServiceProviderMetadataReqBody::setMetadata(const std::string& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool ImportApplicationInstanceServiceProviderMetadataReqBody::metadataIsSet() const
{
    return metadataIsSet_;
}

void ImportApplicationInstanceServiceProviderMetadataReqBody::unsetmetadata()
{
    metadataIsSet_ = false;
}

}
}
}
}
}


