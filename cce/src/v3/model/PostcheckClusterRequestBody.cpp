

#include "huaweicloud/cce/v3/model/PostcheckClusterRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




PostcheckClusterRequestBody::PostcheckClusterRequestBody()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    specIsSet_ = false;
}

PostcheckClusterRequestBody::~PostcheckClusterRequestBody() = default;

void PostcheckClusterRequestBody::validate()
{
}

web::json::value PostcheckClusterRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(apiVersionIsSet_) {
        val[utility::conversions::to_string_t("apiVersion")] = ModelBase::toJson(apiVersion_);
    }
    if(kindIsSet_) {
        val[utility::conversions::to_string_t("kind")] = ModelBase::toJson(kind_);
    }
    if(specIsSet_) {
        val[utility::conversions::to_string_t("spec")] = ModelBase::toJson(spec_);
    }

    return val;
}
bool PostcheckClusterRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("spec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec"));
        if(!fieldValue.is_null())
        {
            PostcheckSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpec(refVal);
        }
    }
    return ok;
}


std::string PostcheckClusterRequestBody::getApiVersion() const
{
    return apiVersion_;
}

void PostcheckClusterRequestBody::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool PostcheckClusterRequestBody::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void PostcheckClusterRequestBody::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string PostcheckClusterRequestBody::getKind() const
{
    return kind_;
}

void PostcheckClusterRequestBody::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool PostcheckClusterRequestBody::kindIsSet() const
{
    return kindIsSet_;
}

void PostcheckClusterRequestBody::unsetkind()
{
    kindIsSet_ = false;
}

PostcheckSpec PostcheckClusterRequestBody::getSpec() const
{
    return spec_;
}

void PostcheckClusterRequestBody::setSpec(const PostcheckSpec& value)
{
    spec_ = value;
    specIsSet_ = true;
}

bool PostcheckClusterRequestBody::specIsSet() const
{
    return specIsSet_;
}

void PostcheckClusterRequestBody::unsetspec()
{
    specIsSet_ = false;
}

}
}
}
}
}


