

#include "huaweicloud/cloudtest/v1/model/BasePageInfoReview.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




BasePageInfoReview::BasePageInfoReview()
{
    total_ = 0L;
    totalIsSet_ = false;
    listIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    pages_ = 0;
    pagesIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
}

BasePageInfoReview::~BasePageInfoReview() = default;

void BasePageInfoReview::validate()
{
}

web::json::value BasePageInfoReview::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(listIsSet_) {
        val[utility::conversions::to_string_t("list")] = ModelBase::toJson(list_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(pagesIsSet_) {
        val[utility::conversions::to_string_t("pages")] = ModelBase::toJson(pages_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }

    return val;
}
bool BasePageInfoReview::fromJson(const web::json::value& val)
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
            std::vector<Review> refVal;
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
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
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


int64_t BasePageInfoReview::getTotal() const
{
    return total_;
}

void BasePageInfoReview::setTotal(int64_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool BasePageInfoReview::totalIsSet() const
{
    return totalIsSet_;
}

void BasePageInfoReview::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<Review>& BasePageInfoReview::getList()
{
    return list_;
}

void BasePageInfoReview::setList(const std::vector<Review>& value)
{
    list_ = value;
    listIsSet_ = true;
}

bool BasePageInfoReview::listIsSet() const
{
    return listIsSet_;
}

void BasePageInfoReview::unsetlist()
{
    listIsSet_ = false;
}

int32_t BasePageInfoReview::getOffset() const
{
    return offset_;
}

void BasePageInfoReview::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool BasePageInfoReview::offsetIsSet() const
{
    return offsetIsSet_;
}

void BasePageInfoReview::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t BasePageInfoReview::getLimit() const
{
    return limit_;
}

void BasePageInfoReview::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool BasePageInfoReview::limitIsSet() const
{
    return limitIsSet_;
}

void BasePageInfoReview::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t BasePageInfoReview::getPages() const
{
    return pages_;
}

void BasePageInfoReview::setPages(int32_t value)
{
    pages_ = value;
    pagesIsSet_ = true;
}

bool BasePageInfoReview::pagesIsSet() const
{
    return pagesIsSet_;
}

void BasePageInfoReview::unsetpages()
{
    pagesIsSet_ = false;
}

int32_t BasePageInfoReview::getSize() const
{
    return size_;
}

void BasePageInfoReview::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool BasePageInfoReview::sizeIsSet() const
{
    return sizeIsSet_;
}

void BasePageInfoReview::unsetsize()
{
    sizeIsSet_ = false;
}

}
}
}
}
}


