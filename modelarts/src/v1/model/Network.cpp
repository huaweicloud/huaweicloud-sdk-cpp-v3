

#include "huaweicloud/modelarts/v1/model/Network.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




Network::Network()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
    statusIsSet_ = false;
}

Network::~Network() = default;

void Network::validate()
{
}

web::json::value Network::toJson() const
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
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool Network::fromJson(const web::json::value& val)
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
            NetworkMetadata refVal;
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            NetworkStatus refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string Network::getApiVersion() const
{
    return apiVersion_;
}

void Network::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool Network::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void Network::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string Network::getKind() const
{
    return kind_;
}

void Network::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool Network::kindIsSet() const
{
    return kindIsSet_;
}

void Network::unsetkind()
{
    kindIsSet_ = false;
}

NetworkMetadata Network::getMetadata() const
{
    return metadata_;
}

void Network::setMetadata(const NetworkMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool Network::metadataIsSet() const
{
    return metadataIsSet_;
}

void Network::unsetmetadata()
{
    metadataIsSet_ = false;
}

NetworkSpec Network::getSpec() const
{
    return spec_;
}

void Network::setSpec(const NetworkSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool Network::specIsSet() const
{
    return specIsSet_;
}

void Network::unsetspec()
{
    specIsSet_ = false;
}

NetworkStatus Network::getStatus() const
{
    return status_;
}

void Network::setStatus(const NetworkStatus& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool Network::statusIsSet() const
{
    return statusIsSet_;
}

void Network::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


