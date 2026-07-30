

#include "huaweicloud/modelarts/v1/model/ListImageRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListImageRequest::ListImageRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    nameFuzzyMatch_ = false;
    nameFuzzyMatchIsSet_ = false;
    namespace_ = "";
    namespaceIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    serviceType_ = "";
    serviceTypeIsSet_ = false;
    sortDir_ = "";
    sortDirIsSet_ = false;
    sortKey_ = "";
    sortKeyIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
    showName_ = "";
    showNameIsSet_ = false;
    showTag_ = "";
    showTagIsSet_ = false;
}

ListImageRequest::~ListImageRequest() = default;

void ListImageRequest::validate()
{
}

web::json::value ListImageRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(nameFuzzyMatchIsSet_) {
        val[utility::conversions::to_string_t("name_fuzzy_match")] = ModelBase::toJson(nameFuzzyMatch_);
    }
    if(namespaceIsSet_) {
        val[utility::conversions::to_string_t("namespace")] = ModelBase::toJson(namespace_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(serviceTypeIsSet_) {
        val[utility::conversions::to_string_t("service_type")] = ModelBase::toJson(serviceType_);
    }
    if(sortDirIsSet_) {
        val[utility::conversions::to_string_t("sort_dir")] = ModelBase::toJson(sortDir_);
    }
    if(sortKeyIsSet_) {
        val[utility::conversions::to_string_t("sort_key")] = ModelBase::toJson(sortKey_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }
    if(showNameIsSet_) {
        val[utility::conversions::to_string_t("show_name")] = ModelBase::toJson(showName_);
    }
    if(showTagIsSet_) {
        val[utility::conversions::to_string_t("show_tag")] = ModelBase::toJson(showTag_);
    }

    return val;
}
bool ListImageRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_dir"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_dir"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortDir(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortKey(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("show_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("show_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShowName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("show_tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("show_tag"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShowTag(refVal);
        }
    }
    return ok;
}


int32_t ListImageRequest::getLimit() const
{
    return limit_;
}

void ListImageRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListImageRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListImageRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListImageRequest::getName() const
{
    return name_;
}

void ListImageRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListImageRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListImageRequest::unsetname()
{
    nameIsSet_ = false;
}

bool ListImageRequest::isNameFuzzyMatch() const
{
    return nameFuzzyMatch_;
}

void ListImageRequest::setNameFuzzyMatch(bool value)
{
    nameFuzzyMatch_ = value;
    nameFuzzyMatchIsSet_ = true;
}

bool ListImageRequest::nameFuzzyMatchIsSet() const
{
    return nameFuzzyMatchIsSet_;
}

void ListImageRequest::unsetnameFuzzyMatch()
{
    nameFuzzyMatchIsSet_ = false;
}

std::string ListImageRequest::getNamespace() const
{
    return namespace_;
}

void ListImageRequest::setNamespace(const std::string& value)
{
    namespace_ = value;
    namespaceIsSet_ = true;
}

bool ListImageRequest::namespaceIsSet() const
{
    return namespaceIsSet_;
}

void ListImageRequest::unsetnamespace()
{
    namespaceIsSet_ = false;
}

int32_t ListImageRequest::getOffset() const
{
    return offset_;
}

void ListImageRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListImageRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListImageRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListImageRequest::getServiceType() const
{
    return serviceType_;
}

void ListImageRequest::setServiceType(const std::string& value)
{
    serviceType_ = value;
    serviceTypeIsSet_ = true;
}

bool ListImageRequest::serviceTypeIsSet() const
{
    return serviceTypeIsSet_;
}

void ListImageRequest::unsetserviceType()
{
    serviceTypeIsSet_ = false;
}

std::string ListImageRequest::getSortDir() const
{
    return sortDir_;
}

void ListImageRequest::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ListImageRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ListImageRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

std::string ListImageRequest::getSortKey() const
{
    return sortKey_;
}

void ListImageRequest::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ListImageRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ListImageRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::string ListImageRequest::getType() const
{
    return type_;
}

void ListImageRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListImageRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListImageRequest::unsettype()
{
    typeIsSet_ = false;
}

std::string ListImageRequest::getWorkspaceId() const
{
    return workspaceId_;
}

void ListImageRequest::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool ListImageRequest::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void ListImageRequest::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

std::string ListImageRequest::getShowName() const
{
    return showName_;
}

void ListImageRequest::setShowName(const std::string& value)
{
    showName_ = value;
    showNameIsSet_ = true;
}

bool ListImageRequest::showNameIsSet() const
{
    return showNameIsSet_;
}

void ListImageRequest::unsetshowName()
{
    showNameIsSet_ = false;
}

std::string ListImageRequest::getShowTag() const
{
    return showTag_;
}

void ListImageRequest::setShowTag(const std::string& value)
{
    showTag_ = value;
    showTagIsSet_ = true;
}

bool ListImageRequest::showTagIsSet() const
{
    return showTagIsSet_;
}

void ListImageRequest::unsetshowTag()
{
    showTagIsSet_ = false;
}

}
}
}
}
}


