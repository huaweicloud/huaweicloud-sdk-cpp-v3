
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_PostPaidServerExtendParam_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_PostPaidServerExtendParam_H_

#include <huaweicloud/ecs/EcsExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_ECS_EXPORT  PostPaidServerExtendParam
    : public ModelBase
{
public:
    PostPaidServerExtendParam();
    virtual ~PostPaidServerExtendParam();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// PostPaidServerExtendParam members

    /// <summary>
    /// 计费模式：  - 0：按需计费。
    /// </summary>

    int32_t getChargingMode() const;
    bool chargingModeIsSet() const;
    void unsetchargingMode();
    void setChargingMode(int32_t value);

    /// <summary>
    /// 云服务器所在区域ID。  请参考[地区和终端节点](https://developer.huaweicloud.com/endpoint)获取。
    /// </summary>

    std::string getRegionID() const;
    bool regionIDIsSet() const;
    void unsetregionID();
    void setRegionID(const std::string& value);

    /// <summary>
    /// 是否配置弹性云服务器自动恢复的功能。  - “true”：配置该功能 - “false”：不配置该功能  &gt; 说明： &gt;  &gt; 此参数为boolean类型，若传入非boolean类型字符，程序将按照【“false”：不配置该功能】方式处理。 &gt;  &gt; 当marketType为spot时，不支持该功能。
    /// </summary>

    bool isSupportAutoRecovery() const;
    bool supportAutoRecoveryIsSet() const;
    void unsetsupportAutoRecovery();
    void setSupportAutoRecovery(bool value);

    /// <summary>
    /// 企业项目ID。  &gt; 说明： &gt;  &gt; 关于企业项目ID的获取及企业项目特性的详细信息，请参见《[企业管理服务用户指南](https://support.huaweicloud.com/usermanual-em/zh-cn_topic_0126101490.html)》。 &gt;  &gt; 该字段不传（或传为字符串“0”），则将资源绑定给默认企业项目。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 创建竞价实例时，需指定该参数的值为“spot”。  &gt; 说明： &gt;  &gt; 当chargingMode&#x3D;0时且marketType&#x3D;spot时此参数生效。
    /// </summary>

    std::string getMarketType() const;
    bool marketTypeIsSet() const;
    void unsetmarketType();
    void setMarketType(const std::string& value);

    /// <summary>
    /// 用户愿意为竞价实例每小时支付的最高价格。  &gt; 说明： &gt;  &gt; 仅chargingMode&#x3D;0且marketType&#x3D;spot时，该参数设置后生效。 &gt;  &gt; 当chargingMode&#x3D;0且marketType&#x3D;spot时，如果不传递spotPrice，默认使用按需购买的价格作为竞价。
    /// </summary>

    std::string getSpotPrice() const;
    bool spotPriceIsSet() const;
    void unsetspotPrice();
    void setSpotPrice(const std::string& value);

    /// <summary>
    /// 是否支持先创建卷，再创建虚拟机。  “true”：配置该功能 “false”：不配置该功能
    /// </summary>

    std::string getDiskPrior() const;
    bool diskPriorIsSet() const;
    void unsetdiskPrior();
    void setDiskPrior(const std::string& value);

    /// <summary>
    /// 购买的竞价实例时长。  - 仅interruption_policy&#x3D;immediate 时该字段有效 。 - pot_duration_hours大于0。最大值由预测系统给出可以从flavor的extra_specs的cond:spot_block:operation:longest_duration_hours字段中查询。
    /// </summary>

    int32_t getSpotDurationHours() const;
    bool spotDurationHoursIsSet() const;
    void unsetspotDurationHours();
    void setSpotDurationHours(int32_t value);

    /// <summary>
    /// 竞价实例中断策略，当前支持immediate。  - 当interruption_policy&#x3D;immediate时表示释放策略为立即释放。 
    /// </summary>

    std::string getInterruptionPolicy() const;
    bool interruptionPolicyIsSet() const;
    void unsetinterruptionPolicy();
    void setInterruptionPolicy(const std::string& value);

    /// <summary>
    /// 表示购买的“竞价实例时长”的个数。  - 仅spot_duration_hours&gt;0 时该字段有效。 - spot_duration_hours小于6时，spot_duration_count值必须为1。 - spot_duration_hours等于6时，spot_duration_count大于等于1。  spot_duration_count的最大值由预测系统给出可以从flavor的extra_specs的cond:spot_block:operation:longest_duration_count字段中查询。
    /// </summary>

    int32_t getSpotDurationCount() const;
    bool spotDurationCountIsSet() const;
    void unsetspotDurationCount();
    void setSpotDurationCount(int32_t value);


protected:
    int32_t chargingMode_;
    bool chargingModeIsSet_;
    std::string regionID_;
    bool regionIDIsSet_;
    bool supportAutoRecovery_;
    bool supportAutoRecoveryIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string marketType_;
    bool marketTypeIsSet_;
    std::string spotPrice_;
    bool spotPriceIsSet_;
    std::string diskPrior_;
    bool diskPriorIsSet_;
    int32_t spotDurationHours_;
    bool spotDurationHoursIsSet_;
    std::string interruptionPolicy_;
    bool interruptionPolicyIsSet_;
    int32_t spotDurationCount_;
    bool spotDurationCountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_PostPaidServerExtendParam_H_
