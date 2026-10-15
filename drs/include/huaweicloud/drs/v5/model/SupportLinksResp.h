
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_SupportLinksResp_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_SupportLinksResp_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/SupportLinkInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 查询可用链路信息响应体
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  SupportLinksResp
    : public ModelBase
{
public:
    SupportLinksResp();
    virtual ~SupportLinksResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SupportLinksResp members

    /// <summary>
    /// **参数解释**：  列表中的项目总数，与分页无关。表示满足查询条件的记录总数量，用于分页计算。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// **参数解释**：  DRS支持的数据复制链路列表，每条链路包含引擎类型、网络类型、迁移模式等组合信息。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::vector<SupportLinkInfo>& getSupportLinks();
    bool supportLinksIsSet() const;
    void unsetsupportLinks();
    void setSupportLinks(const std::vector<SupportLinkInfo>& value);


protected:
    int32_t totalCount_;
    bool totalCountIsSet_;
    std::vector<SupportLinkInfo> supportLinks_;
    bool supportLinksIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_SupportLinksResp_H_
