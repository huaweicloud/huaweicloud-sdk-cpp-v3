

#include "huaweicloud/ecs/v2/model/UpdateServerMetadataResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




UpdateServerMetadataResponse::UpdateServerMetadataResponse()
{
    metadataIsSet_ = false;
}

UpdateServerMetadataResponse::~UpdateServerMetadataResponse() = default;

void UpdateServerMetadataResponse::validate()
{
}

web::json::value UpdateServerMetadataResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(metadataIsSet_) {
        val[utility::conversions::to_string_t("metadata")] = ModelBase::toJson(metadata_);
    }

    return val;
}
bool UpdateServerMetadataResponse::fromJson(const web::json::value& val)
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


std::map<std::string, std::string>& UpdateServerMetadataResponse::getMetadata()
{
    return metadata_;
}

void UpdateServerMetadataResponse::setMetadata(const std::map<std::string, std::string>& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool UpdateServerMetadataResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void UpdateServerMetadataResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

}
}
}
}
}


