
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ResourceUsageInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ResourceUsageInfo_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 资源使用信息
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ResourceUsageInfo
    : public ModelBase
{
public:
    ResourceUsageInfo();
    virtual ~ResourceUsageInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResourceUsageInfo members

    /// <summary>
    /// 资源类型。详见[资源类型](metastudio_02_0042.xml)。
    /// </summary>

    std::string getResourceType() const;
    bool resourceTypeIsSet() const;
    void unsetresourceType();
    void setResourceType(const std::string& value);

    /// <summary>
    /// 业务类型。 * VOICE_CLONE：声音制作 * SYNTHETICS_SOUND：声音合成 * ASSET_MANAGER：资产管理 * MODELING_2D：形象制作 * LIVE_2D：分身数字人视频直播 * VIDEO_2D：分身数字人视频制作 * CHAT_2D：分身数字人智能交互 * BUSINESS_CARD_2D：分身数字人名片 * PICTURE_2D：照片数字人视频 * MODELING_3D：3D照片建模 * VDS_3D：3D视觉驱动 * TTSA_3D：3D语音驱动 * FLEXUS_2D：FLEXUS版本资源
    /// </summary>

    std::string getBusinessType() const;
    bool businessTypeIsSet() const;
    void unsetbusinessType();
    void setBusinessType(const std::string& value);

    /// <summary>
    /// 子资源类型。
    /// </summary>

    std::string getSubResourceType() const;
    bool subResourceTypeIsSet() const;
    void unsetsubResourceType();
    void setSubResourceType(const std::string& value);

    /// <summary>
    /// 是否子资源。子资源描述的是子资源的数量和单位
    /// </summary>

    bool isIsSubResource() const;
    bool isSubResourceIsSet() const;
    void unsetisSubResource();
    void setIsSubResource(bool value);

    /// <summary>
    /// 计费类型。 * PERIODIC: 包周期 * ONE_TIME：一次性 * ON_DEMAND：按需
    /// </summary>

    std::string getChargingMode() const;
    bool chargingModeIsSet() const;
    void unsetchargingMode();
    void setChargingMode(const std::string& value);

    /// <summary>
    /// 资源来源。 * PURCHASED: 购买 * SP_ALLOCATED：SP分配 * ADMIN_ALLOCATED：系统管理员分配
    /// </summary>

    std::string getResourceSource() const;
    bool resourceSourceIsSet() const;
    void unsetresourceSource();
    void setResourceSource(const std::string& value);

    /// <summary>
    /// 总量
    /// </summary>

    float getAmount() const;
    bool amountIsSet() const;
    void unsetamount();
    void setAmount(float value);

    /// <summary>
    /// 使用量
    /// </summary>

    float getUsage() const;
    bool usageIsSet() const;
    void unsetusage();
    void setUsage(float value);

    /// <summary>
    /// 单位。 * NUM：个数(形象/声音) * MIN：分钟（视频制作） * HOUR：小时 （直播） * CHANNEL：路（直播/交互） * GB：GB(资产管理) * MILLION_WORDS：百万字 * TEN_THOUSAND_WORDS：万字 * TIME：次
    /// </summary>

    std::string getUnit() const;
    bool unitIsSet() const;
    void unsetunit();
    void setUnit(const std::string& value);


protected:
    std::string resourceType_;
    bool resourceTypeIsSet_;
    std::string businessType_;
    bool businessTypeIsSet_;
    std::string subResourceType_;
    bool subResourceTypeIsSet_;
    bool isSubResource_;
    bool isSubResourceIsSet_;
    std::string chargingMode_;
    bool chargingModeIsSet_;
    std::string resourceSource_;
    bool resourceSourceIsSet_;
    float amount_;
    bool amountIsSet_;
    float usage_;
    bool usageIsSet_;
    std::string unit_;
    bool unitIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ResourceUsageInfo_H_
