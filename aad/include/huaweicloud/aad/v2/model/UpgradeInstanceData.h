
#ifndef HUAWEICLOUD_SDK_AAD_V2_MODEL_UpgradeInstanceData_H_
#define HUAWEICLOUD_SDK_AAD_V2_MODEL_UpgradeInstanceData_H_


#include <huaweicloud/aad/v2/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_AAD_V2_EXPORT  UpgradeInstanceData
    : public ModelBase
{
public:
    UpgradeInstanceData();
    virtual ~UpgradeInstanceData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpgradeInstanceData members

    /// <summary>
    /// 保底带宽(G)
    /// </summary>

    std::string getBasicBandwidth() const;
    bool basicBandwidthIsSet() const;
    void unsetbasicBandwidth();
    void setBasicBandwidth(const std::string& value);

    /// <summary>
    /// 弹性带宽(G)
    /// </summary>

    std::string getElasticBandwidth() const;
    bool elasticBandwidthIsSet() const;
    void unsetelasticBandwidth();
    void setElasticBandwidth(const std::string& value);

    /// <summary>
    /// 业务带宽
    /// </summary>

    int32_t getServiceBandwidth() const;
    bool serviceBandwidthIsSet() const;
    void unsetserviceBandwidth();
    void setServiceBandwidth(int32_t value);

    /// <summary>
    /// 端口数
    /// </summary>

    int32_t getPortNum() const;
    bool portNumIsSet() const;
    void unsetportNum();
    void setPortNum(int32_t value);

    /// <summary>
    /// 域名数
    /// </summary>

    int32_t getBindDomainNum() const;
    bool bindDomainNumIsSet() const;
    void unsetbindDomainNum();
    void setBindDomainNum(int32_t value);

    /// <summary>
    /// 弹性业务带宽,0-关闭，3-月95
    /// </summary>

    int32_t getElasticServiceBandwidthType() const;
    bool elasticServiceBandwidthTypeIsSet() const;
    void unsetelasticServiceBandwidthType();
    void setElasticServiceBandwidthType(int32_t value);

    /// <summary>
    /// 弹性业务带宽增加值
    /// </summary>

    int32_t getElasticServiceBandwidth() const;
    bool elasticServiceBandwidthIsSet() const;
    void unsetelasticServiceBandwidth();
    void setElasticServiceBandwidth(int32_t value);

    /// <summary>
    /// 业务QPS(如果实例没购买过QPS，需要在页面上升级一次规格开通QPS，之后才可以通过接口修改规格)
    /// </summary>

    int32_t getBasicQps() const;
    bool basicQpsIsSet() const;
    void unsetbasicQps();
    void setBasicQps(int32_t value);


protected:
    std::string basicBandwidth_;
    bool basicBandwidthIsSet_;
    std::string elasticBandwidth_;
    bool elasticBandwidthIsSet_;
    int32_t serviceBandwidth_;
    bool serviceBandwidthIsSet_;
    int32_t portNum_;
    bool portNumIsSet_;
    int32_t bindDomainNum_;
    bool bindDomainNumIsSet_;
    int32_t elasticServiceBandwidthType_;
    bool elasticServiceBandwidthTypeIsSet_;
    int32_t elasticServiceBandwidth_;
    bool elasticServiceBandwidthIsSet_;
    int32_t basicQps_;
    bool basicQpsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V2_MODEL_UpgradeInstanceData_H_
