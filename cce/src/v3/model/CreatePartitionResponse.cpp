

#include "huaweicloud/cce/v3/model/CreatePartitionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




CreatePartitionResponse::CreatePartitionResponse()
{
    kind_ = "";
    kindIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
}

CreatePartitionResponse::~CreatePartitionResponse() = default;

void CreatePartitionResponse::validate()
{
}

web::json::value CreatePartitionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(kindIsSet_) {
        val[utility::conversions::to_string_t("kind")] = ModelBase::toJson(kind_);
    }
    if(apiVersionIsSet_) {
        val[utility::conversions::to_string_t("apiVersion")] = ModelBase::toJson(apiVersion_);
    }
    if(metadataIsSet_) {
        val[utility::conversions::to_string_t("metadata")] = ModelBase::toJson(metadata_);
    }
    if(specIsSet_) {
        val[utility::conversions::to_string_t("spec")] = ModelBase::toJson(spec_);
    }

    return val;
}
bool CreatePartitionResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("kind"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kind"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKind(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("apiVersion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("apiVersion"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApiVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            Partition_metadata refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec"));
        if(!fieldValue.is_null())
        {
            Partition_spec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    return ok;
}


std::string CreatePartitionResponse::getKind() const
{
    return kind_;
}

void CreatePartitionResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool CreatePartitionResponse::kindIsSet() const
{
    return kindIsSet_;
}

void CreatePartitionResponse::unsetkind()
{
    kindIsSet_ = false;
}

std::string CreatePartitionResponse::getApiVersion() const
{
    return apiVersion_;
}

void CreatePartitionResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool CreatePartitionResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void CreatePartitionResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

Partition_metadata CreatePartitionResponse::getMetadata() const
{
    return metadata_;
}

void CreatePartitionResponse::setMetadata(const Partition_metadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool CreatePartitionResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void CreatePartitionResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

Partition_spec CreatePartitionResponse::getSpec() const
{
    return spec_;
}

void CreatePartitionResponse::setSpec(const Partition_spec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool CreatePartitionResponse::specIsSet() const
{
    return specIsSet_;
}

void CreatePartitionResponse::unsetspec()
{
    specIsSet_ = false;
}

}
}
}
}
}


