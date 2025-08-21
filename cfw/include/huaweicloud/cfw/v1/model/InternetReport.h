
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_InternetReport_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_InternetReport_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/In2Out.h>
#include <huaweicloud/cfw/v1/model/Overview.h>
#include <huaweicloud/cfw/v1/model/TrendVO.h>
#include <huaweicloud/cfw/v1/model/Eip.h>
#include <huaweicloud/cfw/v1/model/Out2in.h>
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
class HUAWEICLOUD_CFW_V1_EXPORT  InternetReport
    : public ModelBase
{
public:
    InternetReport();
    virtual ~InternetReport();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InternetReport members

    /// <summary>
    /// 
    /// </summary>

    Eip getEip() const;
    bool eipIsSet() const;
    void unseteip();
    void setEip(const Eip& value);

    /// <summary>
    /// 
    /// </summary>

    In2Out getIn2out() const;
    bool in2outIsSet() const;
    void unsetin2out();
    void setIn2out(const In2Out& value);

    /// <summary>
    /// 
    /// </summary>

    Out2in getOut2in() const;
    bool out2inIsSet() const;
    void unsetout2in();
    void setOut2in(const Out2in& value);

    /// <summary>
    /// 
    /// </summary>

    Overview getOverview() const;
    bool overviewIsSet() const;
    void unsetoverview();
    void setOverview(const Overview& value);

    /// <summary>
    /// **参数解释**： 流量趋势 **取值范围**： 不涉及
    /// </summary>

    std::vector<TrendVO>& getTrafficTrend();
    bool trafficTrendIsSet() const;
    void unsettrafficTrend();
    void setTrafficTrend(const std::vector<TrendVO>& value);


protected:
    Eip eip_;
    bool eipIsSet_;
    In2Out in2out_;
    bool in2outIsSet_;
    Out2in out2in_;
    bool out2inIsSet_;
    Overview overview_;
    bool overviewIsSet_;
    std::vector<TrendVO> trafficTrend_;
    bool trafficTrendIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_InternetReport_H_
