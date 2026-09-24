
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ListAutoScalingHistoryRequest_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ListAutoScalingHistoryRequest_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ListAutoScalingHistoryRequest
    : public ModelBase
{
public:
    ListAutoScalingHistoryRequest();
    virtual ~ListAutoScalingHistoryRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAutoScalingHistoryRequest members

    /// <summary>
    /// **参数解释**：  实例ID。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释**：  请求语言类型。  **约束限制**：  不涉及。  **取值范围**：  - en-us - zh-cn  **默认取值**：  en-us。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// **参数解释**：  查询的变配策略类型。  **约束限制**：  不涉及。  **取值范围**：  - FLAVOR_SCALING：规格变配 - READ_ONLY_SCALING：只读变配  **默认取值**：  FLAVOR_SCALING。
    /// </summary>

    std::string getStrategyType() const;
    bool strategyTypeIsSet() const;
    void unsetstrategyType();
    void setStrategyType(const std::string& value);

    /// <summary>
    /// **参数解释**：  索引位置，偏移量。  **约束限制**：  不涉及。  **取值范围**：  不涉及  **默认取值**：  0
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// **参数解释**：  查询记录数。  **约束限制**：  不涉及。  **取值范围**：  1-100  **默认取值**：  10
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string strategyType_;
    bool strategyTypeIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListAutoScalingHistoryRequest& dereference_from_shared_ptr(std::shared_ptr<ListAutoScalingHistoryRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ListAutoScalingHistoryRequest_H_
