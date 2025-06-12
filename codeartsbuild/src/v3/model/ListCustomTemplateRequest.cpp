

#include "huaweicloud/codeartsbuild/v3/model/ListCustomTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ListCustomTemplateRequest::ListCustomTemplateRequest()
{
    name_ = "";
    nameIsSet_ = false;
    filter_ = "";
    filterIsSet_ = false;
    page_ = 0;
    pageIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
    tags_ = "";
    tagsIsSet_ = false;
}

ListCustomTemplateRequest::~ListCustomTemplateRequest() = default;

void ListCustomTemplateRequest::validate()
{
}

web::json::value ListCustomTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(filterIsSet_) {
        val[utility::conversions::to_string_t("filter")] = ModelBase::toJson(filter_);
    }
    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool ListCustomTemplateRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("filter"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("filter"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilter(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::string ListCustomTemplateRequest::getName() const
{
    return name_;
}

void ListCustomTemplateRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListCustomTemplateRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListCustomTemplateRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListCustomTemplateRequest::getFilter() const
{
    return filter_;
}

void ListCustomTemplateRequest::setFilter(const std::string& value)
{
    filter_ = value;
    filterIsSet_ = true;
}

bool ListCustomTemplateRequest::filterIsSet() const
{
    return filterIsSet_;
}

void ListCustomTemplateRequest::unsetfilter()
{
    filterIsSet_ = false;
}

int32_t ListCustomTemplateRequest::getPage() const
{
    return page_;
}

void ListCustomTemplateRequest::setPage(int32_t value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ListCustomTemplateRequest::pageIsSet() const
{
    return pageIsSet_;
}

void ListCustomTemplateRequest::unsetpage()
{
    pageIsSet_ = false;
}

int32_t ListCustomTemplateRequest::getPageSize() const
{
    return pageSize_;
}

void ListCustomTemplateRequest::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ListCustomTemplateRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ListCustomTemplateRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

std::string ListCustomTemplateRequest::getTags() const
{
    return tags_;
}

void ListCustomTemplateRequest::setTags(const std::string& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListCustomTemplateRequest::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListCustomTemplateRequest::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


