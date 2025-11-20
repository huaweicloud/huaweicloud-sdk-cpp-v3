

#include "huaweicloud/cce/v3/model/PartitionReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




PartitionReqBody::PartitionReqBody()
{
    kind_ = "";
    kindIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
}

PartitionReqBody::~PartitionReqBody() = default;

void PartitionReqBody::validate()
{
}

web::json::value PartitionReqBody::toJson() const
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
bool PartitionReqBody::fromJson(const web::json::value& val)
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
            PartitionReqBody_metadata refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec"));
        if(!fieldValue.is_null())
        {
            PartitionReqBody_spec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    return ok;
}


std::string PartitionReqBody::getKind() const
{
    return kind_;
}

void PartitionReqBody::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool PartitionReqBody::kindIsSet() const
{
    return kindIsSet_;
}

void PartitionReqBody::unsetkind()
{
    kindIsSet_ = false;
}

std::string PartitionReqBody::getApiVersion() const
{
    return apiVersion_;
}

void PartitionReqBody::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool PartitionReqBody::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void PartitionReqBody::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

PartitionReqBody_metadata PartitionReqBody::getMetadata() const
{
    return metadata_;
}

void PartitionReqBody::setMetadata(const PartitionReqBody_metadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool PartitionReqBody::metadataIsSet() const
{
    return metadataIsSet_;
}

void PartitionReqBody::unsetmetadata()
{
    metadataIsSet_ = false;
}

PartitionReqBody_spec PartitionReqBody::getSpec() const
{
    return spec_;
}

void PartitionReqBody::setSpec(const PartitionReqBody_spec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool PartitionReqBody::specIsSet() const
{
    return specIsSet_;
}

void PartitionReqBody::unsetspec()
{
    specIsSet_ = false;
}

}
}
}
}
}


