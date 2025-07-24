

#include "huaweicloud/cloudtest/v1/model/ListSubTaskCaseOverstockUsingResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListSubTaskCaseOverstockUsingResponse::ListSubTaskCaseOverstockUsingResponse()
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

ListSubTaskCaseOverstockUsingResponse::~ListSubTaskCaseOverstockUsingResponse() = default;

void ListSubTaskCaseOverstockUsingResponse::validate()
{
}

web::json::value ListSubTaskCaseOverstockUsingResponse::toJson() const
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
        val[utility::conversions::to_string_t("navigate_first_page")] = ModelBase::toJson(navigateFirstPage_);
    }
    if(navigateLastPageIsSet_) {
        val[utility::conversions::to_string_t("navigate_last_page")] = ModelBase::toJson(navigateLastPage_);
    }
    if(navigatePagesIsSet_) {
        val[utility::conversions::to_string_t("navigate_pages")] = ModelBase::toJson(navigatePages_);
    }
    if(navigatepageNumsIsSet_) {
        val[utility::conversions::to_string_t("navigatepage_nums")] = ModelBase::toJson(navigatepageNums_);
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
bool ListSubTaskCaseOverstockUsingResponse::fromJson(const web::json::value& val)
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
            std::vector<SubtaskcaseOverstockDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("navigate_first_page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("navigate_first_page"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNavigateFirstPage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("navigate_last_page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("navigate_last_page"));
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
    if(val.has_field(utility::conversions::to_string_t("navigatepage_nums"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("navigatepage_nums"));
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


int64_t ListSubTaskCaseOverstockUsingResponse::getEndRow() const
{
    return endRow_;
}

void ListSubTaskCaseOverstockUsingResponse::setEndRow(int64_t value)
{
    endRow_ = value;
    endRowIsSet_ = true;
}

bool ListSubTaskCaseOverstockUsingResponse::endRowIsSet() const
{
    return endRowIsSet_;
}

void ListSubTaskCaseOverstockUsingResponse::unsetendRow()
{
    endRowIsSet_ = false;
}

bool ListSubTaskCaseOverstockUsingResponse::isHasNextPage() const
{
    return hasNextPage_;
}

void ListSubTaskCaseOverstockUsingResponse::setHasNextPage(bool value)
{
    hasNextPage_ = value;
    hasNextPageIsSet_ = true;
}

bool ListSubTaskCaseOverstockUsingResponse::hasNextPageIsSet() const
{
    return hasNextPageIsSet_;
}

void ListSubTaskCaseOverstockUsingResponse::unsethasNextPage()
{
    hasNextPageIsSet_ = false;
}

bool ListSubTaskCaseOverstockUsingResponse::isHasPreviousPage() const
{
    return hasPreviousPage_;
}

void ListSubTaskCaseOverstockUsingResponse::setHasPreviousPage(bool value)
{
    hasPreviousPage_ = value;
    hasPreviousPageIsSet_ = true;
}

bool ListSubTaskCaseOverstockUsingResponse::hasPreviousPageIsSet() const
{
    return hasPreviousPageIsSet_;
}

void ListSubTaskCaseOverstockUsingResponse::unsethasPreviousPage()
{
    hasPreviousPageIsSet_ = false;
}

bool ListSubTaskCaseOverstockUsingResponse::isIsFirstPage() const
{
    return isFirstPage_;
}

void ListSubTaskCaseOverstockUsingResponse::setIsFirstPage(bool value)
{
    isFirstPage_ = value;
    isFirstPageIsSet_ = true;
}

bool ListSubTaskCaseOverstockUsingResponse::isFirstPageIsSet() const
{
    return isFirstPageIsSet_;
}

void ListSubTaskCaseOverstockUsingResponse::unsetisFirstPage()
{
    isFirstPageIsSet_ = false;
}

bool ListSubTaskCaseOverstockUsingResponse::isIsLastPage() const
{
    return isLastPage_;
}

void ListSubTaskCaseOverstockUsingResponse::setIsLastPage(bool value)
{
    isLastPage_ = value;
    isLastPageIsSet_ = true;
}

bool ListSubTaskCaseOverstockUsingResponse::isLastPageIsSet() const
{
    return isLastPageIsSet_;
}

void ListSubTaskCaseOverstockUsingResponse::unsetisLastPage()
{
    isLastPageIsSet_ = false;
}

std::vector<SubtaskcaseOverstockDto>& ListSubTaskCaseOverstockUsingResponse::getList()
{
    return list_;
}

void ListSubTaskCaseOverstockUsingResponse::setList(const std::vector<SubtaskcaseOverstockDto>& value)
{
    list_ = value;
    listIsSet_ = true;
}

bool ListSubTaskCaseOverstockUsingResponse::listIsSet() const
{
    return listIsSet_;
}

void ListSubTaskCaseOverstockUsingResponse::unsetlist()
{
    listIsSet_ = false;
}

int32_t ListSubTaskCaseOverstockUsingResponse::getNavigateFirstPage() const
{
    return navigateFirstPage_;
}

void ListSubTaskCaseOverstockUsingResponse::setNavigateFirstPage(int32_t value)
{
    navigateFirstPage_ = value;
    navigateFirstPageIsSet_ = true;
}

bool ListSubTaskCaseOverstockUsingResponse::navigateFirstPageIsSet() const
{
    return navigateFirstPageIsSet_;
}

void ListSubTaskCaseOverstockUsingResponse::unsetnavigateFirstPage()
{
    navigateFirstPageIsSet_ = false;
}

int32_t ListSubTaskCaseOverstockUsingResponse::getNavigateLastPage() const
{
    return navigateLastPage_;
}

void ListSubTaskCaseOverstockUsingResponse::setNavigateLastPage(int32_t value)
{
    navigateLastPage_ = value;
    navigateLastPageIsSet_ = true;
}

bool ListSubTaskCaseOverstockUsingResponse::navigateLastPageIsSet() const
{
    return navigateLastPageIsSet_;
}

void ListSubTaskCaseOverstockUsingResponse::unsetnavigateLastPage()
{
    navigateLastPageIsSet_ = false;
}

int32_t ListSubTaskCaseOverstockUsingResponse::getNavigatePages() const
{
    return navigatePages_;
}

void ListSubTaskCaseOverstockUsingResponse::setNavigatePages(int32_t value)
{
    navigatePages_ = value;
    navigatePagesIsSet_ = true;
}

bool ListSubTaskCaseOverstockUsingResponse::navigatePagesIsSet() const
{
    return navigatePagesIsSet_;
}

void ListSubTaskCaseOverstockUsingResponse::unsetnavigatePages()
{
    navigatePagesIsSet_ = false;
}

std::vector<int32_t>& ListSubTaskCaseOverstockUsingResponse::getNavigatepageNums()
{
    return navigatepageNums_;
}

void ListSubTaskCaseOverstockUsingResponse::setNavigatepageNums(std::vector<int32_t> value)
{
    navigatepageNums_ = value;
    navigatepageNumsIsSet_ = true;
}

bool ListSubTaskCaseOverstockUsingResponse::navigatepageNumsIsSet() const
{
    return navigatepageNumsIsSet_;
}

void ListSubTaskCaseOverstockUsingResponse::unsetnavigatepageNums()
{
    navigatepageNumsIsSet_ = false;
}

int32_t ListSubTaskCaseOverstockUsingResponse::getNextPage() const
{
    return nextPage_;
}

void ListSubTaskCaseOverstockUsingResponse::setNextPage(int32_t value)
{
    nextPage_ = value;
    nextPageIsSet_ = true;
}

bool ListSubTaskCaseOverstockUsingResponse::nextPageIsSet() const
{
    return nextPageIsSet_;
}

void ListSubTaskCaseOverstockUsingResponse::unsetnextPage()
{
    nextPageIsSet_ = false;
}

int32_t ListSubTaskCaseOverstockUsingResponse::getPageNum() const
{
    return pageNum_;
}

void ListSubTaskCaseOverstockUsingResponse::setPageNum(int32_t value)
{
    pageNum_ = value;
    pageNumIsSet_ = true;
}

bool ListSubTaskCaseOverstockUsingResponse::pageNumIsSet() const
{
    return pageNumIsSet_;
}

void ListSubTaskCaseOverstockUsingResponse::unsetpageNum()
{
    pageNumIsSet_ = false;
}

int32_t ListSubTaskCaseOverstockUsingResponse::getPageSize() const
{
    return pageSize_;
}

void ListSubTaskCaseOverstockUsingResponse::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ListSubTaskCaseOverstockUsingResponse::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ListSubTaskCaseOverstockUsingResponse::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

int32_t ListSubTaskCaseOverstockUsingResponse::getPages() const
{
    return pages_;
}

void ListSubTaskCaseOverstockUsingResponse::setPages(int32_t value)
{
    pages_ = value;
    pagesIsSet_ = true;
}

bool ListSubTaskCaseOverstockUsingResponse::pagesIsSet() const
{
    return pagesIsSet_;
}

void ListSubTaskCaseOverstockUsingResponse::unsetpages()
{
    pagesIsSet_ = false;
}

int32_t ListSubTaskCaseOverstockUsingResponse::getPrePage() const
{
    return prePage_;
}

void ListSubTaskCaseOverstockUsingResponse::setPrePage(int32_t value)
{
    prePage_ = value;
    prePageIsSet_ = true;
}

bool ListSubTaskCaseOverstockUsingResponse::prePageIsSet() const
{
    return prePageIsSet_;
}

void ListSubTaskCaseOverstockUsingResponse::unsetprePage()
{
    prePageIsSet_ = false;
}

int32_t ListSubTaskCaseOverstockUsingResponse::getSize() const
{
    return size_;
}

void ListSubTaskCaseOverstockUsingResponse::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ListSubTaskCaseOverstockUsingResponse::sizeIsSet() const
{
    return sizeIsSet_;
}

void ListSubTaskCaseOverstockUsingResponse::unsetsize()
{
    sizeIsSet_ = false;
}

int64_t ListSubTaskCaseOverstockUsingResponse::getStartRow() const
{
    return startRow_;
}

void ListSubTaskCaseOverstockUsingResponse::setStartRow(int64_t value)
{
    startRow_ = value;
    startRowIsSet_ = true;
}

bool ListSubTaskCaseOverstockUsingResponse::startRowIsSet() const
{
    return startRowIsSet_;
}

void ListSubTaskCaseOverstockUsingResponse::unsetstartRow()
{
    startRowIsSet_ = false;
}

int64_t ListSubTaskCaseOverstockUsingResponse::getTotal() const
{
    return total_;
}

void ListSubTaskCaseOverstockUsingResponse::setTotal(int64_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListSubTaskCaseOverstockUsingResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListSubTaskCaseOverstockUsingResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


