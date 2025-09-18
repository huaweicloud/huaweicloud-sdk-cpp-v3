

#include "huaweicloud/projectman/v4/model/SearchIpdIssuesRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




SearchIpdIssuesRequestBody::SearchIpdIssuesRequestBody()
{
    filterIsSet_ = false;
    pageIsSet_ = false;
    returnFieldsIsSet_ = false;
    sortIsSet_ = false;
}

SearchIpdIssuesRequestBody::~SearchIpdIssuesRequestBody() = default;

void SearchIpdIssuesRequestBody::validate()
{
}

web::json::value SearchIpdIssuesRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(filterIsSet_) {
        val[utility::conversions::to_string_t("filter")] = ModelBase::toJson(filter_);
    }
    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }
    if(returnFieldsIsSet_) {
        val[utility::conversions::to_string_t("return_fields")] = ModelBase::toJson(returnFields_);
    }
    if(sortIsSet_) {
        val[utility::conversions::to_string_t("sort")] = ModelBase::toJson(sort_);
    }

    return val;
}
bool SearchIpdIssuesRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page"));
        if(!fieldValue.is_null())
        {
            PageInfoVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPage(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("sort"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort"));
        if(!fieldValue.is_null())
        {
            std::vector<SortInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSort(refVal);
        }
    }
    return ok;
}


std::vector<std::map<std::string, ConditionVO>>& SearchIpdIssuesRequestBody::getFilter()
{
    return filter_;
}

void SearchIpdIssuesRequestBody::setFilter(const std::vector<std::map<std::string, ConditionVO>>& value)
{
    filter_ = value;
    filterIsSet_ = true;
}

bool SearchIpdIssuesRequestBody::filterIsSet() const
{
    return filterIsSet_;
}

void SearchIpdIssuesRequestBody::unsetfilter()
{
    filterIsSet_ = false;
}

PageInfoVO SearchIpdIssuesRequestBody::getPage() const
{
    return page_;
}

void SearchIpdIssuesRequestBody::setPage(const PageInfoVO& value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool SearchIpdIssuesRequestBody::pageIsSet() const
{
    return pageIsSet_;
}

void SearchIpdIssuesRequestBody::unsetpage()
{
    pageIsSet_ = false;
}

std::vector<std::string>& SearchIpdIssuesRequestBody::getReturnFields()
{
    return returnFields_;
}

void SearchIpdIssuesRequestBody::setReturnFields(const std::vector<std::string>& value)
{
    returnFields_ = value;
    returnFieldsIsSet_ = true;
}

bool SearchIpdIssuesRequestBody::returnFieldsIsSet() const
{
    return returnFieldsIsSet_;
}

void SearchIpdIssuesRequestBody::unsetreturnFields()
{
    returnFieldsIsSet_ = false;
}

std::vector<SortInfo>& SearchIpdIssuesRequestBody::getSort()
{
    return sort_;
}

void SearchIpdIssuesRequestBody::setSort(const std::vector<SortInfo>& value)
{
    sort_ = value;
    sortIsSet_ = true;
}

bool SearchIpdIssuesRequestBody::sortIsSet() const
{
    return sortIsSet_;
}

void SearchIpdIssuesRequestBody::unsetsort()
{
    sortIsSet_ = false;
}

}
}
}
}
}


