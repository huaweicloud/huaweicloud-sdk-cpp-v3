

#include "huaweicloud/vod/v1/model/ListWatermarkTemplateRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ListWatermarkTemplateRequest::ListWatermarkTemplateRequest()
{
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    idIsSet_ = false;
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

    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
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
    
    if(val.has_field(utility::conversions::to_string_t("X-Sdk-Date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Sdk-Date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSdkDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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


std::string ListWatermarkTemplateRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ListWatermarkTemplateRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ListWatermarkTemplateRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ListWatermarkTemplateRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::vector<std::string>& ListWatermarkTemplateRequest::getId()
{
    return id_;
}

void ListWatermarkTemplateRequest::setId(const std::vector<std::string>& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListWatermarkTemplateRequest::idIsSet() const
{
    return idIsSet_;
}

void ListWatermarkTemplateRequest::unsetid()
{
    idIsSet_ = false;
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


