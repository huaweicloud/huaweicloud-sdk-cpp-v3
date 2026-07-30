

#include "huaweicloud/modelarts/v1/model/ListImageGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListImageGroupRequest::ListImageGroupRequest()
{
    name_ = "";
    nameIsSet_ = false;
    nameFuzzyMatch_ = false;
    nameFuzzyMatchIsSet_ = false;
    namespace_ = "";
    namespaceIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    swrInstanceId_ = "";
    swrInstanceIdIsSet_ = false;
}

ListImageGroupRequest::~ListImageGroupRequest() = default;

void ListImageGroupRequest::validate()
{
}

web::json::value ListImageGroupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(nameFuzzyMatchIsSet_) {
        val[utility::conversions::to_string_t("name_fuzzy_match")] = ModelBase::toJson(nameFuzzyMatch_);
    }
    if(namespaceIsSet_) {
        val[utility::conversions::to_string_t("namespace")] = ModelBase::toJson(namespace_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(swrInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("swr_instance_id")] = ModelBase::toJson(swrInstanceId_);
    }

    return val;
}
bool ListImageGroupRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name_fuzzy_match"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name_fuzzy_match"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNameFuzzyMatch(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("swr_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("swr_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSwrInstanceId(refVal);
        }
    }
    return ok;
}


std::string ListImageGroupRequest::getName() const
{
    return name_;
}

void ListImageGroupRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListImageGroupRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListImageGroupRequest::unsetname()
{
    nameIsSet_ = false;
}

bool ListImageGroupRequest::isNameFuzzyMatch() const
{
    return nameFuzzyMatch_;
}

void ListImageGroupRequest::setNameFuzzyMatch(bool value)
{
    nameFuzzyMatch_ = value;
    nameFuzzyMatchIsSet_ = true;
}

bool ListImageGroupRequest::nameFuzzyMatchIsSet() const
{
    return nameFuzzyMatchIsSet_;
}

void ListImageGroupRequest::unsetnameFuzzyMatch()
{
    nameFuzzyMatchIsSet_ = false;
}

std::string ListImageGroupRequest::getNamespace() const
{
    return namespace_;
}

void ListImageGroupRequest::setNamespace(const std::string& value)
{
    namespace_ = value;
    namespaceIsSet_ = true;
}

bool ListImageGroupRequest::namespaceIsSet() const
{
    return namespaceIsSet_;
}

void ListImageGroupRequest::unsetnamespace()
{
    namespaceIsSet_ = false;
}

std::string ListImageGroupRequest::getType() const
{
    return type_;
}

void ListImageGroupRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListImageGroupRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListImageGroupRequest::unsettype()
{
    typeIsSet_ = false;
}

std::string ListImageGroupRequest::getWorkspaceId() const
{
    return workspaceId_;
}

void ListImageGroupRequest::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool ListImageGroupRequest::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void ListImageGroupRequest::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

int32_t ListImageGroupRequest::getLimit() const
{
    return limit_;
}

void ListImageGroupRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListImageGroupRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListImageGroupRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListImageGroupRequest::getOffset() const
{
    return offset_;
}

void ListImageGroupRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListImageGroupRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListImageGroupRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListImageGroupRequest::getSwrInstanceId() const
{
    return swrInstanceId_;
}

void ListImageGroupRequest::setSwrInstanceId(const std::string& value)
{
    swrInstanceId_ = value;
    swrInstanceIdIsSet_ = true;
}

bool ListImageGroupRequest::swrInstanceIdIsSet() const
{
    return swrInstanceIdIsSet_;
}

void ListImageGroupRequest::unsetswrInstanceId()
{
    swrInstanceIdIsSet_ = false;
}

}
}
}
}
}


