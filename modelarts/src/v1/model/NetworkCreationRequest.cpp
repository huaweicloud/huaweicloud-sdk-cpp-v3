

#include "huaweicloud/modelarts/v1/model/NetworkCreationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




NetworkCreationRequest::NetworkCreationRequest()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
}

NetworkCreationRequest::~NetworkCreationRequest() = default;

void NetworkCreationRequest::validate()
{
}

web::json::value NetworkCreationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(apiVersionIsSet_) {
        val[utility::conversions::to_string_t("apiVersion")] = ModelBase::toJson(apiVersion_);
    }
    if(kindIsSet_) {
        val[utility::conversions::to_string_t("kind")] = ModelBase::toJson(kind_);
    }
    if(metadataIsSet_) {
        val[utility::conversions::to_string_t("metadata")] = ModelBase::toJson(metadata_);
    }
    if(specIsSet_) {
        val[utility::conversions::to_string_t("spec")] = ModelBase::toJson(spec_);
    }

    return val;
}
bool NetworkCreationRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("apiVersion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("apiVersion"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApiVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("kind"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kind"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKind(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            NetworkMetadataCreation refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec"));
        if(!fieldValue.is_null())
        {
            NetworkSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    return ok;
}


std::string NetworkCreationRequest::getApiVersion() const
{
    return apiVersion_;
}

void NetworkCreationRequest::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool NetworkCreationRequest::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void NetworkCreationRequest::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string NetworkCreationRequest::getKind() const
{
    return kind_;
}

void NetworkCreationRequest::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool NetworkCreationRequest::kindIsSet() const
{
    return kindIsSet_;
}

void NetworkCreationRequest::unsetkind()
{
    kindIsSet_ = false;
}

NetworkMetadataCreation NetworkCreationRequest::getMetadata() const
{
    return metadata_;
}

void NetworkCreationRequest::setMetadata(const NetworkMetadataCreation& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool NetworkCreationRequest::metadataIsSet() const
{
    return metadataIsSet_;
}

void NetworkCreationRequest::unsetmetadata()
{
    metadataIsSet_ = false;
}

NetworkSpec NetworkCreationRequest::getSpec() const
{
    return spec_;
}

void NetworkCreationRequest::setSpec(const NetworkSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool NetworkCreationRequest::specIsSet() const
{
    return specIsSet_;
}

void NetworkCreationRequest::unsetspec()
{
    specIsSet_ = false;
}

}
}
}
}
}


