
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListTenantResourcesRequest_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListTenantResourcesRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ListTenantResourcesRequest
    : public ModelBase
{
public:
    ListTenantResourcesRequest();
    virtual ~ListTenantResourcesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTenantResourcesRequest members

    /// <summary>
    /// 使用AK/SK方式认证时必选，携带的鉴权信息。
    /// </summary>

    std::string getAuthorization() const;
    bool authorizationIsSet() const;
    void unsetauthorization();
    void setAuthorization(const std::string& value);

    /// <summary>
    /// 使用AK/SK方式认证时必选，请求的发生时间。  格式为(YYYYMMDD&#39;T&#39;HHMMSS&#39;Z&#39;)。
    /// </summary>

    std::string getXSdkDate() const;
    bool xSdkDateIsSet() const;
    void unsetxSdkDate();
    void setXSdkDate(const std::string& value);

    /// <summary>
    /// 使用AK/SK方式认证时必选，携带项目ID信息。
    /// </summary>

    std::string getXProjectId() const;
    bool xProjectIdIsSet() const;
    void unsetxProjectId();
    void setXProjectId(const std::string& value);

    /// <summary>
    /// 每页显示的条目数量。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 偏移量，表示从此偏移量开始查询。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 资源类型。可填多个，用\&quot;,\&quot;分隔。详见[资源类型](metastudio_02_0042.xml)。
    /// </summary>

    std::string getResource() const;
    bool resourceIsSet() const;
    void unsetresource();
    void setResource(const std::string& value);

    /// <summary>
    /// 业务类型。可填多个，用\&quot;,\&quot;分隔。 * VOICE_CLONE：声音制作 * SYNTHETICS_SOUND：声音合成 * ASSET_MANAGER：资产管理 * MODELING_2D：形象制作 * LIVE_2D：分身数字人视频直播 * VIDEO_2D：分身数字人视频制作 * CHAT_2D：分身数字人智能交互 * BUSINESS_CARD_2D：分身数字人名片 * PICTURE_2D：照片数字人视频 * MODELING_3D：3D照片建模 * VDS_3D：3D视觉驱动 * TTSA_3D：3D语音驱动 * FLEXUS_2D：FLEXUS版本资源
    /// </summary>

    std::string getBusiness() const;
    bool businessIsSet() const;
    void unsetbusiness();
    void setBusiness(const std::string& value);

    /// <summary>
    /// 资源来源,可填多个 例如:PURCHASED,ADMIN_ALLOCATED,将返回商用资源与管理员分配资源。 * PURCHASED: 用户购买的资源 * SP_ALLOCATED: SP分配的资源 * ADMIN_ALLOCATED: 系统管理员分配的资源
    /// </summary>

    std::string getResourceSource() const;
    bool resourceSourceIsSet() const;
    void unsetresourceSource();
    void setResourceSource(const std::string& value);

    /// <summary>
    /// 资源id。
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);

    /// <summary>
    /// 订单id。
    /// </summary>

    std::string getOrderId() const;
    bool orderIdIsSet() const;
    void unsetorderId();
    void setOrderId(const std::string& value);

    /// <summary>
    /// 计费类型。  * PERIODIC: 包周期  * ONE_TIME：一次性  * ON_DEMAND：按需 计费模式。
    /// </summary>

    std::string getChargingMode() const;
    bool chargingModeIsSet() const;
    void unsetchargingMode();
    void setChargingMode(const std::string& value);

    /// <summary>
    /// 资源过期时间段 开始时间。格式遵循：RFC 3339 如\&quot;2021-01-10T08:43:17Z\&quot;
    /// </summary>

    std::string getResourceExpireStartTime() const;
    bool resourceExpireStartTimeIsSet() const;
    void unsetresourceExpireStartTime();
    void setResourceExpireStartTime(const std::string& value);

    /// <summary>
    /// 资源过期时间段 结束时间。格式遵循：RFC 3339 如\&quot;2021-01-10T08:43:17Z\&quot;
    /// </summary>

    std::string getResourceExpireEndTime() const;
    bool resourceExpireEndTimeIsSet() const;
    void unsetresourceExpireEndTime();
    void setResourceExpireEndTime(const std::string& value);

    /// <summary>
    /// 子资源类型。当前只有flexus套餐包存在该字段 * voice_clone_flexus: 语音克隆Flexus版 * modeling_count_2d_model_flexus: 分身数字人形象制作Flexus版 * video_time_flexus_2d_model: 分身数字人Flexus版本视频制作
    /// </summary>

    std::string getSubResource() const;
    bool subResourceIsSet() const;
    void unsetsubResource();
    void setSubResource(const std::string& value);

    /// <summary>
    /// 资源状态。
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);


protected:
    std::string authorization_;
    bool authorizationIsSet_;
    std::string xSdkDate_;
    bool xSdkDateIsSet_;
    std::string xProjectId_;
    bool xProjectIdIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    std::string resource_;
    bool resourceIsSet_;
    std::string business_;
    bool businessIsSet_;
    std::string resourceSource_;
    bool resourceSourceIsSet_;
    std::string resourceId_;
    bool resourceIdIsSet_;
    std::string orderId_;
    bool orderIdIsSet_;
    std::string chargingMode_;
    bool chargingModeIsSet_;
    std::string resourceExpireStartTime_;
    bool resourceExpireStartTimeIsSet_;
    std::string resourceExpireEndTime_;
    bool resourceExpireEndTimeIsSet_;
    std::string subResource_;
    bool subResourceIsSet_;
    int32_t status_;
    bool statusIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListTenantResourcesRequest& dereference_from_shared_ptr(std::shared_ptr<ListTenantResourcesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListTenantResourcesRequest_H_
