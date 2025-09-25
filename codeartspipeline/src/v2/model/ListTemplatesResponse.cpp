

#include "huaweicloud/codeartspipeline/v2/model/ListTemplatesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ListTemplatesResponse::ListTemplatesResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    pageNumber_ = 0;
    pageNumberIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
    contentIsSet_ = false;
}

ListTemplatesResponse::~ListTemplatesResponse() = default;

void ListTemplatesResponse::validate()
{
}

web::json::value ListTemplatesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(pageNumberIsSet_) {
        val[utility::conversions::to_string_t("page_number")] = ModelBase::toJson(pageNumber_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }
    if(contentIsSet_) {
        val[utility::conversions::to_string_t("content")] = ModelBase::toJson(content_);
    }

    return val;
}
bool ListTemplatesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_number"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageNumber(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content"));
        if(!fieldValue.is_null())
        {
            std::vector<TemplateView> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContent(refVal);
        }
    }
    return ok;
}


int32_t ListTemplatesResponse::getTotal() const
{
    return total_;
}

void ListTemplatesResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListTemplatesResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListTemplatesResponse::unsettotal()
{
    totalIsSet_ = false;
}

int32_t ListTemplatesResponse::getPageNumber() const
{
    return pageNumber_;
}

void ListTemplatesResponse::setPageNumber(int32_t value)
{
    pageNumber_ = value;
    pageNumberIsSet_ = true;
}

bool ListTemplatesResponse::pageNumberIsSet() const
{
    return pageNumberIsSet_;
}

void ListTemplatesResponse::unsetpageNumber()
{
    pageNumberIsSet_ = false;
}

int32_t ListTemplatesResponse::getPageSize() const
{
    return pageSize_;
}

void ListTemplatesResponse::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ListTemplatesResponse::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ListTemplatesResponse::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

std::vector<TemplateView>& ListTemplatesResponse::getContent()
{
    return content_;
}

void ListTemplatesResponse::setContent(const std::vector<TemplateView>& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool ListTemplatesResponse::contentIsSet() const
{
    return contentIsSet_;
}

void ListTemplatesResponse::unsetcontent()
{
    contentIsSet_ = false;
}

}
}
}
}
}


