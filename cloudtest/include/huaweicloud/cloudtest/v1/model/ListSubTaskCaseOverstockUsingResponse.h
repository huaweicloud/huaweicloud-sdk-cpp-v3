
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListSubTaskCaseOverstockUsingResponse_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListSubTaskCaseOverstockUsingResponse_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtest/v1/model/SubtaskcaseOverstockDto.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ListSubTaskCaseOverstockUsingResponse
    : public ModelBase, public HttpResponse
{
public:
    ListSubTaskCaseOverstockUsingResponse();
    virtual ~ListSubTaskCaseOverstockUsingResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListSubTaskCaseOverstockUsingResponse members

    /// <summary>
    /// 当前页面最后一个元素在数据库中的行号
    /// </summary>

    int64_t getEndRow() const;
    bool endRowIsSet() const;
    void unsetendRow();
    void setEndRow(int64_t value);

    /// <summary>
    /// 是否有下一页
    /// </summary>

    bool isHasNextPage() const;
    bool hasNextPageIsSet() const;
    void unsethasNextPage();
    void setHasNextPage(bool value);

    /// <summary>
    /// 是否有前一页
    /// </summary>

    bool isHasPreviousPage() const;
    bool hasPreviousPageIsSet() const;
    void unsethasPreviousPage();
    void setHasPreviousPage(bool value);

    /// <summary>
    /// 是否为第一页
    /// </summary>

    bool isIsFirstPage() const;
    bool isFirstPageIsSet() const;
    void unsetisFirstPage();
    void setIsFirstPage(bool value);

    /// <summary>
    /// 是否为最后一页
    /// </summary>

    bool isIsLastPage() const;
    bool isLastPageIsSet() const;
    void unsetisLastPage();
    void setIsLastPage(bool value);

    /// <summary>
    /// 返回结果
    /// </summary>

    std::vector<SubtaskcaseOverstockDto>& getList();
    bool listIsSet() const;
    void unsetlist();
    void setList(const std::vector<SubtaskcaseOverstockDto>& value);

    /// <summary>
    /// 导航条上的第一页
    /// </summary>

    int32_t getNavigateFirstPage() const;
    bool navigateFirstPageIsSet() const;
    void unsetnavigateFirstPage();
    void setNavigateFirstPage(int32_t value);

    /// <summary>
    /// 导航条上的最后一页
    /// </summary>

    int32_t getNavigateLastPage() const;
    bool navigateLastPageIsSet() const;
    void unsetnavigateLastPage();
    void setNavigateLastPage(int32_t value);

    /// <summary>
    /// 导航页码数
    /// </summary>

    int32_t getNavigatePages() const;
    bool navigatePagesIsSet() const;
    void unsetnavigatePages();
    void setNavigatePages(int32_t value);

    /// <summary>
    /// 所有导航页号
    /// </summary>

    std::vector<int32_t>& getNavigatepageNums();
    bool navigatepageNumsIsSet() const;
    void unsetnavigatepageNums();
    void setNavigatepageNums(std::vector<int32_t> value);

    /// <summary>
    /// 下一页
    /// </summary>

    int32_t getNextPage() const;
    bool nextPageIsSet() const;
    void unsetnextPage();
    void setNextPage(int32_t value);

    /// <summary>
    /// 当前页
    /// </summary>

    int32_t getPageNum() const;
    bool pageNumIsSet() const;
    void unsetpageNum();
    void setPageNum(int32_t value);

    /// <summary>
    /// 每页的数量
    /// </summary>

    int32_t getPageSize() const;
    bool pageSizeIsSet() const;
    void unsetpageSize();
    void setPageSize(int32_t value);

    /// <summary>
    /// 总页数
    /// </summary>

    int32_t getPages() const;
    bool pagesIsSet() const;
    void unsetpages();
    void setPages(int32_t value);

    /// <summary>
    /// 前一页
    /// </summary>

    int32_t getPrePage() const;
    bool prePageIsSet() const;
    void unsetprePage();
    void setPrePage(int32_t value);

    /// <summary>
    /// 当前页的数量
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);

    /// <summary>
    /// 当前页面第一个元素在数据库中的行号
    /// </summary>

    int64_t getStartRow() const;
    bool startRowIsSet() const;
    void unsetstartRow();
    void setStartRow(int64_t value);

    /// <summary>
    /// 总条数
    /// </summary>

    int64_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int64_t value);


protected:
    int64_t endRow_;
    bool endRowIsSet_;
    bool hasNextPage_;
    bool hasNextPageIsSet_;
    bool hasPreviousPage_;
    bool hasPreviousPageIsSet_;
    bool isFirstPage_;
    bool isFirstPageIsSet_;
    bool isLastPage_;
    bool isLastPageIsSet_;
    std::vector<SubtaskcaseOverstockDto> list_;
    bool listIsSet_;
    int32_t navigateFirstPage_;
    bool navigateFirstPageIsSet_;
    int32_t navigateLastPage_;
    bool navigateLastPageIsSet_;
    int32_t navigatePages_;
    bool navigatePagesIsSet_;
    std::vector<int32_t> navigatepageNums_;
    bool navigatepageNumsIsSet_;
    int32_t nextPage_;
    bool nextPageIsSet_;
    int32_t pageNum_;
    bool pageNumIsSet_;
    int32_t pageSize_;
    bool pageSizeIsSet_;
    int32_t pages_;
    bool pagesIsSet_;
    int32_t prePage_;
    bool prePageIsSet_;
    int32_t size_;
    bool sizeIsSet_;
    int64_t startRow_;
    bool startRowIsSet_;
    int64_t total_;
    bool totalIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListSubTaskCaseOverstockUsingResponse_H_
