
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListInstancesConfigurationsResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListInstancesConfigurationsResponse_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/rds/v3/model/ApplicableInstanceInfo.h>

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
class HUAWEICLOUD_RDS_V3_EXPORT  ListInstancesConfigurationsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListInstancesConfigurationsResponse();
    virtual ~ListInstancesConfigurationsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListInstancesConfigurationsResponse members

    /// <summary>
    /// **参数解释**：  实例列表  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::vector<ApplicableInstanceInfo>& getEntities();
    bool entitiesIsSet() const;
    void unsetentities();
    void setEntities(const std::vector<ApplicableInstanceInfo>& value);

    /// <summary>
    /// **参数解释**：  实例的限制数量  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    int32_t getInstanceCountLimit() const;
    bool instanceCountLimitIsSet() const;
    void unsetinstanceCountLimit();
    void setInstanceCountLimit(int32_t value);

    /// <summary>
    /// **参数解释**：  应用参数模板的实例总数  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    int32_t getTotalCount() const;
    bool totalCountIsSet() const;
    void unsettotalCount();
    void setTotalCount(int32_t value);


protected:
    std::vector<ApplicableInstanceInfo> entities_;
    bool entitiesIsSet_;
    int32_t instanceCountLimit_;
    bool instanceCountLimitIsSet_;
    int32_t totalCount_;
    bool totalCountIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListInstancesConfigurationsResponse_H_
