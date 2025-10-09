
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListConfigurationApplyHistoriesResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListConfigurationApplyHistoriesResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/ApplyHistoryInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ListConfigurationApplyHistoriesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListConfigurationApplyHistoriesResponse();
    virtual ~ListConfigurationApplyHistoriesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListConfigurationApplyHistoriesResponse members

    /// <summary>
    /// **参数解释**：  参数组应用历史记录总数  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);

    /// <summary>
    /// **参数解释**：  应用历史详情列表  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::vector<ApplyHistoryInfo>& getHistories();
    bool historiesIsSet() const;
    void unsethistories();
    void setHistories(const std::vector<ApplyHistoryInfo>& value);


protected:
    int32_t totalCount_;
    bool totalCountIsSet_;
    std::vector<ApplyHistoryInfo> histories_;
    bool historiesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListConfigurationApplyHistoriesResponse_H_
