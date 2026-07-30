

#include "huaweicloud/modelarts/v1/model/CreateNodePoolRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateNodePoolRequestBody::CreateNodePoolRequestBody()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    metadataIsSet_ = false;
    specIsSet_ = false;
}

CreateNodePoolRequestBody::~CreateNodePoolRequestBody() = default;

void CreateNodePoolRequestBody::validate()
{
}

web::json::value CreateNodePoolRequestBody::toJson() const
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
bool CreateNodePoolRequestBody::fromJson(const web::json::value& val)
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
            CreateNodePoolMetaVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec"));
        if(!fieldValue.is_null())
        {
            NodePoolSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    return ok;
}


std::string CreateNodePoolRequestBody::getApiVersion() const
{
    return apiVersion_;
}

void CreateNodePoolRequestBody::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool CreateNodePoolRequestBody::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void CreateNodePoolRequestBody::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string CreateNodePoolRequestBody::getKind() const
{
    return kind_;
}

void CreateNodePoolRequestBody::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool CreateNodePoolRequestBody::kindIsSet() const
{
    return kindIsSet_;
}

void CreateNodePoolRequestBody::unsetkind()
{
    kindIsSet_ = false;
}

CreateNodePoolMetaVO CreateNodePoolRequestBody::getMetadata() const
{
    return metadata_;
}

void CreateNodePoolRequestBody::setMetadata(const CreateNodePoolMetaVO& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool CreateNodePoolRequestBody::metadataIsSet() const
{
    return metadataIsSet_;
}

void CreateNodePoolRequestBody::unsetmetadata()
{
    metadataIsSet_ = false;
}

NodePoolSpec CreateNodePoolRequestBody::getSpec() const
{
    return spec_;
}

void CreateNodePoolRequestBody::setSpec(const NodePoolSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool CreateNodePoolRequestBody::specIsSet() const
{
    return specIsSet_;
}

void CreateNodePoolRequestBody::unsetspec()
{
    specIsSet_ = false;
}

}
}
}
}
}


