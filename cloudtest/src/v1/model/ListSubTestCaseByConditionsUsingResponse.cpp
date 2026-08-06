

#include "huaweicloud/cloudtest/v1/model/ListSubTestCaseByConditionsUsingResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListSubTestCaseByConditionsUsingResponse::ListSubTestCaseByConditionsUsingResponse()
{
    endRow_ = 0L;
    endRowIsSet_ = false;
    hasNextPage_ = false;
    hasNextPageIsSet_ = false;
    hasPreviousPage_ = false;
    hasPreviousPageIsSet_ = false;
    isFirstPage_ = false;
    isFirstPageIsSet_ = false;
    isLastPage_ = false;
    isLastPageIsSet_ = false;
    listIsSet_ = false;
    navigateFirstPage_ = 0;
    navigateFirstPageIsSet_ = false;
    navigateLastPage_ = 0;
    navigateLastPageIsSet_ = false;
    navigatePages_ = 0;
    navigatePagesIsSet_ = false;
    navigatepageNumsIsSet_ = false;
    nextPage_ = 0;
    nextPageIsSet_ = false;
    pageNum_ = 0;
    pageNumIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
    pages_ = 0;
    pagesIsSet_ = false;
    prePage_ = 0;
    prePageIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
    startRow_ = 0L;
    startRowIsSet_ = false;
    total_ = 0L;
    totalIsSet_ = false;
}

ListSubTestCaseByConditionsUsingResponse::~ListSubTestCaseByConditionsUsingResponse() = default;

void ListSubTestCaseByConditionsUsingResponse::validate()
{
}

web::json::value ListSubTestCaseByConditionsUsingResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(endRowIsSet_) {
        val[utility::conversions::to_string_t("end_row")] = ModelBase::toJson(endRow_);
    }
    if(hasNextPageIsSet_) {
        val[utility::conversions::to_string_t("has_next_page")] = ModelBase::toJson(hasNextPage_);
    }
    if(hasPreviousPageIsSet_) {
        val[utility::conversions::to_string_t("has_previous_page")] = ModelBase::toJson(hasPreviousPage_);
    }
    if(isFirstPageIsSet_) {
        val[utility::conversions::to_string_t("is_first_page")] = ModelBase::toJson(isFirstPage_);
    }
    if(isLastPageIsSet_) {
        val[utility::conversions::to_string_t("is_last_page")] = ModelBase::toJson(isLastPage_);
    }
    if(listIsSet_) {
        val[utility::conversions::to_string_t("list")] = ModelBase::toJson(list_);
    }
    if(navigateFirstPageIsSet_) {
        val[utility::conversions::to_string_t("navigateFirstPage")] = ModelBase::toJson(navigateFirstPage_);
    }
    if(navigateLastPageIsSet_) {
        val[utility::conversions::to_string_t("navigateLastPage")] = ModelBase::toJson(navigateLastPage_);
    }
    if(navigatePagesIsSet_) {
        val[utility::conversions::to_string_t("navigate_pages")] = ModelBase::toJson(navigatePages_);
    }
    if(navigatepageNumsIsSet_) {
        val[utility::conversions::to_string_t("navigatepageNums")] = ModelBase::toJson(navigatepageNums_);
    }
    if(nextPageIsSet_) {
        val[utility::conversions::to_string_t("next_page")] = ModelBase::toJson(nextPage_);
    }
    if(pageNumIsSet_) {
        val[utility::conversions::to_string_t("page_num")] = ModelBase::toJson(pageNum_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }
    if(pagesIsSet_) {
        val[utility::conversions::to_string_t("pages")] = ModelBase::toJson(pages_);
    }
    if(prePageIsSet_) {
        val[utility::conversions::to_string_t("pre_page")] = ModelBase::toJson(prePage_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(startRowIsSet_) {
        val[utility::conversions::to_string_t("start_row")] = ModelBase::toJson(startRow_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool ListSubTestCaseByConditionsUsingResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("end_row"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_row"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndRow(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("has_next_page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("has_next_page"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHasNextPage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("has_previous_page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("has_previous_page"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHasPreviousPage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_first_page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_first_page"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsFirstPage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_last_page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_last_page"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsLastPage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("list"));
        if(!fieldValue.is_null())
        {
            std::vector<Object> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("navigateFirstPage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("navigateFirstPage"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNavigateFirstPage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("navigateLastPage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("navigateLastPage"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNavigateLastPage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("navigate_pages"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("navigate_pages"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNavigatePages(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("navigatepageNums"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("navigatepageNums"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNavigatepageNums(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("next_page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("next_page"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNextPage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageSize(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("pre_page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pre_page"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrePage(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("start_row"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_row"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartRow(refVal);
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


int64_t ListSubTestCaseByConditionsUsingResponse::getEndRow() const
{
    return endRow_;
}

void ListSubTestCaseByConditionsUsingResponse::setEndRow(int64_t value)
{
    endRow_ = value;
    endRowIsSet_ = true;
}

bool ListSubTestCaseByConditionsUsingResponse::endRowIsSet() const
{
    return endRowIsSet_;
}

void ListSubTestCaseByConditionsUsingResponse::unsetendRow()
{
    endRowIsSet_ = false;
}

bool ListSubTestCaseByConditionsUsingResponse::isHasNextPage() const
{
    return hasNextPage_;
}

void ListSubTestCaseByConditionsUsingResponse::setHasNextPage(bool value)
{
    hasNextPage_ = value;
    hasNextPageIsSet_ = true;
}

bool ListSubTestCaseByConditionsUsingResponse::hasNextPageIsSet() const
{
    return hasNextPageIsSet_;
}

void ListSubTestCaseByConditionsUsingResponse::unsethasNextPage()
{
    hasNextPageIsSet_ = false;
}

bool ListSubTestCaseByConditionsUsingResponse::isHasPreviousPage() const
{
    return hasPreviousPage_;
}

void ListSubTestCaseByConditionsUsingResponse::setHasPreviousPage(bool value)
{
    hasPreviousPage_ = value;
    hasPreviousPageIsSet_ = true;
}

bool ListSubTestCaseByConditionsUsingResponse::hasPreviousPageIsSet() const
{
    return hasPreviousPageIsSet_;
}

void ListSubTestCaseByConditionsUsingResponse::unsethasPreviousPage()
{
    hasPreviousPageIsSet_ = false;
}

bool ListSubTestCaseByConditionsUsingResponse::isIsFirstPage() const
{
    return isFirstPage_;
}

void ListSubTestCaseByConditionsUsingResponse::setIsFirstPage(bool value)
{
    isFirstPage_ = value;
    isFirstPageIsSet_ = true;
}

bool ListSubTestCaseByConditionsUsingResponse::isFirstPageIsSet() const
{
    return isFirstPageIsSet_;
}

void ListSubTestCaseByConditionsUsingResponse::unsetisFirstPage()
{
    isFirstPageIsSet_ = false;
}

bool ListSubTestCaseByConditionsUsingResponse::isIsLastPage() const
{
    return isLastPage_;
}

void ListSubTestCaseByConditionsUsingResponse::setIsLastPage(bool value)
{
    isLastPage_ = value;
    isLastPageIsSet_ = true;
}

bool ListSubTestCaseByConditionsUsingResponse::isLastPageIsSet() const
{
    return isLastPageIsSet_;
}

void ListSubTestCaseByConditionsUsingResponse::unsetisLastPage()
{
    isLastPageIsSet_ = false;
}

std::vector<Object>& ListSubTestCaseByConditionsUsingResponse::getList()
{
    return list_;
}

void ListSubTestCaseByConditionsUsingResponse::setList(const std::vector<Object>& value)
{
    list_ = value;
    listIsSet_ = true;
}

bool ListSubTestCaseByConditionsUsingResponse::listIsSet() const
{
    return listIsSet_;
}

void ListSubTestCaseByConditionsUsingResponse::unsetlist()
{
    listIsSet_ = false;
}

int32_t ListSubTestCaseByConditionsUsingResponse::getNavigateFirstPage() const
{
    return navigateFirstPage_;
}

void ListSubTestCaseByConditionsUsingResponse::setNavigateFirstPage(int32_t value)
{
    navigateFirstPage_ = value;
    navigateFirstPageIsSet_ = true;
}

bool ListSubTestCaseByConditionsUsingResponse::navigateFirstPageIsSet() const
{
    return navigateFirstPageIsSet_;
}

void ListSubTestCaseByConditionsUsingResponse::unsetnavigateFirstPage()
{
    navigateFirstPageIsSet_ = false;
}

int32_t ListSubTestCaseByConditionsUsingResponse::getNavigateLastPage() const
{
    return navigateLastPage_;
}

void ListSubTestCaseByConditionsUsingResponse::setNavigateLastPage(int32_t value)
{
    navigateLastPage_ = value;
    navigateLastPageIsSet_ = true;
}

bool ListSubTestCaseByConditionsUsingResponse::navigateLastPageIsSet() const
{
    return navigateLastPageIsSet_;
}

void ListSubTestCaseByConditionsUsingResponse::unsetnavigateLastPage()
{
    navigateLastPageIsSet_ = false;
}

int32_t ListSubTestCaseByConditionsUsingResponse::getNavigatePages() const
{
    return navigatePages_;
}

void ListSubTestCaseByConditionsUsingResponse::setNavigatePages(int32_t value)
{
    navigatePages_ = value;
    navigatePagesIsSet_ = true;
}

bool ListSubTestCaseByConditionsUsingResponse::navigatePagesIsSet() const
{
    return navigatePagesIsSet_;
}

void ListSubTestCaseByConditionsUsingResponse::unsetnavigatePages()
{
    navigatePagesIsSet_ = false;
}

std::vector<int32_t>& ListSubTestCaseByConditionsUsingResponse::getNavigatepageNums()
{
    return navigatepageNums_;
}

void ListSubTestCaseByConditionsUsingResponse::setNavigatepageNums(std::vector<int32_t> value)
{
    navigatepageNums_ = value;
    navigatepageNumsIsSet_ = true;
}

bool ListSubTestCaseByConditionsUsingResponse::navigatepageNumsIsSet() const
{
    return navigatepageNumsIsSet_;
}

void ListSubTestCaseByConditionsUsingResponse::unsetnavigatepageNums()
{
    navigatepageNumsIsSet_ = false;
}

int32_t ListSubTestCaseByConditionsUsingResponse::getNextPage() const
{
    return nextPage_;
}

void ListSubTestCaseByConditionsUsingResponse::setNextPage(int32_t value)
{
    nextPage_ = value;
    nextPageIsSet_ = true;
}

bool ListSubTestCaseByConditionsUsingResponse::nextPageIsSet() const
{
    return nextPageIsSet_;
}

void ListSubTestCaseByConditionsUsingResponse::unsetnextPage()
{
    nextPageIsSet_ = false;
}

int32_t ListSubTestCaseByConditionsUsingResponse::getPageNum() const
{
    return pageNum_;
}

void ListSubTestCaseByConditionsUsingResponse::setPageNum(int32_t value)
{
    pageNum_ = value;
    pageNumIsSet_ = true;
}

bool ListSubTestCaseByConditionsUsingResponse::pageNumIsSet() const
{
    return pageNumIsSet_;
}

void ListSubTestCaseByConditionsUsingResponse::unsetpageNum()
{
    pageNumIsSet_ = false;
}

int32_t ListSubTestCaseByConditionsUsingResponse::getPageSize() const
{
    return pageSize_;
}

void ListSubTestCaseByConditionsUsingResponse::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ListSubTestCaseByConditionsUsingResponse::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ListSubTestCaseByConditionsUsingResponse::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

int32_t ListSubTestCaseByConditionsUsingResponse::getPages() const
{
    return pages_;
}

void ListSubTestCaseByConditionsUsingResponse::setPages(int32_t value)
{
    pages_ = value;
    pagesIsSet_ = true;
}

bool ListSubTestCaseByConditionsUsingResponse::pagesIsSet() const
{
    return pagesIsSet_;
}

void ListSubTestCaseByConditionsUsingResponse::unsetpages()
{
    pagesIsSet_ = false;
}

int32_t ListSubTestCaseByConditionsUsingResponse::getPrePage() const
{
    return prePage_;
}

void ListSubTestCaseByConditionsUsingResponse::setPrePage(int32_t value)
{
    prePage_ = value;
    prePageIsSet_ = true;
}

bool ListSubTestCaseByConditionsUsingResponse::prePageIsSet() const
{
    return prePageIsSet_;
}

void ListSubTestCaseByConditionsUsingResponse::unsetprePage()
{
    prePageIsSet_ = false;
}

int32_t ListSubTestCaseByConditionsUsingResponse::getSize() const
{
    return size_;
}

void ListSubTestCaseByConditionsUsingResponse::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ListSubTestCaseByConditionsUsingResponse::sizeIsSet() const
{
    return sizeIsSet_;
}

void ListSubTestCaseByConditionsUsingResponse::unsetsize()
{
    sizeIsSet_ = false;
}

int64_t ListSubTestCaseByConditionsUsingResponse::getStartRow() const
{
    return startRow_;
}

void ListSubTestCaseByConditionsUsingResponse::setStartRow(int64_t value)
{
    startRow_ = value;
    startRowIsSet_ = true;
}

bool ListSubTestCaseByConditionsUsingResponse::startRowIsSet() const
{
    return startRowIsSet_;
}

void ListSubTestCaseByConditionsUsingResponse::unsetstartRow()
{
    startRowIsSet_ = false;
}

int64_t ListSubTestCaseByConditionsUsingResponse::getTotal() const
{
    return total_;
}

void ListSubTestCaseByConditionsUsingResponse::setTotal(int64_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListSubTestCaseByConditionsUsingResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListSubTestCaseByConditionsUsingResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


