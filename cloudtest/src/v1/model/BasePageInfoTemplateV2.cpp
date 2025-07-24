

#include "huaweicloud/cloudtest/v1/model/BasePageInfoTemplateV2.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




BasePageInfoTemplateV2::BasePageInfoTemplateV2()
{
    limit_ = 0;
    limitIsSet_ = false;
    listIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    pages_ = 0;
    pagesIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
    total_ = 0L;
    totalIsSet_ = false;
}

BasePageInfoTemplateV2::~BasePageInfoTemplateV2() = default;

void BasePageInfoTemplateV2::validate()
{
}

web::json::value BasePageInfoTemplateV2::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(listIsSet_) {
        val[utility::conversions::to_string_t("list")] = ModelBase::toJson(list_);
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
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool BasePageInfoTemplateV2::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("list"));
        if(!fieldValue.is_null())
        {
            std::vector<TemplateV2> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setList(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


int32_t BasePageInfoTemplateV2::getLimit() const
{
    return limit_;
}

void BasePageInfoTemplateV2::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool BasePageInfoTemplateV2::limitIsSet() const
{
    return limitIsSet_;
}

void BasePageInfoTemplateV2::unsetlimit()
{
    limitIsSet_ = false;
}

std::vector<TemplateV2>& BasePageInfoTemplateV2::getList()
{
    return list_;
}

void BasePageInfoTemplateV2::setList(const std::vector<TemplateV2>& value)
{
    list_ = value;
    listIsSet_ = true;
}

bool BasePageInfoTemplateV2::listIsSet() const
{
    return listIsSet_;
}

void BasePageInfoTemplateV2::unsetlist()
{
    listIsSet_ = false;
}

int32_t BasePageInfoTemplateV2::getOffset() const
{
    return offset_;
}

void BasePageInfoTemplateV2::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool BasePageInfoTemplateV2::offsetIsSet() const
{
    return offsetIsSet_;
}

void BasePageInfoTemplateV2::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t BasePageInfoTemplateV2::getPages() const
{
    return pages_;
}

void BasePageInfoTemplateV2::setPages(int32_t value)
{
    pages_ = value;
    pagesIsSet_ = true;
}

bool BasePageInfoTemplateV2::pagesIsSet() const
{
    return pagesIsSet_;
}

void BasePageInfoTemplateV2::unsetpages()
{
    pagesIsSet_ = false;
}

int32_t BasePageInfoTemplateV2::getSize() const
{
    return size_;
}

void BasePageInfoTemplateV2::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool BasePageInfoTemplateV2::sizeIsSet() const
{
    return sizeIsSet_;
}

void BasePageInfoTemplateV2::unsetsize()
{
    sizeIsSet_ = false;
}

int64_t BasePageInfoTemplateV2::getTotal() const
{
    return total_;
}

void BasePageInfoTemplateV2::setTotal(int64_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool BasePageInfoTemplateV2::totalIsSet() const
{
    return totalIsSet_;
}

void BasePageInfoTemplateV2::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


