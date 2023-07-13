
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_ChartConfig_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_ChartConfig_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  ChartConfig
    : public ModelBase
{
public:
    ChartConfig();
    virtual ~ChartConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ChartConfig members

    /// <summary>
    /// 是否开启排序
    /// </summary>

    bool isCanSort() const;
    bool canSortIsSet() const;
    void unsetcanSort();
    void setCanSort(bool value);

    /// <summary>
    /// 是否开启搜索
    /// </summary>

    bool isCanSearch() const;
    bool canSearchIsSet() const;
    void unsetcanSearch();
    void setCanSearch(bool value);

    /// <summary>
    /// 每页显示数量
    /// </summary>

    int32_t getPageSize() const;
    bool pageSizeIsSet() const;
    void unsetpageSize();
    void setPageSize(int32_t value);


protected:
    bool canSort_;
    bool canSortIsSet_;
    bool canSearch_;
    bool canSearchIsSet_;
    int32_t pageSize_;
    bool pageSizeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_ChartConfig_H_
