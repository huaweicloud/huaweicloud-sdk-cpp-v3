

#include "huaweicloud/cloudtest/v1/model/BasePageInfoMindmapBackup.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




BasePageInfoMindmapBackup::BasePageInfoMindmapBackup()
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

BasePageInfoMindmapBackup::~BasePageInfoMindmapBackup() = default;

void BasePageInfoMindmapBackup::validate()
{
}

web::json::value BasePageInfoMindmapBackup::toJson() const
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
bool BasePageInfoMindmapBackup::fromJson(const web::json::value& val)
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
            std::vector<MindmapBackup> refVal;
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


int64_t BasePageInfoMindmapBackup::getTotal() const
{
    return total_;
}

void BasePageInfoMindmapBackup::setTotal(int64_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool BasePageInfoMindmapBackup::totalIsSet() const
{
    return totalIsSet_;
}

void BasePageInfoMindmapBackup::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<MindmapBackup>& BasePageInfoMindmapBackup::getList()
{
    return list_;
}

void BasePageInfoMindmapBackup::setList(const std::vector<MindmapBackup>& value)
{
    list_ = value;
    listIsSet_ = true;
}

bool BasePageInfoMindmapBackup::listIsSet() const
{
    return listIsSet_;
}

void BasePageInfoMindmapBackup::unsetlist()
{
    listIsSet_ = false;
}

int32_t BasePageInfoMindmapBackup::getLimit() const
{
    return limit_;
}

void BasePageInfoMindmapBackup::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool BasePageInfoMindmapBackup::limitIsSet() const
{
    return limitIsSet_;
}

void BasePageInfoMindmapBackup::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t BasePageInfoMindmapBackup::getOffset() const
{
    return offset_;
}

void BasePageInfoMindmapBackup::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool BasePageInfoMindmapBackup::offsetIsSet() const
{
    return offsetIsSet_;
}

void BasePageInfoMindmapBackup::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t BasePageInfoMindmapBackup::getPages() const
{
    return pages_;
}

void BasePageInfoMindmapBackup::setPages(int32_t value)
{
    pages_ = value;
    pagesIsSet_ = true;
}

bool BasePageInfoMindmapBackup::pagesIsSet() const
{
    return pagesIsSet_;
}

void BasePageInfoMindmapBackup::unsetpages()
{
    pagesIsSet_ = false;
}

int32_t BasePageInfoMindmapBackup::getSize() const
{
    return size_;
}

void BasePageInfoMindmapBackup::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool BasePageInfoMindmapBackup::sizeIsSet() const
{
    return sizeIsSet_;
}

void BasePageInfoMindmapBackup::unsetsize()
{
    sizeIsSet_ = false;
}

}
}
}
}
}


