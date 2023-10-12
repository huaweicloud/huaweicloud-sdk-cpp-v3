

#include "huaweicloud/lts/v2/model/ChartConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ChartConfig::ChartConfig()
{
    canSort_ = false;
    canSortIsSet_ = false;
    canSearch_ = false;
    canSearchIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
}

ChartConfig::~ChartConfig() = default;

void ChartConfig::validate()
{
}

web::json::value ChartConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(canSortIsSet_) {
        val[utility::conversions::to_string_t("canSort")] = ModelBase::toJson(canSort_);
    }
    if(canSearchIsSet_) {
        val[utility::conversions::to_string_t("canSearch")] = ModelBase::toJson(canSearch_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("pageSize")] = ModelBase::toJson(pageSize_);
    }

    return val;
}
bool ChartConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("canSort"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("canSort"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanSort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("canSearch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("canSearch"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanSearch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pageSize"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pageSize"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageSize(refVal);
        }
    }
    return ok;
}


bool ChartConfig::isCanSort() const
{
    return canSort_;
}

void ChartConfig::setCanSort(bool value)
{
    canSort_ = value;
    canSortIsSet_ = true;
}

bool ChartConfig::canSortIsSet() const
{
    return canSortIsSet_;
}

void ChartConfig::unsetcanSort()
{
    canSortIsSet_ = false;
}

bool ChartConfig::isCanSearch() const
{
    return canSearch_;
}

void ChartConfig::setCanSearch(bool value)
{
    canSearch_ = value;
    canSearchIsSet_ = true;
}

bool ChartConfig::canSearchIsSet() const
{
    return canSearchIsSet_;
}

void ChartConfig::unsetcanSearch()
{
    canSearchIsSet_ = false;
}

int32_t ChartConfig::getPageSize() const
{
    return pageSize_;
}

void ChartConfig::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ChartConfig::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ChartConfig::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

}
}
}
}
}


