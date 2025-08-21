
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_VpcReport_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_VpcReport_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/Overview.h>
#include <huaweicloud/cfw/v1/model/Vpc.h>
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
class HUAWEICLOUD_CFW_V1_EXPORT  VpcReport
    : public ModelBase
{
public:
    VpcReport();
    virtual ~VpcReport();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VpcReport members

    /// <summary>
    /// **参数解释**： TOP应用数量 **取值范围**： 不涉及
    /// </summary>

    std::vector<ItemVO>& getApp();
    bool appIsSet() const;
    void unsetapp();
    void setApp(const std::vector<ItemVO>& value);

    /// <summary>
    /// **参数解释**： TOP访问目的IP **取值范围**： 不涉及
    /// </summary>

    std::vector<ItemVO>& getDstIp();
    bool dstIpIsSet() const;
    void unsetdstIp();
    void setDstIp(const std::vector<ItemVO>& value);

    /// <summary>
    /// 
    /// </summary>

    Overview getOverview() const;
    bool overviewIsSet() const;
    void unsetoverview();
    void setOverview(const Overview& value);

    /// <summary>
    /// **参数解释**： TOP访问源IP **取值范围**： 不涉及
    /// </summary>

    std::vector<ItemVO>& getSrcIp();
    bool srcIpIsSet() const;
    void unsetsrcIp();
    void setSrcIp(const std::vector<ItemVO>& value);

    /// <summary>
    /// **参数解释**： 流量趋势 **取值范围**： 不涉及
    /// </summary>

    std::vector<TrendVO>& getTrafficTrend();
    bool trafficTrendIsSet() const;
    void unsettrafficTrend();
    void setTrafficTrend(const std::vector<TrendVO>& value);

    /// <summary>
    /// 
    /// </summary>

    Vpc getVpc() const;
    bool vpcIsSet() const;
    void unsetvpc();
    void setVpc(const Vpc& value);


protected:
    std::vector<ItemVO> app_;
    bool appIsSet_;
    std::vector<ItemVO> dstIp_;
    bool dstIpIsSet_;
    Overview overview_;
    bool overviewIsSet_;
    std::vector<ItemVO> srcIp_;
    bool srcIpIsSet_;
    std::vector<TrendVO> trafficTrend_;
    bool trafficTrendIsSet_;
    Vpc vpc_;
    bool vpcIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_VpcReport_H_
