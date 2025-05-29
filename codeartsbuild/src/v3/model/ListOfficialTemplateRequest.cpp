

#include "huaweicloud/codeartsbuild/v3/model/ListOfficialTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ListOfficialTemplateRequest::ListOfficialTemplateRequest()
{
    name_ = "";
    nameIsSet_ = false;
    page_ = "";
    pageIsSet_ = false;
    pageSize_ = "";
    pageSizeIsSet_ = false;
}

ListOfficialTemplateRequest::~ListOfficialTemplateRequest() = default;

void ListOfficialTemplateRequest::validate()
{
}

web::json::value ListOfficialTemplateRequest::toJson() const
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
bool ListOfficialTemplateRequest::fromJson(const web::json::value& val)
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


std::string ListOfficialTemplateRequest::getName() const
{
    return name_;
}

void ListOfficialTemplateRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListOfficialTemplateRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListOfficialTemplateRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListOfficialTemplateRequest::getPage() const
{
    return page_;
}

void ListOfficialTemplateRequest::setPage(const std::string& value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ListOfficialTemplateRequest::pageIsSet() const
{
    return pageIsSet_;
}

void ListOfficialTemplateRequest::unsetpage()
{
    pageIsSet_ = false;
}

std::string ListOfficialTemplateRequest::getPageSize() const
{
    return pageSize_;
}

void ListOfficialTemplateRequest::setPageSize(const std::string& value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ListOfficialTemplateRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ListOfficialTemplateRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

}
}
}
}
}


