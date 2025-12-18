
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeExtendParam_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeExtendParam_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建节点时的扩展参数。
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  NodeExtendParam
    : public ModelBase
{
public:
    NodeExtendParam();
    virtual ~NodeExtendParam();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodeExtendParam members

    /// <summary>
    /// 云服务器规格的分类。响应中会返回此字段。
    /// </summary>

    std::string getEcsPerformancetype() const;
    bool ecsPerformancetypeIsSet() const;
    void unsetecsPerformancetype();
    void setEcsPerformancetype(const std::string& value);

    /// <summary>
    /// **参数解释**： 订单ID。 **约束限制**： 节点付费类型为自动付费包周期类型时，响应中会返回此字段(仅创建场景涉及)，节点池场景响应返回中无该参数。 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getOrderID() const;
    bool orderIDIsSet() const;
    void unsetorderID();
    void setOrderID(const std::string& value);

    /// <summary>
    /// **参数解释**： 产品ID。 **约束限制**： 节点付费类型为自动付费包周期类型或者节点池类型是包周期节点池时，响应中会返回此字段。 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getProductID() const;
    bool productIDIsSet() const;
    void unsetproductID();
    void setProductID(const std::string& value);

    /// <summary>
    /// 节点最大允许创建的实例数(Pod)，该数量包含系统默认实例，取值范围为16~256。  该设置的目的为防止节点因管理过多实例而负载过重，请根据您的业务需要进行设置。  节点可以创建多少个Pod，受多个参数影响，具体请参见[节点最多可以创建多少Pod](maxPods.xml)。 
    /// </summary>

    int32_t getMaxPods() const;
    bool maxPodsIsSet() const;
    void unsetmaxPods();
    void setMaxPods(int32_t value);

    /// <summary>
    /// - month：月 - year：年 &gt; 作为请求参数，billingMode为1（包周期）或2（已废弃：自动付费包周期）时生效，且为必选。 &gt; 作为响应参数，仅在创建包周期节点时返回。 
    /// </summary>

    std::string getPeriodType() const;
    bool periodTypeIsSet() const;
    void unsetperiodType();
    void setPeriodType(const std::string& value);

    /// <summary>
    /// 订购周期数，取值范围： - periodType&#x3D;month（周期类型为月）时，取值为[1-9]。 - periodType&#x3D;year（周期类型为年）时，取值为1。 &gt; 作为请求参数，billingMode为1或2（已废弃）时生效，且为必选。 &gt; 作为响应参数，仅在创建包周期节点时返回。 
    /// </summary>

    int32_t getPeriodNum() const;
    bool periodNumIsSet() const;
    void unsetperiodNum();
    void setPeriodNum(int32_t value);

    /// <summary>
    /// 是否自动续订 - “true”：自动续订 - “false”：不自动续订 &gt; billingMode为1或2（已废弃）时生效，不填写此参数时默认不会自动续费。 
    /// </summary>

    std::string getIsAutoRenew() const;
    bool isAutoRenewIsSet() const;
    void unsetisAutoRenew();
    void setIsAutoRenew(const std::string& value);

    /// <summary>
    /// 是否自动扣款  - “true”：自动扣款 - “false”：不自动扣款  &gt; billingMode为1或2（已废弃）时生效，billingMode为1时不填写此参数时默认不会自动扣款。（已废弃：billingMode为2时不填写此参数时默认会自动扣款） 
    /// </summary>

    std::string getIsAutoPay() const;
    bool isAutoPayIsSet() const;
    void unsetisAutoPay();
    void setIsAutoPay(const std::string& value);

    /// <summary>
    /// Docker数据盘配置项（已废弃，请使用storage字段）。默认配置示例如下：  &#x60;&#x60;&#x60; \&quot;DockerLVMConfigOverride\&quot;:\&quot;dockerThinpool&#x3D;vgpaas/90%VG;kubernetesLV&#x3D;vgpaas/10%VG;diskType&#x3D;evs;lvType&#x3D;linear\&quot; &#x60;&#x60;&#x60;  默认配置在无VD类型磁盘时，会由于数据盘查找失败而出错，请根据真实盘符类型填写diskType。 包含如下字段：   - userLV（可选）：用户空间的大小，示例格式：vgpaas/20%VG   - userPath（可选）：用户空间挂载路径，示例格式：/home/wqt-test   - diskType：磁盘类型，目前只有evs、hdd和ssd三种格式   - lvType：逻辑卷的类型，目前支持linear和striped两种，示例格式：striped   - dockerThinpool：Docker盘的空间大小，示例格式：vgpaas/60%VG   - kubernetesLV：Kubelet空间大小，示例格式：vgpaas/20%VG 
    /// </summary>

    std::string getDockerLVMConfigOverride() const;
    bool dockerLVMConfigOverrideIsSet() const;
    void unsetdockerLVMConfigOverride();
    void setDockerLVMConfigOverride(const std::string& value);

    /// <summary>
    /// **参数解释**： 节点上单容器的可用磁盘空间大小（已废弃，请优先使用containerBaseSize参数），单位G。 CCE节点容器运行时空间配置请参考[数据盘空间分配说明](cce_01_0341.xml)。 **约束限制**： - Devicemapper模式下建议dockerBaseSize配置不超过80G，设置过大时可能会导致容器运行时初始化时间过长而启动失败，若对容器磁盘大小有特殊要求，可考虑使用挂载外部或本地存储方式代替。 - dockerBaseSize设置仅在v1.19.16-r0、v1.21.3-r0、v1.23.3-r0及以上的集群版本中的EulerOS[/HCEOS2.0](tag:hws,hws_hk,ctc,cmcc)节点上生效。  **取值范围**： 10-500。 **默认取值**： 不配置该值或值为0时将使用默认值： - Devicemapper模式下默认值为10； - OverlayFS模式默认不限制单容器可用空间大小。 
    /// </summary>

    int32_t getDockerBaseSize() const;
    bool dockerBaseSizeIsSet() const;
    void unsetdockerBaseSize();
    void setDockerBaseSize(int32_t value);

    /// <summary>
    /// 是否为CCE Turbo集群节点。
    /// </summary>

    std::string getOffloadNode() const;
    bool offloadNodeIsSet() const;
    void unsetoffloadNode();
    void setOffloadNode(const std::string& value);

    /// <summary>
    /// **参数解释**： 节点的公钥，应用于ssh密钥登录。 **约束限制**： - 当选择使用密钥对方式登录节点时该配置无效 - 创建、更新节点池场景不支持该参数  **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getPublicKey() const;
    bool publicKeyIsSet() const;
    void unsetpublicKey();
    void setPublicKey(const std::string& value);

    /// <summary>
    /// 安装前执行脚本 &gt; 输入的值需要经过Base64编码，方法为echo -n \&quot;待编码内容\&quot; | base64 
    /// </summary>

    std::string getAlphaCcePreInstall() const;
    bool alphaCcePreInstallIsSet() const;
    void unsetalphaCcePreInstall();
    void setAlphaCcePreInstall(const std::string& value);

    /// <summary>
    /// 安装后执行脚本 &gt; 输入的值需要经过Base64编码，方法为echo -n \&quot;待编码内容\&quot; | base64。 
    /// </summary>

    std::string getAlphaCcePostInstall() const;
    bool alphaCcePostInstallIsSet() const;
    void unsetalphaCcePostInstall();
    void setAlphaCcePostInstall(const std::string& value);

    /// <summary>
    /// **参数解释**： 节点自定义镜像ID，从IMS控制台获取，需要使用自定义镜像时使用此参数。 **约束限制**： 不涉及 [&gt; - 若指定了extendParam中的securityReinforcementType参数为cybersecurity，节点将开启安全等保加固功能，则节点的操作系统类型必须使用HCE2.0。](tag:hws)  **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getAlphaCceNodeImageID() const;
    bool alphaCceNodeImageIDIsSet() const;
    void unsetalphaCceNodeImageID();
    void setAlphaCceNodeImageID(const std::string& value);

    /// <summary>
    /// - 弹性网卡队列数配置，默认配置示例如下：  &#x60;&#x60;&#x60; \&quot;[{\\\&quot;queue\\\&quot;:4}]\&quot; &#x60;&#x60;&#x60;  包含如下字段： - queue: 弹性网卡队列数。 - 仅在turbo集群的BMS节点时，该字段才可配置。 - 当前支持可配置队列数以及弹性网卡数：{\&quot;1\&quot;:128, \&quot;2\&quot;:92, \&quot;4\&quot;:92, \&quot;8\&quot;:32, \&quot;16\&quot;:16,\&quot;28\&quot;:9}, 既1弹性网卡队列可绑定128张弹性网卡，2队列弹性网卡可绑定92张，以此类推。 - 弹性网卡队列数越多，性能越强，但可绑定弹性网卡数越少，请根据您的需求进行配置（创建后不可修改）。 
    /// </summary>

    std::string getNicMultiqueue() const;
    bool nicMultiqueueIsSet() const;
    void unsetnicMultiqueue();
    void setNicMultiqueue(const std::string& value);

    /// <summary>
    /// - 弹性网卡预绑定比例配置，默认配置示例如下： &#x60;&#x60;&#x60; \&quot;0.3:0.6\&quot; &#x60;&#x60;&#x60;   - 第一位小数：预绑定低水位，弹性网卡预绑定的最低比例（最小预绑定弹性网卡数 &#x3D; ⌊节点的总弹性网卡数 * 预绑定低水位⌋）   - 第二位小数：预绑定高水位，弹性网卡预绑定的最高比例（最大预绑定弹性网卡数 &#x3D; ⌊节点的总弹性网卡数 * 预绑定高水位⌋）   - BMS节点上绑定的弹性网卡数：Pod正在使用的弹性网卡数 + 最小预绑定弹性网卡数 &lt; BMS节点上绑定的弹性网卡数 &lt; Pod正在使用的弹性网卡数 + 最大预绑定弹性网卡数   - BMS节点上当预绑定弹性网卡数 &lt; 最小预绑定弹性网卡数时：会绑定弹性网卡，使得预绑定弹性网卡数 &#x3D; 最小预绑定弹性网卡数   - BMS节点上当预绑定弹性网卡数 &gt; 最大预绑定弹性网卡数时：会定时解绑弹性网卡（约2分钟一次），直到预绑定弹性网卡数 &#x3D; 最大预绑定弹性网卡数   - 取值范围：[0.0, 1.0]; 一位小数; 低水位 &lt;&#x3D; 高水位 - 仅在turbo集群的BMS节点时，该字段才可配置。 - 弹性网卡预绑定能加快工作负载的创建，但会占用IP，请根据您的需求进行配置。 
    /// </summary>

    std::string getNicThreshold() const;
    bool nicThresholdIsSet() const;
    void unsetnicThreshold();
    void setNicThreshold(const std::string& value);

    /// <summary>
    /// 节点的计费模式。已废弃，请使用NodeSpec中的billingMode字段。 
    /// </summary>

    int32_t getChargingMode() const;
    bool chargingModeIsSet() const;
    void unsetchargingMode();
    void setChargingMode(int32_t value);

    /// <summary>
    /// **参数解释**： 创建竞价实例时，需指定该参数的值为“spot”。 **约束限制**： 仅当billingMode&#x3D;0时此参数生效 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getMarketType() const;
    bool marketTypeIsSet() const;
    void unsetmarketType();
    void setMarketType(const std::string& value);

    /// <summary>
    /// **参数解释**： 用户愿意为竞价实例每小时支付的最高价格。 **约束限制**： - 仅当billingMode&#x3D;0且marketType&#x3D;spot时，该参数设置后生效。 - 当billingMode&#x3D;0且marketType&#x3D;spot时，如果不传递spotPrice，默认使用按需购买的价格作为竞价。 - spotPrice需要小于等于按需价格并大于等于云服务器市场价格。  **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getSpotPrice() const;
    bool spotPriceIsSet() const;
    void unsetspotPrice();
    void setSpotPrice(const std::string& value);

    /// <summary>
    /// 委托的名称。  委托是由租户管理员在统一身份认证服务（Identity and Access Management，IAM）上创建的，可以为CCE节点提供访问云服务器的临时凭证。 作为响应参数仅在创建节点传入时返回该字段。 
    /// </summary>

    std::string getAgencyName() const;
    bool agencyNameIsSet() const;
    void unsetagencyName();
    void setAgencyName(const std::string& value);

    /// <summary>
    /// 节点内存预留，Kubernetes相关组件预留值。[随节点规格变动，具体请参见[节点预留资源策略说明](https://support.huaweicloud.com/usermanual-cce/cce_10_0178.html)。](tag:hws) 
    /// </summary>

    int32_t getKubeReservedMem() const;
    bool kubeReservedMemIsSet() const;
    void unsetkubeReservedMem();
    void setKubeReservedMem(int32_t value);

    /// <summary>
    /// 节点内存预留，系统组件预留值。[随节点规格变动，具体请参见[节点预留资源策略说明](https://support.huaweicloud.com/usermanual-cce/cce_10_0178.html)。](tag:hws) 
    /// </summary>

    int32_t getSystemReservedMem() const;
    bool systemReservedMemIsSet() const;
    void unsetsystemReservedMem();
    void setSystemReservedMem(int32_t value);

    /// <summary>
    /// **参数解释**： 节点密码，仅作为响应参数时，固定展示星号，节点池场景响应返回中无该参数。 **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    std::string getInitNodePassword() const;
    bool initNodePasswordIsSet() const;
    void unsetinitNodePassword();
    void setInitNodePassword(const std::string& value);

    /// <summary>
    /// **参数解释**： 指定节点安全加固类型，当前仅支持HCE2.0镜像等保2.0三级安全加固。 等保加固会对身份鉴别、访问控制、安全审计、入侵防范、恶意代码防范进行检查并加固。[详情请参见[Huawei Cloud EulerOS 2.0等保2.0三级版镜像概述](https://support.huaweicloud.com/productdesc-hce/hce_sec_0001.html)。](tag:hws) 若未指定此参数，则尝试用原有的值补全。如：原先HCE2.0镜像已配置安全加固，更新节点池时未指定此参数，则仍旧保持安全加固配置，若要取消，需显式指定参数值为\&quot;null\&quot;。 **约束限制**： 不涉及 **取值范围**： - 空值：表示不开启等保加固 - cybersecurity：表示开启等保加固  **默认取值**： 不涉及
    /// </summary>

    std::string getSecurityReinforcementType() const;
    bool securityReinforcementTypeIsSet() const;
    void unsetsecurityReinforcementType();
    void setSecurityReinforcementType(const std::string& value);


protected:
    std::string ecsPerformancetype_;
    bool ecsPerformancetypeIsSet_;
    std::string orderID_;
    bool orderIDIsSet_;
    std::string productID_;
    bool productIDIsSet_;
    int32_t maxPods_;
    bool maxPodsIsSet_;
    std::string periodType_;
    bool periodTypeIsSet_;
    int32_t periodNum_;
    bool periodNumIsSet_;
    std::string isAutoRenew_;
    bool isAutoRenewIsSet_;
    std::string isAutoPay_;
    bool isAutoPayIsSet_;
    std::string dockerLVMConfigOverride_;
    bool dockerLVMConfigOverrideIsSet_;
    int32_t dockerBaseSize_;
    bool dockerBaseSizeIsSet_;
    std::string offloadNode_;
    bool offloadNodeIsSet_;
    std::string publicKey_;
    bool publicKeyIsSet_;
    std::string alphaCcePreInstall_;
    bool alphaCcePreInstallIsSet_;
    std::string alphaCcePostInstall_;
    bool alphaCcePostInstallIsSet_;
    std::string alphaCceNodeImageID_;
    bool alphaCceNodeImageIDIsSet_;
    std::string nicMultiqueue_;
    bool nicMultiqueueIsSet_;
    std::string nicThreshold_;
    bool nicThresholdIsSet_;
    int32_t chargingMode_;
    bool chargingModeIsSet_;
    std::string marketType_;
    bool marketTypeIsSet_;
    std::string spotPrice_;
    bool spotPriceIsSet_;
    std::string agencyName_;
    bool agencyNameIsSet_;
    int32_t kubeReservedMem_;
    bool kubeReservedMemIsSet_;
    int32_t systemReservedMem_;
    bool systemReservedMemIsSet_;
    std::string initNodePassword_;
    bool initNodePasswordIsSet_;
    std::string securityReinforcementType_;
    bool securityReinforcementTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeExtendParam_H_
