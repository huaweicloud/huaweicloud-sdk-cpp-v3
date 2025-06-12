
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CountTenantResourcesRequest_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CountTenantResourcesRequest_H_


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
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  CountTenantResourcesRequest
    : public ModelBase
{
public:
    CountTenantResourcesRequest();
    virtual ~CountTenantResourcesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CountTenantResourcesRequest members

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
    /// 业务类型。可填多个用\&quot;,\&quot;分隔 * VOICE_CLONE：声音制作 * SYNTHETICS_SOUND：声音合成 * ASSET_MANAGER：资产管理 * MODELING_2D：形象制作 * LIVE_2D：分身数字人视频直播 * VIDEO_2D：分身数字人视频制作 * CHAT_2D：分身数字人智能交互 * BUSINESS_CARD_2D：分身数字人名片 * PICTURE_2D：照片数字人视频 * MODELING_3D：3D照片建模 * VDS_3D：3D视觉驱动 * TTSA_3D：3D语音驱动 * FLEXUS_2D：FLEXUS版本资源
    /// </summary>

    std::string getBusiness() const;
    bool businessIsSet() const;
    void unsetbusiness();
    void setBusiness(const std::string& value);

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


protected:
    std::string authorization_;
    bool authorizationIsSet_;
    std::string xSdkDate_;
    bool xSdkDateIsSet_;
    std::string xProjectId_;
    bool xProjectIdIsSet_;
    std::string business_;
    bool businessIsSet_;
    std::string resourceExpireStartTime_;
    bool resourceExpireStartTimeIsSet_;
    std::string resourceExpireEndTime_;
    bool resourceExpireEndTimeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CountTenantResourcesRequest& dereference_from_shared_ptr(std::shared_ptr<CountTenantResourcesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CountTenantResourcesRequest_H_
