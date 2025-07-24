

#include "huaweicloud/cloudtest/v1/model/BasePageInfoTemplate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




BasePageInfoTemplate::BasePageInfoTemplate()
{
    total_ = 0L;
    totalIsSet_ = false;
    listIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    pages_ = 0;
    pagesIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
}

BasePageInfoTemplate::~BasePageInfoTemplate() = default;

void BasePageInfoTemplate::validate()
{
}

web::json::value BasePageInfoTemplate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(listIsSet_) {
        val[utility::conversions::to_string_t("list")] = ModelBase::toJson(list_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(pagesIsSet_) {
        val[utility::conversions::to_string_t("pages")] = ModelBase::toJson(pages_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }

    return val;
}
bool BasePageInfoTemplate::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("list"));
        if(!fieldValue.is_null())
        {
            std::vector<Template> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setList(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("pages"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pages"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPages(refVal);
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


int64_t BasePageInfoTemplate::getTotal() const
{
    return total_;
}

void BasePageInfoTemplate::setTotal(int64_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool BasePageInfoTemplate::totalIsSet() const
{
    return totalIsSet_;
}

void BasePageInfoTemplate::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<Template>& BasePageInfoTemplate::getList()
{
    return list_;
}

void BasePageInfoTemplate::setList(const std::vector<Template>& value)
{
    list_ = value;
    listIsSet_ = true;
}

bool BasePageInfoTemplate::listIsSet() const
{
    return listIsSet_;
}

void BasePageInfoTemplate::unsetlist()
{
    listIsSet_ = false;
}

int32_t BasePageInfoTemplate::getLimit() const
{
    return limit_;
}

void BasePageInfoTemplate::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool BasePageInfoTemplate::limitIsSet() const
{
    return limitIsSet_;
}

void BasePageInfoTemplate::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t BasePageInfoTemplate::getOffset() const
{
    return offset_;
}

void BasePageInfoTemplate::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool BasePageInfoTemplate::offsetIsSet() const
{
    return offsetIsSet_;
}

void BasePageInfoTemplate::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t BasePageInfoTemplate::getPages() const
{
    return pages_;
}

void BasePageInfoTemplate::setPages(int32_t value)
{
    pages_ = value;
    pagesIsSet_ = true;
}

bool BasePageInfoTemplate::pagesIsSet() const
{
    return pagesIsSet_;
}

void BasePageInfoTemplate::unsetpages()
{
    pagesIsSet_ = false;
}

int32_t BasePageInfoTemplate::getSize() const
{
    return size_;
}

void BasePageInfoTemplate::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool BasePageInfoTemplate::sizeIsSet() const
{
    return sizeIsSet_;
}

void BasePageInfoTemplate::unsetsize()
{
    sizeIsSet_ = false;
}

}
}
}
}
}


