

#include "huaweicloud/cfw/v1/model/PageInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




PageInfo::PageInfo()
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

PageInfo::~PageInfo() = default;

void PageInfo::validate()
{
}

web::json::value PageInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(endRowIsSet_) {
        val[utility::conversions::to_string_t("endRow")] = ModelBase::toJson(endRow_);
    }
    if(hasNextPageIsSet_) {
        val[utility::conversions::to_string_t("hasNextPage")] = ModelBase::toJson(hasNextPage_);
    }
    if(hasPreviousPageIsSet_) {
        val[utility::conversions::to_string_t("hasPreviousPage")] = ModelBase::toJson(hasPreviousPage_);
    }
    if(isFirstPageIsSet_) {
        val[utility::conversions::to_string_t("isFirstPage")] = ModelBase::toJson(isFirstPage_);
    }
    if(isLastPageIsSet_) {
        val[utility::conversions::to_string_t("isLastPage")] = ModelBase::toJson(isLastPage_);
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
        val[utility::conversions::to_string_t("navigatePages")] = ModelBase::toJson(navigatePages_);
    }
    if(navigatepageNumsIsSet_) {
        val[utility::conversions::to_string_t("navigatepageNums")] = ModelBase::toJson(navigatepageNums_);
    }
    if(nextPageIsSet_) {
        val[utility::conversions::to_string_t("nextPage")] = ModelBase::toJson(nextPage_);
    }
    if(pageNumIsSet_) {
        val[utility::conversions::to_string_t("pageNum")] = ModelBase::toJson(pageNum_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("pageSize")] = ModelBase::toJson(pageSize_);
    }
    if(pagesIsSet_) {
        val[utility::conversions::to_string_t("pages")] = ModelBase::toJson(pages_);
    }
    if(prePageIsSet_) {
        val[utility::conversions::to_string_t("prePage")] = ModelBase::toJson(prePage_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(startRowIsSet_) {
        val[utility::conversions::to_string_t("startRow")] = ModelBase::toJson(startRow_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool PageInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("endRow"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endRow"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndRow(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hasNextPage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hasNextPage"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHasNextPage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hasPreviousPage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hasPreviousPage"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHasPreviousPage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isFirstPage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isFirstPage"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsFirstPage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isLastPage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isLastPage"));
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
    if(val.has_field(utility::conversions::to_string_t("navigatePages"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("navigatePages"));
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
    if(val.has_field(utility::conversions::to_string_t("nextPage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nextPage"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNextPage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pageNum"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pageNum"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageNum(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("pages"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pages"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPages(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("prePage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("prePage"));
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
    if(val.has_field(utility::conversions::to_string_t("startRow"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("startRow"));
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


int64_t PageInfo::getEndRow() const
{
    return endRow_;
}

void PageInfo::setEndRow(int64_t value)
{
    endRow_ = value;
    endRowIsSet_ = true;
}

bool PageInfo::endRowIsSet() const
{
    return endRowIsSet_;
}

void PageInfo::unsetendRow()
{
    endRowIsSet_ = false;
}

bool PageInfo::isHasNextPage() const
{
    return hasNextPage_;
}

void PageInfo::setHasNextPage(bool value)
{
    hasNextPage_ = value;
    hasNextPageIsSet_ = true;
}

bool PageInfo::hasNextPageIsSet() const
{
    return hasNextPageIsSet_;
}

void PageInfo::unsethasNextPage()
{
    hasNextPageIsSet_ = false;
}

bool PageInfo::isHasPreviousPage() const
{
    return hasPreviousPage_;
}

void PageInfo::setHasPreviousPage(bool value)
{
    hasPreviousPage_ = value;
    hasPreviousPageIsSet_ = true;
}

bool PageInfo::hasPreviousPageIsSet() const
{
    return hasPreviousPageIsSet_;
}

void PageInfo::unsethasPreviousPage()
{
    hasPreviousPageIsSet_ = false;
}

bool PageInfo::isIsFirstPage() const
{
    return isFirstPage_;
}

void PageInfo::setIsFirstPage(bool value)
{
    isFirstPage_ = value;
    isFirstPageIsSet_ = true;
}

bool PageInfo::isFirstPageIsSet() const
{
    return isFirstPageIsSet_;
}

void PageInfo::unsetisFirstPage()
{
    isFirstPageIsSet_ = false;
}

bool PageInfo::isIsLastPage() const
{
    return isLastPage_;
}

void PageInfo::setIsLastPage(bool value)
{
    isLastPage_ = value;
    isLastPageIsSet_ = true;
}

bool PageInfo::isLastPageIsSet() const
{
    return isLastPageIsSet_;
}

void PageInfo::unsetisLastPage()
{
    isLastPageIsSet_ = false;
}

std::vector<Object>& PageInfo::getList()
{
    return list_;
}

void PageInfo::setList(const std::vector<Object>& value)
{
    list_ = value;
    listIsSet_ = true;
}

bool PageInfo::listIsSet() const
{
    return listIsSet_;
}

void PageInfo::unsetlist()
{
    listIsSet_ = false;
}

int32_t PageInfo::getNavigateFirstPage() const
{
    return navigateFirstPage_;
}

void PageInfo::setNavigateFirstPage(int32_t value)
{
    navigateFirstPage_ = value;
    navigateFirstPageIsSet_ = true;
}

bool PageInfo::navigateFirstPageIsSet() const
{
    return navigateFirstPageIsSet_;
}

void PageInfo::unsetnavigateFirstPage()
{
    navigateFirstPageIsSet_ = false;
}

int32_t PageInfo::getNavigateLastPage() const
{
    return navigateLastPage_;
}

void PageInfo::setNavigateLastPage(int32_t value)
{
    navigateLastPage_ = value;
    navigateLastPageIsSet_ = true;
}

bool PageInfo::navigateLastPageIsSet() const
{
    return navigateLastPageIsSet_;
}

void PageInfo::unsetnavigateLastPage()
{
    navigateLastPageIsSet_ = false;
}

int32_t PageInfo::getNavigatePages() const
{
    return navigatePages_;
}

void PageInfo::setNavigatePages(int32_t value)
{
    navigatePages_ = value;
    navigatePagesIsSet_ = true;
}

bool PageInfo::navigatePagesIsSet() const
{
    return navigatePagesIsSet_;
}

void PageInfo::unsetnavigatePages()
{
    navigatePagesIsSet_ = false;
}

std::vector<int32_t>& PageInfo::getNavigatepageNums()
{
    return navigatepageNums_;
}

void PageInfo::setNavigatepageNums(std::vector<int32_t> value)
{
    navigatepageNums_ = value;
    navigatepageNumsIsSet_ = true;
}

bool PageInfo::navigatepageNumsIsSet() const
{
    return navigatepageNumsIsSet_;
}

void PageInfo::unsetnavigatepageNums()
{
    navigatepageNumsIsSet_ = false;
}

int32_t PageInfo::getNextPage() const
{
    return nextPage_;
}

void PageInfo::setNextPage(int32_t value)
{
    nextPage_ = value;
    nextPageIsSet_ = true;
}

bool PageInfo::nextPageIsSet() const
{
    return nextPageIsSet_;
}

void PageInfo::unsetnextPage()
{
    nextPageIsSet_ = false;
}

int32_t PageInfo::getPageNum() const
{
    return pageNum_;
}

void PageInfo::setPageNum(int32_t value)
{
    pageNum_ = value;
    pageNumIsSet_ = true;
}

bool PageInfo::pageNumIsSet() const
{
    return pageNumIsSet_;
}

void PageInfo::unsetpageNum()
{
    pageNumIsSet_ = false;
}

int32_t PageInfo::getPageSize() const
{
    return pageSize_;
}

void PageInfo::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool PageInfo::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void PageInfo::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

int32_t PageInfo::getPages() const
{
    return pages_;
}

void PageInfo::setPages(int32_t value)
{
    pages_ = value;
    pagesIsSet_ = true;
}

bool PageInfo::pagesIsSet() const
{
    return pagesIsSet_;
}

void PageInfo::unsetpages()
{
    pagesIsSet_ = false;
}

int32_t PageInfo::getPrePage() const
{
    return prePage_;
}

void PageInfo::setPrePage(int32_t value)
{
    prePage_ = value;
    prePageIsSet_ = true;
}

bool PageInfo::prePageIsSet() const
{
    return prePageIsSet_;
}

void PageInfo::unsetprePage()
{
    prePageIsSet_ = false;
}

int32_t PageInfo::getSize() const
{
    return size_;
}

void PageInfo::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool PageInfo::sizeIsSet() const
{
    return sizeIsSet_;
}

void PageInfo::unsetsize()
{
    sizeIsSet_ = false;
}

int64_t PageInfo::getStartRow() const
{
    return startRow_;
}

void PageInfo::setStartRow(int64_t value)
{
    startRow_ = value;
    startRowIsSet_ = true;
}

bool PageInfo::startRowIsSet() const
{
    return startRowIsSet_;
}

void PageInfo::unsetstartRow()
{
    startRowIsSet_ = false;
}

int64_t PageInfo::getTotal() const
{
    return total_;
}

void PageInfo::setTotal(int64_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool PageInfo::totalIsSet() const
{
    return totalIsSet_;
}

void PageInfo::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


