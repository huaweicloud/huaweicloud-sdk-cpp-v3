
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_FirewallReport_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_FirewallReport_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/InternetReport.h>
#include <huaweicloud/cfw/v1/model/StatisticPeriod.h>
#include <huaweicloud/cfw/v1/model/AttackReport.h>
#include <string>
#include <huaweicloud/cfw/v1/model/VpcReport.h>

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
class HUAWEICLOUD_CFW_V1_EXPORT  FirewallReport
    : public ModelBase
{
public:
    FirewallReport();
    virtual ~FirewallReport();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FirewallReport members

    /// <summary>
    /// 
    /// </summary>

    AttackReport getAttackInfo() const;
    bool attackInfoIsSet() const;
    void unsetattackInfo();
    void setAttackInfo(const AttackReport& value);

    /// <summary>
    /// **参数解释**： 报告类型 **取值范围**： 不涉及
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    InternetReport getInternetFirewall() const;
    bool internetFirewallIsSet() const;
    void unsetinternetFirewall();
    void setInternetFirewall(const InternetReport& value);

    /// <summary>
    /// **参数解释**： 发送时间 **取值范围**： 不涉及
    /// </summary>

    int64_t getSendTime() const;
    bool sendTimeIsSet() const;
    void unsetsendTime();
    void setSendTime(int64_t value);

    /// <summary>
    /// 
    /// </summary>

    StatisticPeriod getStatisticPeriod() const;
    bool statisticPeriodIsSet() const;
    void unsetstatisticPeriod();
    void setStatisticPeriod(const StatisticPeriod& value);

    /// <summary>
    /// 
    /// </summary>

    VpcReport getVpcFirewall() const;
    bool vpcFirewallIsSet() const;
    void unsetvpcFirewall();
    void setVpcFirewall(const VpcReport& value);


protected:
    AttackReport attackInfo_;
    bool attackInfoIsSet_;
    std::string category_;
    bool categoryIsSet_;
    InternetReport internetFirewall_;
    bool internetFirewallIsSet_;
    int64_t sendTime_;
    bool sendTimeIsSet_;
    StatisticPeriod statisticPeriod_;
    bool statisticPeriodIsSet_;
    VpcReport vpcFirewall_;
    bool vpcFirewallIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_FirewallReport_H_
