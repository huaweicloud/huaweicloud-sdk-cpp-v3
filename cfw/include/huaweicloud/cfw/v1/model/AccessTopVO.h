
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_AccessTopVO_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_AccessTopVO_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/AccessTopStatisticsVO.h>
#include <string>
#include <huaweicloud/cfw/v1/model/AccessTopMemberVO.h>
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
class HUAWEICLOUD_CFW_V1_EXPORT  AccessTopVO
    : public ModelBase
{
public:
    AccessTopVO();
    virtual ~AccessTopVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AccessTopVO members

    /// <summary>
    /// **参数解释**： 阻断次数 **取值范围**： 不涉及
    /// </summary>

    int64_t getDenyCount() const;
    bool denyCountIsSet() const;
    void unsetdenyCount();
    void setDenyCount(int64_t value);

    /// <summary>
    /// **参数解释**： Top命中的阻断策略ID **取值范围**： 不涉及
    /// </summary>

    std::string getDenyTopOneAclId() const;
    bool denyTopOneAclIdIsSet() const;
    void unsetdenyTopOneAclId();
    void setDenyTopOneAclId(const std::string& value);

    /// <summary>
    /// **参数解释**： Top命中的阻断策略名称 **取值范围**： 不涉及
    /// </summary>

    std::string getDenyTopOneAclName() const;
    bool denyTopOneAclNameIsSet() const;
    void unsetdenyTopOneAclName();
    void setDenyTopOneAclName(const std::string& value);

    /// <summary>
    /// **参数解释**： 命中次数 **取值范围**： 不涉及
    /// </summary>

    int64_t getHitCount() const;
    bool hitCountIsSet() const;
    void unsethitCount();
    void setHitCount(int64_t value);

    /// <summary>
    /// **参数解释**： TOP出云阻断目的IP列表 **取值范围**： 不涉及
    /// </summary>

    std::vector<AccessTopMemberVO>& getIn2outDenyDstIpList();
    bool in2outDenyDstIpListIsSet() const;
    void unsetin2outDenyDstIpList();
    void setIn2outDenyDstIpList(const std::vector<AccessTopMemberVO>& value);

    /// <summary>
    /// **参数解释**： TOP出云阻断端口列表 **取值范围**： 不涉及
    /// </summary>

    std::vector<AccessTopMemberVO>& getIn2outDenyDstPortList();
    bool in2outDenyDstPortListIsSet() const;
    void unsetin2outDenyDstPortList();
    void setIn2outDenyDstPortList(const std::vector<AccessTopMemberVO>& value);

    /// <summary>
    /// **参数解释**： TOP出云阻断目的地区列表 **取值范围**： 不涉及
    /// </summary>

    std::vector<AccessTopMemberVO>& getIn2outDenyDstRegionList();
    bool in2outDenyDstRegionListIsSet() const;
    void unsetin2outDenyDstRegionList();
    void setIn2outDenyDstRegionList(const std::vector<AccessTopMemberVO>& value);

    /// <summary>
    /// **参数解释**： TOP出云阻断源IP列表 **取值范围**： 不涉及
    /// </summary>

    std::vector<AccessTopMemberVO>& getIn2outDenySrcIpList();
    bool in2outDenySrcIpListIsSet() const;
    void unsetin2outDenySrcIpList();
    void setIn2outDenySrcIpList(const std::vector<AccessTopMemberVO>& value);

    /// <summary>
    /// **参数解释**： TOP入云阻断目的IP列表 **取值范围**： 不涉及
    /// </summary>

    std::vector<AccessTopMemberVO>& getOut2inDenyDstIpList();
    bool out2inDenyDstIpListIsSet() const;
    void unsetout2inDenyDstIpList();
    void setOut2inDenyDstIpList(const std::vector<AccessTopMemberVO>& value);

    /// <summary>
    /// **参数解释**： TOP入云阻断目的端口列表 **取值范围**： 不涉及
    /// </summary>

    std::vector<AccessTopMemberVO>& getOut2inDenyDstPortList();
    bool out2inDenyDstPortListIsSet() const;
    void unsetout2inDenyDstPortList();
    void setOut2inDenyDstPortList(const std::vector<AccessTopMemberVO>& value);

    /// <summary>
    /// **参数解释**： TOP入云阻断源IP列表 **取值范围**： 不涉及
    /// </summary>

    std::vector<AccessTopMemberVO>& getOut2inDenySrcIpList();
    bool out2inDenySrcIpListIsSet() const;
    void unsetout2inDenySrcIpList();
    void setOut2inDenySrcIpList(const std::vector<AccessTopMemberVO>& value);

    /// <summary>
    /// **参数解释**： TOP入云阻断源端口列表 **取值范围**： 不涉及
    /// </summary>

    std::vector<AccessTopMemberVO>& getOut2inDenySrcPortList();
    bool out2inDenySrcPortListIsSet() const;
    void unsetout2inDenySrcPortList();
    void setOut2inDenySrcPortList(const std::vector<AccessTopMemberVO>& value);

    /// <summary>
    /// **参数解释**： TOP入云阻断源地区列表 **取值范围**： 不涉及
    /// </summary>

    std::vector<AccessTopMemberVO>& getOut2inDenySrcRegionList();
    bool out2inDenySrcRegionListIsSet() const;
    void unsetout2inDenySrcRegionList();
    void setOut2inDenySrcRegionList(const std::vector<AccessTopMemberVO>& value);

    /// <summary>
    /// **参数解释**： 放行次数 **取值范围**： 不涉及
    /// </summary>

    int64_t getPermitCount() const;
    bool permitCountIsSet() const;
    void unsetpermitCount();
    void setPermitCount(int64_t value);

    /// <summary>
    /// **参数解释**： 高频命中的放行策略ID **取值范围**： 不涉及
    /// </summary>

    std::string getPermitTopOneAclId() const;
    bool permitTopOneAclIdIsSet() const;
    void unsetpermitTopOneAclId();
    void setPermitTopOneAclId(const std::string& value);

    /// <summary>
    /// **参数解释**： 高频命中的放行策略名称 **取值范围**： 不涉及
    /// </summary>

    std::string getPermitTopOneAclName() const;
    bool permitTopOneAclNameIsSet() const;
    void unsetpermitTopOneAclName();
    void setPermitTopOneAclName(const std::string& value);

    /// <summary>
    /// **参数解释**： 命中趋势 **取值范围**： 不涉及
    /// </summary>

    std::vector<AccessTopStatisticsVO>& getRecords();
    bool recordsIsSet() const;
    void unsetrecords();
    void setRecords(const std::vector<AccessTopStatisticsVO>& value);

    /// <summary>
    /// **参数解释**： TOP阻断规则列表 **取值范围**： 不涉及
    /// </summary>

    std::vector<AccessTopMemberVO>& getTopDenyRuleList();
    bool topDenyRuleListIsSet() const;
    void unsettopDenyRuleList();
    void setTopDenyRuleList(const std::vector<AccessTopMemberVO>& value);


protected:
    int64_t denyCount_;
    bool denyCountIsSet_;
    std::string denyTopOneAclId_;
    bool denyTopOneAclIdIsSet_;
    std::string denyTopOneAclName_;
    bool denyTopOneAclNameIsSet_;
    int64_t hitCount_;
    bool hitCountIsSet_;
    std::vector<AccessTopMemberVO> in2outDenyDstIpList_;
    bool in2outDenyDstIpListIsSet_;
    std::vector<AccessTopMemberVO> in2outDenyDstPortList_;
    bool in2outDenyDstPortListIsSet_;
    std::vector<AccessTopMemberVO> in2outDenyDstRegionList_;
    bool in2outDenyDstRegionListIsSet_;
    std::vector<AccessTopMemberVO> in2outDenySrcIpList_;
    bool in2outDenySrcIpListIsSet_;
    std::vector<AccessTopMemberVO> out2inDenyDstIpList_;
    bool out2inDenyDstIpListIsSet_;
    std::vector<AccessTopMemberVO> out2inDenyDstPortList_;
    bool out2inDenyDstPortListIsSet_;
    std::vector<AccessTopMemberVO> out2inDenySrcIpList_;
    bool out2inDenySrcIpListIsSet_;
    std::vector<AccessTopMemberVO> out2inDenySrcPortList_;
    bool out2inDenySrcPortListIsSet_;
    std::vector<AccessTopMemberVO> out2inDenySrcRegionList_;
    bool out2inDenySrcRegionListIsSet_;
    int64_t permitCount_;
    bool permitCountIsSet_;
    std::string permitTopOneAclId_;
    bool permitTopOneAclIdIsSet_;
    std::string permitTopOneAclName_;
    bool permitTopOneAclNameIsSet_;
    std::vector<AccessTopStatisticsVO> records_;
    bool recordsIsSet_;
    std::vector<AccessTopMemberVO> topDenyRuleList_;
    bool topDenyRuleListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_AccessTopVO_H_
