
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_AttackReport_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_AttackReport_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/TrendVO.h>
#include <huaweicloud/cfw/v1/model/ItemVO.h>
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
class HUAWEICLOUD_CFW_V1_EXPORT  AttackReport
    : public ModelBase
{
public:
    AttackReport();
    virtual ~AttackReport();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AttackReport members

    /// <summary>
    /// **参数解释**： TOP攻击目的IP **取值范围**： 不涉及
    /// </summary>

    std::vector<ItemVO>& getDstIp();
    bool dstIpIsSet() const;
    void unsetdstIp();
    void setDstIp(const std::vector<ItemVO>& value);

    /// <summary>
    /// **参数解释**： 入侵防御状态 **取值范围**： 不涉及
    /// </summary>

    int32_t getIpsMode() const;
    bool ipsModeIsSet() const;
    void unsetipsMode();
    void setIpsMode(int32_t value);

    /// <summary>
    /// **参数解释**： 攻击等级分布 **取值范围**： 不涉及
    /// </summary>

    std::vector<ItemVO>& getLevel();
    bool levelIsSet() const;
    void unsetlevel();
    void setLevel(const std::vector<ItemVO>& value);

    /// <summary>
    /// **参数解释**： TOP攻击规则 **取值范围**： 不涉及
    /// </summary>

    std::vector<ItemVO>& getRule();
    bool ruleIsSet() const;
    void unsetrule();
    void setRule(const std::vector<ItemVO>& value);

    /// <summary>
    /// **参数解释**： TOP来源IP **取值范围**： 不涉及
    /// </summary>

    std::vector<ItemVO>& getSrcIp();
    bool srcIpIsSet() const;
    void unsetsrcIp();
    void setSrcIp(const std::vector<ItemVO>& value);

    /// <summary>
    /// **参数解释**： 攻击趋势 **取值范围**： 不涉及
    /// </summary>

    std::vector<TrendVO>& getTrend();
    bool trendIsSet() const;
    void unsettrend();
    void setTrend(const std::vector<TrendVO>& value);

    /// <summary>
    /// **参数解释**： TOP攻击分布 **取值范围**： 不涉及
    /// </summary>

    std::vector<ItemVO>& getType();
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::vector<ItemVO>& value);


protected:
    std::vector<ItemVO> dstIp_;
    bool dstIpIsSet_;
    int32_t ipsMode_;
    bool ipsModeIsSet_;
    std::vector<ItemVO> level_;
    bool levelIsSet_;
    std::vector<ItemVO> rule_;
    bool ruleIsSet_;
    std::vector<ItemVO> srcIp_;
    bool srcIpIsSet_;
    std::vector<TrendVO> trend_;
    bool trendIsSet_;
    std::vector<ItemVO> type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_AttackReport_H_
