

#include "huaweicloud/ecs/v2/model/UpdateServerMetadataRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




UpdateServerMetadataRequestBody::UpdateServerMetadataRequestBody()
{
    metadataIsSet_ = false;
}

UpdateServerMetadataRequestBody::~UpdateServerMetadataRequestBody() = default;

void UpdateServerMetadataRequestBody::validate()
{
}

web::json::value UpdateServerMetadataRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(metadataIsSet_) {
        val[utility::conversions::to_string_t("metadata")] = ModelBase::toJson(metadata_);
    }

    return val;
}
bool UpdateServerMetadataRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    return ok;
}


std::map<std::string, std::string>& UpdateServerMetadataRequestBody::getMetadata()
{
    return metadata_;
}

void UpdateServerMetadataRequestBody::setMetadata(const std::map<std::string, std::string>& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool UpdateServerMetadataRequestBody::metadataIsSet() const
{
    return metadataIsSet_;
}

void UpdateServerMetadataRequestBody::unsetmetadata()
{
    metadataIsSet_ = false;
}

}
}
}
}
}


