

#include "huaweicloud/modelarts/v1/model/ShowWorkflowLabelsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowWorkflowLabelsRequest::ShowWorkflowLabelsRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    order_ = "";
    orderIsSet_ = false;
    sortBy_ = "";
    sortByIsSet_ = false;
    templateId_ = "";
    templateIdIsSet_ = false;
}

ShowWorkflowLabelsRequest::~ShowWorkflowLabelsRequest() = default;

void ShowWorkflowLabelsRequest::validate()
{
}

web::json::value ShowWorkflowLabelsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(orderIsSet_) {
        val[utility::conversions::to_string_t("order")] = ModelBase::toJson(order_);
    }
    if(sortByIsSet_) {
        val[utility::conversions::to_string_t("sort_by")] = ModelBase::toJson(sortBy_);
    }
    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("template_id")] = ModelBase::toJson(templateId_);
    }

    return val;
}
bool ShowWorkflowLabelsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("order"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrder(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("template_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateId(refVal);
        }
    }
    return ok;
}


int32_t ShowWorkflowLabelsRequest::getLimit() const
{
    return limit_;
}

void ShowWorkflowLabelsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowWorkflowLabelsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowWorkflowLabelsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ShowWorkflowLabelsRequest::getOffset() const
{
    return offset_;
}

void ShowWorkflowLabelsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowWorkflowLabelsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowWorkflowLabelsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ShowWorkflowLabelsRequest::getOrder() const
{
    return order_;
}

void ShowWorkflowLabelsRequest::setOrder(const std::string& value)
{
    order_ = value;
    orderIsSet_ = true;
}

bool ShowWorkflowLabelsRequest::orderIsSet() const
{
    return orderIsSet_;
}

void ShowWorkflowLabelsRequest::unsetorder()
{
    orderIsSet_ = false;
}

std::string ShowWorkflowLabelsRequest::getSortBy() const
{
    return sortBy_;
}

void ShowWorkflowLabelsRequest::setSortBy(const std::string& value)
{
    sortBy_ = value;
    sortByIsSet_ = true;
}

bool ShowWorkflowLabelsRequest::sortByIsSet() const
{
    return sortByIsSet_;
}

void ShowWorkflowLabelsRequest::unsetsortBy()
{
    sortByIsSet_ = false;
}

std::string ShowWorkflowLabelsRequest::getTemplateId() const
{
    return templateId_;
}

void ShowWorkflowLabelsRequest::setTemplateId(const std::string& value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool ShowWorkflowLabelsRequest::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void ShowWorkflowLabelsRequest::unsettemplateId()
{
    templateIdIsSet_ = false;
}

}
}
}
}
}


