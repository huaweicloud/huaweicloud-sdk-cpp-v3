

#include "huaweicloud/projectman/v4/model/QueryVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




QueryVO::QueryVO()
{
    filterIsSet_ = false;
    filterMode_ = "";
    filterModeIsSet_ = false;
    pageIsSet_ = false;
    sortIsSet_ = false;
    returnFieldsIsSet_ = false;
}

QueryVO::~QueryVO() = default;

void QueryVO::validate()
{
}

web::json::value QueryVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(filterIsSet_) {
        val[utility::conversions::to_string_t("filter")] = ModelBase::toJson(filter_);
    }
    if(filterModeIsSet_) {
        val[utility::conversions::to_string_t("filter_mode")] = ModelBase::toJson(filterMode_);
    }
    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }
    if(sortIsSet_) {
        val[utility::conversions::to_string_t("sort")] = ModelBase::toJson(sort_);
    }
    if(returnFieldsIsSet_) {
        val[utility::conversions::to_string_t("return_fields")] = ModelBase::toJson(returnFields_);
    }

    return val;
}
bool QueryVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("filter"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("filter"));
        if(!fieldValue.is_null())
        {
            std::vector<std::map<std::string, ConditionVO>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilter(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("filter_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("filter_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilterMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page"));
        if(!fieldValue.is_null())
        {
            PageInfoVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort"));
        if(!fieldValue.is_null())
        {
            std::vector<SortInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("return_fields"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("return_fields"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReturnFields(refVal);
        }
    }
    return ok;
}


std::vector<std::map<std::string, ConditionVO>>& QueryVO::getFilter()
{
    return filter_;
}

void QueryVO::setFilter(const std::vector<std::map<std::string, ConditionVO>>& value)
{
    filter_ = value;
    filterIsSet_ = true;
}

bool QueryVO::filterIsSet() const
{
    return filterIsSet_;
}

void QueryVO::unsetfilter()
{
    filterIsSet_ = false;
}

std::string QueryVO::getFilterMode() const
{
    return filterMode_;
}

void QueryVO::setFilterMode(const std::string& value)
{
    filterMode_ = value;
    filterModeIsSet_ = true;
}

bool QueryVO::filterModeIsSet() const
{
    return filterModeIsSet_;
}

void QueryVO::unsetfilterMode()
{
    filterModeIsSet_ = false;
}

PageInfoVO QueryVO::getPage() const
{
    return page_;
}

void QueryVO::setPage(const PageInfoVO& value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool QueryVO::pageIsSet() const
{
    return pageIsSet_;
}

void QueryVO::unsetpage()
{
    pageIsSet_ = false;
}

std::vector<SortInfo>& QueryVO::getSort()
{
    return sort_;
}

void QueryVO::setSort(const std::vector<SortInfo>& value)
{
    sort_ = value;
    sortIsSet_ = true;
}

bool QueryVO::sortIsSet() const
{
    return sortIsSet_;
}

void QueryVO::unsetsort()
{
    sortIsSet_ = false;
}

std::vector<std::string>& QueryVO::getReturnFields()
{
    return returnFields_;
}

void QueryVO::setReturnFields(const std::vector<std::string>& value)
{
    returnFields_ = value;
    returnFieldsIsSet_ = true;
}

bool QueryVO::returnFieldsIsSet() const
{
    return returnFieldsIsSet_;
}

void QueryVO::unsetreturnFields()
{
    returnFieldsIsSet_ = false;
}

}
}
}
}
}


