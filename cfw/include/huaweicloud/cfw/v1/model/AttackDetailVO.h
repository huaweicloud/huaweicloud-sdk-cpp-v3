
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_AttackDetailVO_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_AttackDetailVO_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/AttackLog.h>
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
class HUAWEICLOUD_CFW_V1_EXPORT  AttackDetailVO
    : public ModelBase
{
public:
    AttackDetailVO();
    virtual ~AttackDetailVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AttackDetailVO members

    /// <summary>
    /// **参数解释**： 应用数量 **取值范围**： 不涉及
    /// </summary>

    int64_t getAppCount() const;
    bool appCountIsSet() const;
    void unsetappCount();
    void setAppCount(int64_t value);

    /// <summary>
    /// **参数解释**： 攻击规则数量 **取值范围**： 不涉及
    /// </summary>

    int64_t getAttackRuleCount() const;
    bool attackRuleCountIsSet() const;
    void unsetattackRuleCount();
    void setAttackRuleCount(int64_t value);

    /// <summary>
    /// **参数解释**： 攻击类型数量 **取值范围**： 不涉及
    /// </summary>

    int64_t getAttackTypeCount() const;
    bool attackTypeCountIsSet() const;
    void unsetattackTypeCount();
    void setAttackTypeCount(int64_t value);

    /// <summary>
    /// **参数解释**： 攻击次数 **取值范围**： 不涉及
    /// </summary>

    int64_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int64_t value);

    /// <summary>
    /// **参数解释**： 目的IP数量 **取值范围**： 不涉及
    /// </summary>

    int64_t getDstIpCount() const;
    bool dstIpCountIsSet() const;
    void unsetdstIpCount();
    void setDstIpCount(int64_t value);

    /// <summary>
    /// **参数解释**： 攻击端口数量 **取值范围**： 不涉及
    /// </summary>

    int64_t getDstPortCount() const;
    bool dstPortCountIsSet() const;
    void unsetdstPortCount();
    void setDstPortCount(int64_t value);

    /// <summary>
    /// **参数解释**： 结束时间 **取值范围**： 不涉及
    /// </summary>

    int64_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int64_t value);

    /// <summary>
    /// **参数解释**： 攻击事件明细 **取值范围**： 不涉及
    /// </summary>

    std::vector<AttackLog>& getRecords();
    bool recordsIsSet() const;
    void unsetrecords();
    void setRecords(const std::vector<AttackLog>& value);

    /// <summary>
    /// **参数解释**： 源IP数量 **取值范围**： 不涉及
    /// </summary>

    int64_t getSrcIpCount() const;
    bool srcIpCountIsSet() const;
    void unsetsrcIpCount();
    void setSrcIpCount(int64_t value);

    /// <summary>
    /// **参数解释**： 开始时间 **取值范围**： 不涉及
    /// </summary>

    int64_t getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(int64_t value);

    /// <summary>
    /// **参数解释**： 总数 **取值范围**： 不涉及
    /// </summary>

    int64_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int64_t value);


protected:
    int64_t appCount_;
    bool appCountIsSet_;
    int64_t attackRuleCount_;
    bool attackRuleCountIsSet_;
    int64_t attackTypeCount_;
    bool attackTypeCountIsSet_;
    int64_t count_;
    bool countIsSet_;
    int64_t dstIpCount_;
    bool dstIpCountIsSet_;
    int64_t dstPortCount_;
    bool dstPortCountIsSet_;
    int64_t endTime_;
    bool endTimeIsSet_;
    std::vector<AttackLog> records_;
    bool recordsIsSet_;
    int64_t srcIpCount_;
    bool srcIpCountIsSet_;
    int64_t startTime_;
    bool startTimeIsSet_;
    int64_t total_;
    bool totalIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_AttackDetailVO_H_
