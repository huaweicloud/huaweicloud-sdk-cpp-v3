
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_AttackTopRespBody_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_AttackTopRespBody_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/TopInfo.h>
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
class HUAWEICLOUD_CFW_V1_EXPORT  AttackTopRespBody
    : public ModelBase
{
public:
    AttackTopRespBody();
    virtual ~AttackTopRespBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AttackTopRespBody members

    /// <summary>
    /// **参数解释**： TOP攻击规则 **取值范围**： 不涉及
    /// </summary>

    std::vector<TopInfo>& getAttackRule();
    bool attackRuleIsSet() const;
    void unsetattackRule();
    void setAttackRule(const std::vector<TopInfo>& value);

    /// <summary>
    /// **参数解释**： TOP攻击类型 **取值范围**： 不涉及
    /// </summary>

    std::vector<TopInfo>& getAttackType();
    bool attackTypeIsSet() const;
    void unsetattackType();
    void setAttackType(const std::vector<TopInfo>& value);

    /// <summary>
    /// **参数解释**： TOP攻击目的IP **取值范围**： 不涉及
    /// </summary>

    std::vector<TopInfo>& getDstIp();
    bool dstIpIsSet() const;
    void unsetdstIp();
    void setDstIp(const std::vector<TopInfo>& value);

    /// <summary>
    /// **参数解释**： TOP被攻击端口 **取值范围**： 不涉及
    /// </summary>

    std::vector<TopInfo>& getDstPort();
    bool dstPortIsSet() const;
    void unsetdstPort();
    void setDstPort(const std::vector<TopInfo>& value);

    /// <summary>
    /// **参数解释**： TOP内部攻击来源IP **取值范围**： 不涉及
    /// </summary>

    std::vector<TopInfo>& getInSrcIp();
    bool inSrcIpIsSet() const;
    void unsetinSrcIp();
    void setInSrcIp(const std::vector<TopInfo>& value);

    /// <summary>
    /// **参数解释**： TOP威胁等级 **取值范围**： 不涉及
    /// </summary>

    std::vector<TopInfo>& getLevel();
    bool levelIsSet() const;
    void unsetlevel();
    void setLevel(const std::vector<TopInfo>& value);

    /// <summary>
    /// **参数解释**： TOP外部攻击来源IP **取值范围**： 不涉及
    /// </summary>

    std::vector<TopInfo>& getOutSrcIp();
    bool outSrcIpIsSet() const;
    void unsetoutSrcIp();
    void setOutSrcIp(const std::vector<TopInfo>& value);

    /// <summary>
    /// **参数解释**： TOP攻击来源IP **取值范围**： 不涉及
    /// </summary>

    std::vector<TopInfo>& getSrcIp();
    bool srcIpIsSet() const;
    void unsetsrcIp();
    void setSrcIp(const std::vector<TopInfo>& value);

    /// <summary>
    /// **参数解释**： 源地区ID **取值范围**： 不涉及
    /// </summary>

    std::vector<TopInfo>& getSrcRegionId();
    bool srcRegionIdIsSet() const;
    void unsetsrcRegionId();
    void setSrcRegionId(const std::vector<TopInfo>& value);


protected:
    std::vector<TopInfo> attackRule_;
    bool attackRuleIsSet_;
    std::vector<TopInfo> attackType_;
    bool attackTypeIsSet_;
    std::vector<TopInfo> dstIp_;
    bool dstIpIsSet_;
    std::vector<TopInfo> dstPort_;
    bool dstPortIsSet_;
    std::vector<TopInfo> inSrcIp_;
    bool inSrcIpIsSet_;
    std::vector<TopInfo> level_;
    bool levelIsSet_;
    std::vector<TopInfo> outSrcIp_;
    bool outSrcIpIsSet_;
    std::vector<TopInfo> srcIp_;
    bool srcIpIsSet_;
    std::vector<TopInfo> srcRegionId_;
    bool srcRegionIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_AttackTopRespBody_H_
