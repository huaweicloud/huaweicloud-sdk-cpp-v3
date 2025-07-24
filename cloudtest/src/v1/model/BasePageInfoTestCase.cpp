

#include "huaweicloud/cloudtest/v1/model/BasePageInfoTestCase.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




BasePageInfoTestCase::BasePageInfoTestCase()
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

BasePageInfoTestCase::~BasePageInfoTestCase() = default;

void BasePageInfoTestCase::validate()
{
}

web::json::value BasePageInfoTestCase::toJson() const
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
bool BasePageInfoTestCase::fromJson(const web::json::value& val)
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
            std::vector<TestCase> refVal;
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


int32_t BasePageInfoTestCase::getLimit() const
{
    return limit_;
}

void BasePageInfoTestCase::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool BasePageInfoTestCase::limitIsSet() const
{
    return limitIsSet_;
}

void BasePageInfoTestCase::unsetlimit()
{
    limitIsSet_ = false;
}

std::vector<TestCase>& BasePageInfoTestCase::getList()
{
    return list_;
}

void BasePageInfoTestCase::setList(const std::vector<TestCase>& value)
{
    list_ = value;
    listIsSet_ = true;
}

bool BasePageInfoTestCase::listIsSet() const
{
    return listIsSet_;
}

void BasePageInfoTestCase::unsetlist()
{
    listIsSet_ = false;
}

int32_t BasePageInfoTestCase::getOffset() const
{
    return offset_;
}

void BasePageInfoTestCase::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool BasePageInfoTestCase::offsetIsSet() const
{
    return offsetIsSet_;
}

void BasePageInfoTestCase::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t BasePageInfoTestCase::getPages() const
{
    return pages_;
}

void BasePageInfoTestCase::setPages(int32_t value)
{
    pages_ = value;
    pagesIsSet_ = true;
}

bool BasePageInfoTestCase::pagesIsSet() const
{
    return pagesIsSet_;
}

void BasePageInfoTestCase::unsetpages()
{
    pagesIsSet_ = false;
}

int32_t BasePageInfoTestCase::getSize() const
{
    return size_;
}

void BasePageInfoTestCase::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool BasePageInfoTestCase::sizeIsSet() const
{
    return sizeIsSet_;
}

void BasePageInfoTestCase::unsetsize()
{
    sizeIsSet_ = false;
}

int64_t BasePageInfoTestCase::getTotal() const
{
    return total_;
}

void BasePageInfoTestCase::setTotal(int64_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool BasePageInfoTestCase::totalIsSet() const
{
    return totalIsSet_;
}

void BasePageInfoTestCase::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


