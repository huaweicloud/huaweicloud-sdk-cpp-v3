

#include "huaweicloud/modelarts/v1/model/ObjectReference.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ObjectReference::ObjectReference()
{
    kind_ = "";
    kindIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    namespace_ = "";
    namespaceIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    uid_ = "";
    uidIsSet_ = false;
    resourceVersion_ = "";
    resourceVersionIsSet_ = false;
}

ObjectReference::~ObjectReference() = default;

void ObjectReference::validate()
{
}

web::json::value ObjectReference::toJson() const
{
    web::json::value val = web::json::value::object();

    if(kindIsSet_) {
        val[utility::conversions::to_string_t("kind")] = ModelBase::toJson(kind_);
    }
    if(apiVersionIsSet_) {
        val[utility::conversions::to_string_t("apiVersion")] = ModelBase::toJson(apiVersion_);
    }
    if(namespaceIsSet_) {
        val[utility::conversions::to_string_t("namespace")] = ModelBase::toJson(namespace_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(uidIsSet_) {
        val[utility::conversions::to_string_t("uid")] = ModelBase::toJson(uid_);
    }
    if(resourceVersionIsSet_) {
        val[utility::conversions::to_string_t("resourceVersion")] = ModelBase::toJson(resourceVersion_);
    }

    return val;
}
bool ObjectReference::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("namespace"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("namespace"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNamespace(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("uid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resourceVersion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resourceVersion"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceVersion(refVal);
        }
    }
    return ok;
}


std::string ObjectReference::getKind() const
{
    return kind_;
}

void ObjectReference::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool ObjectReference::kindIsSet() const
{
    return kindIsSet_;
}

void ObjectReference::unsetkind()
{
    kindIsSet_ = false;
}

std::string ObjectReference::getApiVersion() const
{
    return apiVersion_;
}

void ObjectReference::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool ObjectReference::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void ObjectReference::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string ObjectReference::getNamespace() const
{
    return namespace_;
}

void ObjectReference::setNamespace(const std::string& value)
{
    namespace_ = value;
    namespaceIsSet_ = true;
}

bool ObjectReference::namespaceIsSet() const
{
    return namespaceIsSet_;
}

void ObjectReference::unsetnamespace()
{
    namespaceIsSet_ = false;
}

std::string ObjectReference::getName() const
{
    return name_;
}

void ObjectReference::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ObjectReference::nameIsSet() const
{
    return nameIsSet_;
}

void ObjectReference::unsetname()
{
    nameIsSet_ = false;
}

std::string ObjectReference::getUid() const
{
    return uid_;
}

void ObjectReference::setUid(const std::string& value)
{
    uid_ = value;
    uidIsSet_ = true;
}

bool ObjectReference::uidIsSet() const
{
    return uidIsSet_;
}

void ObjectReference::unsetuid()
{
    uidIsSet_ = false;
}

std::string ObjectReference::getResourceVersion() const
{
    return resourceVersion_;
}

void ObjectReference::setResourceVersion(const std::string& value)
{
    resourceVersion_ = value;
    resourceVersionIsSet_ = true;
}

bool ObjectReference::resourceVersionIsSet() const
{
    return resourceVersionIsSet_;
}

void ObjectReference::unsetresourceVersion()
{
    resourceVersionIsSet_ = false;
}

}
}
}
}
}


