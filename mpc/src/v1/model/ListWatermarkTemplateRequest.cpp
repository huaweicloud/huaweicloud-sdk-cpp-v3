

#include "huaweicloud/mpc/v1/model/ListWatermarkTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




ListWatermarkTemplateRequest::ListWatermarkTemplateRequest()
{
    templateIdIsSet_ = false;
    page_ = 0;
    pageIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
}

ListWatermarkTemplateRequest::~ListWatermarkTemplateRequest() = default;

void ListWatermarkTemplateRequest::validate()
{
}

web::json::value ListWatermarkTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("template_id")] = ModelBase::toJson(templateId_);
    }
    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }

    return val;
}
bool ListWatermarkTemplateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("template_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_id"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    return ok;
}


std::vector<int32_t>& ListWatermarkTemplateRequest::getTemplateId()
{
    return templateId_;
}

void ListWatermarkTemplateRequest::setTemplateId(std::vector<int32_t> value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool ListWatermarkTemplateRequest::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void ListWatermarkTemplateRequest::unsettemplateId()
{
    templateIdIsSet_ = false;
}

int32_t ListWatermarkTemplateRequest::getPage() const
{
    return page_;
}

void ListWatermarkTemplateRequest::setPage(int32_t value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ListWatermarkTemplateRequest::pageIsSet() const
{
    return pageIsSet_;
}

void ListWatermarkTemplateRequest::unsetpage()
{
    pageIsSet_ = false;
}

int32_t ListWatermarkTemplateRequest::getSize() const
{
    return size_;
}

void ListWatermarkTemplateRequest::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ListWatermarkTemplateRequest::sizeIsSet() const
{
    return sizeIsSet_;
}

void ListWatermarkTemplateRequest::unsetsize()
{
    sizeIsSet_ = false;
}

}
}
}
}
}


