

#include "huaweicloud/modelarts/v1/model/ListInferApiKeysRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListInferApiKeysRequest::ListInferApiKeysRequest()
{
    scope_ = "";
    scopeIsSet_ = false;
    serviceId_ = "";
    serviceIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    serviceName_ = "";
    serviceNameIsSet_ = false;
    keyId_ = "";
    keyIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
    withUserScope_ = false;
    withUserScopeIsSet_ = false;
}

ListInferApiKeysRequest::~ListInferApiKeysRequest() = default;

void ListInferApiKeysRequest::validate()
{
}

web::json::value ListInferApiKeysRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(scopeIsSet_) {
        val[utility::conversions::to_string_t("scope")] = ModelBase::toJson(scope_);
    }
    if(serviceIdIsSet_) {
        val[utility::conversions::to_string_t("service_id")] = ModelBase::toJson(serviceId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(serviceNameIsSet_) {
        val[utility::conversions::to_string_t("service_name")] = ModelBase::toJson(serviceName_);
    }
    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }
    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }
    if(withUserScopeIsSet_) {
        val[utility::conversions::to_string_t("with_user_scope")] = ModelBase::toJson(withUserScope_);
    }

    return val;
}
bool ListInferApiKeysRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("scope"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scope"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScope(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("service_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Content-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Content-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("workspace_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workspace_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkspaceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("with_user_scope"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("with_user_scope"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWithUserScope(refVal);
        }
    }
    return ok;
}


std::string ListInferApiKeysRequest::getScope() const
{
    return scope_;
}

void ListInferApiKeysRequest::setScope(const std::string& value)
{
    scope_ = value;
    scopeIsSet_ = true;
}

bool ListInferApiKeysRequest::scopeIsSet() const
{
    return scopeIsSet_;
}

void ListInferApiKeysRequest::unsetscope()
{
    scopeIsSet_ = false;
}

std::string ListInferApiKeysRequest::getServiceId() const
{
    return serviceId_;
}

void ListInferApiKeysRequest::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool ListInferApiKeysRequest::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void ListInferApiKeysRequest::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::string ListInferApiKeysRequest::getName() const
{
    return name_;
}

void ListInferApiKeysRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListInferApiKeysRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListInferApiKeysRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListInferApiKeysRequest::getServiceName() const
{
    return serviceName_;
}

void ListInferApiKeysRequest::setServiceName(const std::string& value)
{
    serviceName_ = value;
    serviceNameIsSet_ = true;
}

bool ListInferApiKeysRequest::serviceNameIsSet() const
{
    return serviceNameIsSet_;
}

void ListInferApiKeysRequest::unsetserviceName()
{
    serviceNameIsSet_ = false;
}

std::string ListInferApiKeysRequest::getKeyId() const
{
    return keyId_;
}

void ListInferApiKeysRequest::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool ListInferApiKeysRequest::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void ListInferApiKeysRequest::unsetkeyId()
{
    keyIdIsSet_ = false;
}

int32_t ListInferApiKeysRequest::getLimit() const
{
    return limit_;
}

void ListInferApiKeysRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListInferApiKeysRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListInferApiKeysRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListInferApiKeysRequest::getOffset() const
{
    return offset_;
}

void ListInferApiKeysRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListInferApiKeysRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListInferApiKeysRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListInferApiKeysRequest::getContentType() const
{
    return contentType_;
}

void ListInferApiKeysRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ListInferApiKeysRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ListInferApiKeysRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

std::string ListInferApiKeysRequest::getWorkspaceId() const
{
    return workspaceId_;
}

void ListInferApiKeysRequest::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool ListInferApiKeysRequest::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void ListInferApiKeysRequest::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

bool ListInferApiKeysRequest::isWithUserScope() const
{
    return withUserScope_;
}

void ListInferApiKeysRequest::setWithUserScope(bool value)
{
    withUserScope_ = value;
    withUserScopeIsSet_ = true;
}

bool ListInferApiKeysRequest::withUserScopeIsSet() const
{
    return withUserScopeIsSet_;
}

void ListInferApiKeysRequest::unsetwithUserScope()
{
    withUserScopeIsSet_ = false;
}

}
}
}
}
}


