

#include "huaweicloud/modelarts/v1/model/ListWorkflowsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListWorkflowsRequest::ListWorkflowsRequest()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    labels_ = "";
    labelsIsSet_ = false;
    templateId_ = "";
    templateIdIsSet_ = false;
    limit_ = "";
    limitIsSet_ = false;
    offset_ = "";
    offsetIsSet_ = false;
    sortBy_ = "";
    sortByIsSet_ = false;
    searchType_ = "";
    searchTypeIsSet_ = false;
}

ListWorkflowsRequest::~ListWorkflowsRequest() = default;

void ListWorkflowsRequest::validate()
{
}

web::json::value ListWorkflowsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(labelsIsSet_) {
        val[utility::conversions::to_string_t("labels")] = ModelBase::toJson(labels_);
    }
    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("template_id")] = ModelBase::toJson(templateId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(sortByIsSet_) {
        val[utility::conversions::to_string_t("sort_by")] = ModelBase::toJson(sortBy_);
    }
    if(searchTypeIsSet_) {
        val[utility::conversions::to_string_t("search_type")] = ModelBase::toJson(searchType_);
    }

    return val;
}
bool ListWorkflowsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("labels"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("labels"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLabels(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("template_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_by"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortBy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("search_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("search_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSearchType(refVal);
        }
    }
    return ok;
}


std::string ListWorkflowsRequest::getName() const
{
    return name_;
}

void ListWorkflowsRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListWorkflowsRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListWorkflowsRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListWorkflowsRequest::getDescription() const
{
    return description_;
}

void ListWorkflowsRequest::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ListWorkflowsRequest::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ListWorkflowsRequest::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ListWorkflowsRequest::getStatus() const
{
    return status_;
}

void ListWorkflowsRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListWorkflowsRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListWorkflowsRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListWorkflowsRequest::getLabels() const
{
    return labels_;
}

void ListWorkflowsRequest::setLabels(const std::string& value)
{
    labels_ = value;
    labelsIsSet_ = true;
}

bool ListWorkflowsRequest::labelsIsSet() const
{
    return labelsIsSet_;
}

void ListWorkflowsRequest::unsetlabels()
{
    labelsIsSet_ = false;
}

std::string ListWorkflowsRequest::getTemplateId() const
{
    return templateId_;
}

void ListWorkflowsRequest::setTemplateId(const std::string& value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool ListWorkflowsRequest::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void ListWorkflowsRequest::unsettemplateId()
{
    templateIdIsSet_ = false;
}

std::string ListWorkflowsRequest::getLimit() const
{
    return limit_;
}

void ListWorkflowsRequest::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListWorkflowsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListWorkflowsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListWorkflowsRequest::getOffset() const
{
    return offset_;
}

void ListWorkflowsRequest::setOffset(const std::string& value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListWorkflowsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListWorkflowsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListWorkflowsRequest::getSortBy() const
{
    return sortBy_;
}

void ListWorkflowsRequest::setSortBy(const std::string& value)
{
    sortBy_ = value;
    sortByIsSet_ = true;
}

bool ListWorkflowsRequest::sortByIsSet() const
{
    return sortByIsSet_;
}

void ListWorkflowsRequest::unsetsortBy()
{
    sortByIsSet_ = false;
}

std::string ListWorkflowsRequest::getSearchType() const
{
    return searchType_;
}

void ListWorkflowsRequest::setSearchType(const std::string& value)
{
    searchType_ = value;
    searchTypeIsSet_ = true;
}

bool ListWorkflowsRequest::searchTypeIsSet() const
{
    return searchTypeIsSet_;
}

void ListWorkflowsRequest::unsetsearchType()
{
    searchTypeIsSet_ = false;
}

}
}
}
}
}


