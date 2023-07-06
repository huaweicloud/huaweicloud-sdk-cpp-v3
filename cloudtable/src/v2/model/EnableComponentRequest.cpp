

#include "huaweicloud/cloudtable/v2/model/EnableComponentRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtable {
namespace V2 {
namespace Model {




EnableComponentRequest::EnableComponentRequest()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    componentName_ = "";
    componentNameIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

EnableComponentRequest::~EnableComponentRequest() = default;

void EnableComponentRequest::validate()
{
}

web::json::value EnableComponentRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(componentNameIsSet_) {
        val[utility::conversions::to_string_t("component_name")] = ModelBase::toJson(componentName_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool EnableComponentRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cluster_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("component_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("component_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComponentName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            AddComponentReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string EnableComponentRequest::getClusterId() const
{
    return clusterId_;
}

void EnableComponentRequest::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool EnableComponentRequest::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void EnableComponentRequest::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string EnableComponentRequest::getComponentName() const
{
    return componentName_;
}

void EnableComponentRequest::setComponentName(const std::string& value)
{
    componentName_ = value;
    componentNameIsSet_ = true;
}

bool EnableComponentRequest::componentNameIsSet() const
{
    return componentNameIsSet_;
}

void EnableComponentRequest::unsetcomponentName()
{
    componentNameIsSet_ = false;
}

std::string EnableComponentRequest::getXLanguage() const
{
    return xLanguage_;
}

void EnableComponentRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool EnableComponentRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void EnableComponentRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

AddComponentReq EnableComponentRequest::getBody() const
{
    return body_;
}

void EnableComponentRequest::setBody(const AddComponentReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool EnableComponentRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void EnableComponentRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


