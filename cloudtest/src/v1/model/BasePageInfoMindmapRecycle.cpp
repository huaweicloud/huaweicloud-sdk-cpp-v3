

#include "huaweicloud/cloudtest/v1/model/BasePageInfoMindmapRecycle.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




BasePageInfoMindmapRecycle::BasePageInfoMindmapRecycle()
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

BasePageInfoMindmapRecycle::~BasePageInfoMindmapRecycle() = default;

void BasePageInfoMindmapRecycle::validate()
{
}

web::json::value BasePageInfoMindmapRecycle::toJson() const
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
bool BasePageInfoMindmapRecycle::fromJson(const web::json::value& val)
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
            std::vector<MindmapRecycle> refVal;
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


int64_t BasePageInfoMindmapRecycle::getTotal() const
{
    return total_;
}

void BasePageInfoMindmapRecycle::setTotal(int64_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool BasePageInfoMindmapRecycle::totalIsSet() const
{
    return totalIsSet_;
}

void BasePageInfoMindmapRecycle::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<MindmapRecycle>& BasePageInfoMindmapRecycle::getList()
{
    return list_;
}

void BasePageInfoMindmapRecycle::setList(const std::vector<MindmapRecycle>& value)
{
    list_ = value;
    listIsSet_ = true;
}

bool BasePageInfoMindmapRecycle::listIsSet() const
{
    return listIsSet_;
}

void BasePageInfoMindmapRecycle::unsetlist()
{
    listIsSet_ = false;
}

int32_t BasePageInfoMindmapRecycle::getLimit() const
{
    return limit_;
}

void BasePageInfoMindmapRecycle::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool BasePageInfoMindmapRecycle::limitIsSet() const
{
    return limitIsSet_;
}

void BasePageInfoMindmapRecycle::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t BasePageInfoMindmapRecycle::getOffset() const
{
    return offset_;
}

void BasePageInfoMindmapRecycle::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool BasePageInfoMindmapRecycle::offsetIsSet() const
{
    return offsetIsSet_;
}

void BasePageInfoMindmapRecycle::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t BasePageInfoMindmapRecycle::getPages() const
{
    return pages_;
}

void BasePageInfoMindmapRecycle::setPages(int32_t value)
{
    pages_ = value;
    pagesIsSet_ = true;
}

bool BasePageInfoMindmapRecycle::pagesIsSet() const
{
    return pagesIsSet_;
}

void BasePageInfoMindmapRecycle::unsetpages()
{
    pagesIsSet_ = false;
}

int32_t BasePageInfoMindmapRecycle::getSize() const
{
    return size_;
}

void BasePageInfoMindmapRecycle::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool BasePageInfoMindmapRecycle::sizeIsSet() const
{
    return sizeIsSet_;
}

void BasePageInfoMindmapRecycle::unsetsize()
{
    sizeIsSet_ = false;
}

}
}
}
}
}


