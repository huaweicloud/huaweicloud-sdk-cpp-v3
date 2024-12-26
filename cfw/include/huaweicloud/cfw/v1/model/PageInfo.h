
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_PageInfo_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_PageInfo_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  PageInfo
    : public ModelBase
{
public:
    PageInfo();
    virtual ~PageInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PageInfo members

    /// <summary>
    /// 
    /// </summary>

    int64_t getEndRow() const;
    bool endRowIsSet() const;
    void unsetendRow();
    void setEndRow(int64_t value);

    /// <summary>
    /// 
    /// </summary>

    bool isHasNextPage() const;
    bool hasNextPageIsSet() const;
    void unsethasNextPage();
    void setHasNextPage(bool value);

    /// <summary>
    /// 
    /// </summary>

    bool isHasPreviousPage() const;
    bool hasPreviousPageIsSet() const;
    void unsethasPreviousPage();
    void setHasPreviousPage(bool value);

    /// <summary>
    /// 
    /// </summary>

    bool isIsFirstPage() const;
    bool isFirstPageIsSet() const;
    void unsetisFirstPage();
    void setIsFirstPage(bool value);

    /// <summary>
    /// 
    /// </summary>

    bool isIsLastPage() const;
    bool isLastPageIsSet() const;
    void unsetisLastPage();
    void setIsLastPage(bool value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<Object>& getList();
    bool listIsSet() const;
    void unsetlist();
    void setList(const std::vector<Object>& value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getNavigateFirstPage() const;
    bool navigateFirstPageIsSet() const;
    void unsetnavigateFirstPage();
    void setNavigateFirstPage(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getNavigateLastPage() const;
    bool navigateLastPageIsSet() const;
    void unsetnavigateLastPage();
    void setNavigateLastPage(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getNavigatePages() const;
    bool navigatePagesIsSet() const;
    void unsetnavigatePages();
    void setNavigatePages(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<int32_t>& getNavigatepageNums();
    bool navigatepageNumsIsSet() const;
    void unsetnavigatepageNums();
    void setNavigatepageNums(std::vector<int32_t> value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getNextPage() const;
    bool nextPageIsSet() const;
    void unsetnextPage();
    void setNextPage(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getPageNum() const;
    bool pageNumIsSet() const;
    void unsetpageNum();
    void setPageNum(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getPageSize() const;
    bool pageSizeIsSet() const;
    void unsetpageSize();
    void setPageSize(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getPages() const;
    bool pagesIsSet() const;
    void unsetpages();
    void setPages(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getPrePage() const;
    bool prePageIsSet() const;
    void unsetprePage();
    void setPrePage(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    int64_t getStartRow() const;
    bool startRowIsSet() const;
    void unsetstartRow();
    void setStartRow(int64_t value);

    /// <summary>
    /// 
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
    std::vector<Object> list_;
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

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_PageInfo_H_
