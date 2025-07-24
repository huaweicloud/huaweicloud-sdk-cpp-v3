

#include "huaweicloud/cloudtest/v1/model/BasePageInfoTestPoint.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




BasePageInfoTestPoint::BasePageInfoTestPoint()
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

BasePageInfoTestPoint::~BasePageInfoTestPoint() = default;

void BasePageInfoTestPoint::validate()
{
}

web::json::value BasePageInfoTestPoint::toJson() const
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
bool BasePageInfoTestPoint::fromJson(const web::json::value& val)
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
            std::vector<TestPoint> refVal;
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


int32_t BasePageInfoTestPoint::getLimit() const
{
    return limit_;
}

void BasePageInfoTestPoint::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool BasePageInfoTestPoint::limitIsSet() const
{
    return limitIsSet_;
}

void BasePageInfoTestPoint::unsetlimit()
{
    limitIsSet_ = false;
}

std::vector<TestPoint>& BasePageInfoTestPoint::getList()
{
    return list_;
}

void BasePageInfoTestPoint::setList(const std::vector<TestPoint>& value)
{
    list_ = value;
    listIsSet_ = true;
}

bool BasePageInfoTestPoint::listIsSet() const
{
    return listIsSet_;
}

void BasePageInfoTestPoint::unsetlist()
{
    listIsSet_ = false;
}

int32_t BasePageInfoTestPoint::getOffset() const
{
    return offset_;
}

void BasePageInfoTestPoint::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool BasePageInfoTestPoint::offsetIsSet() const
{
    return offsetIsSet_;
}

void BasePageInfoTestPoint::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t BasePageInfoTestPoint::getPages() const
{
    return pages_;
}

void BasePageInfoTestPoint::setPages(int32_t value)
{
    pages_ = value;
    pagesIsSet_ = true;
}

bool BasePageInfoTestPoint::pagesIsSet() const
{
    return pagesIsSet_;
}

void BasePageInfoTestPoint::unsetpages()
{
    pagesIsSet_ = false;
}

int32_t BasePageInfoTestPoint::getSize() const
{
    return size_;
}

void BasePageInfoTestPoint::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool BasePageInfoTestPoint::sizeIsSet() const
{
    return sizeIsSet_;
}

void BasePageInfoTestPoint::unsetsize()
{
    sizeIsSet_ = false;
}

int64_t BasePageInfoTestPoint::getTotal() const
{
    return total_;
}

void BasePageInfoTestPoint::setTotal(int64_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool BasePageInfoTestPoint::totalIsSet() const
{
    return totalIsSet_;
}

void BasePageInfoTestPoint::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


