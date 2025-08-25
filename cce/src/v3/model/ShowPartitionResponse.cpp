

#include "huaweicloud/cce/v3/model/ShowPartitionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ShowPartitionResponse::ShowPartitionResponse()
{
    kind_ = "";
    kindIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
}

ShowPartitionResponse::~ShowPartitionResponse() = default;

void ShowPartitionResponse::validate()
{
}

web::json::value ShowPartitionResponse::toJson() const
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
bool ShowPartitionResponse::fromJson(const web::json::value& val)
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


std::string ShowPartitionResponse::getKind() const
{
    return kind_;
}

void ShowPartitionResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool ShowPartitionResponse::kindIsSet() const
{
    return kindIsSet_;
}

void ShowPartitionResponse::unsetkind()
{
    kindIsSet_ = false;
}

std::string ShowPartitionResponse::getApiVersion() const
{
    return apiVersion_;
}

void ShowPartitionResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool ShowPartitionResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void ShowPartitionResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

Partition_metadata ShowPartitionResponse::getMetadata() const
{
    return metadata_;
}

void ShowPartitionResponse::setMetadata(const Partition_metadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool ShowPartitionResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void ShowPartitionResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

Partition_spec ShowPartitionResponse::getSpec() const
{
    return spec_;
}

void ShowPartitionResponse::setSpec(const Partition_spec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool ShowPartitionResponse::specIsSet() const
{
    return specIsSet_;
}

void ShowPartitionResponse::unsetspec()
{
    specIsSet_ = false;
}

}
}
}
}
}


