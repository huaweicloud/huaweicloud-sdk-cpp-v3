

#include "huaweicloud/codeartsbuild/v3/model/ListTemplatesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ListTemplatesRequest::ListTemplatesRequest()
{
    name_ = "";
    nameIsSet_ = false;
    page_ = "";
    pageIsSet_ = false;
    pageSize_ = "";
    pageSizeIsSet_ = false;
}

ListTemplatesRequest::~ListTemplatesRequest() = default;

void ListTemplatesRequest::validate()
{
}

web::json::value ListTemplatesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }

    return val;
}
bool ListTemplatesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageSize(refVal);
        }
    }
    return ok;
}


std::string ListTemplatesRequest::getName() const
{
    return name_;
}

void ListTemplatesRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListTemplatesRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListTemplatesRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListTemplatesRequest::getPage() const
{
    return page_;
}

void ListTemplatesRequest::setPage(const std::string& value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ListTemplatesRequest::pageIsSet() const
{
    return pageIsSet_;
}

void ListTemplatesRequest::unsetpage()
{
    pageIsSet_ = false;
}

std::string ListTemplatesRequest::getPageSize() const
{
    return pageSize_;
}

void ListTemplatesRequest::setPageSize(const std::string& value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ListTemplatesRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ListTemplatesRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

}
}
}
}
}


