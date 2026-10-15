
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_PageReq_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_PageReq_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 分页请求体
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  PageReq
    : public ModelBase
{
public:
    PageReq();
    virtual ~PageReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PageReq members

    /// <summary>
    /// **参数解释**：  当前页码，用于分页查询时指定返回第几页的数据。填0可获取全部数据项。  **约束限制**：  - 当per_page填0时，cur_page只能填0或1。 - 不能超过传入jobID数量除每页任务数量的最大页。  **取值范围**：  不涉及。  **默认取值**：  1
    /// </summary>

    int32_t getCurPage() const;
    bool curPageIsSet() const;
    void unsetcurPage();
    void setCurPage(int32_t value);

    /// <summary>
    /// **参数解释**：  每页返回的记录数，用于分页查询时控制每页数据量。填0可获取全部数据项。  **约束限制**：  - 填0时，cur_page只能填0或1。  **取值范围**：  0-100。  **默认取值**：  5
    /// </summary>

    int32_t getPerPage() const;
    bool perPageIsSet() const;
    void unsetperPage();
    void setPerPage(int32_t value);


protected:
    int32_t curPage_;
    bool curPageIsSet_;
    int32_t perPage_;
    bool perPageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_PageReq_H_
