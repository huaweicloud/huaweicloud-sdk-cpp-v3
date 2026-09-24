
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_MysqlAutoScalingRecord_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_MysqlAutoScalingRecord_H_


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
/// 自动变配记录。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  MysqlAutoScalingRecord
    : public ModelBase
{
public:
    MysqlAutoScalingRecord();
    virtual ~MysqlAutoScalingRecord();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MysqlAutoScalingRecord members

    /// <summary>
    /// **参数解释**：  记录ID。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**：  实例ID。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释**：  变配类型。  **约束限制**：  不涉及。  **取值范围**：  - ENLARGE_FLAVOR：升配 - REDUCE_FLAVOR：降配 - COUNT_UP：只读升配 - COUNT_DOWN：只读降配  **默认取值**：  不涉及。
    /// </summary>

    std::string getScalingType() const;
    bool scalingTypeIsSet() const;
    void unsetscalingType();
    void setScalingType(const std::string& value);

    /// <summary>
    /// **参数解释**：  原规格。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getOriginalValue() const;
    bool originalValueIsSet() const;
    void unsetoriginalValue();
    void setOriginalValue(const std::string& value);

    /// <summary>
    /// **参数解释**：  目标规格。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    std::string getTargetValue() const;
    bool targetValueIsSet() const;
    void unsettargetValue();
    void setTargetValue(const std::string& value);

    /// <summary>
    /// **参数解释**：  变更结果。  **约束限制**：  不涉及。  **取值范围**：  - SUCCESSFUL：成功 - FAILED：失败  **默认取值**：  不涉及。
    /// </summary>

    std::string getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::string& value);

    /// <summary>
    /// **参数解释**：  开始时间。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及。
    /// </summary>

    int64_t getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(int64_t value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string scalingType_;
    bool scalingTypeIsSet_;
    std::string originalValue_;
    bool originalValueIsSet_;
    std::string targetValue_;
    bool targetValueIsSet_;
    std::string result_;
    bool resultIsSet_;
    int64_t createdAt_;
    bool createdAtIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_MysqlAutoScalingRecord_H_
