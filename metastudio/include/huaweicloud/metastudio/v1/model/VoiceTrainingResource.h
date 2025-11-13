
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_VoiceTrainingResource_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_VoiceTrainingResource_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/metastudio/v1/model/ChardMode.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  VoiceTrainingResource
    : public ModelBase
{
public:
    VoiceTrainingResource();
    virtual ~VoiceTrainingResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VoiceTrainingResource members

    /// <summary>
    /// 资源操作类型。 * ADD: 新增资源 * UPDATE：更新资源 * FREEZE：停用资源 * UNFREEZE：启用资源 * REBIND: 重新绑定资源
    /// </summary>

    std::string getOperationType() const;
    bool operationTypeIsSet() const;
    void unsetoperationType();
    void setOperationType(const std::string& value);

    /// <summary>
    /// 资源来源。 * PURCHASED: 购买 * SP_ALLOCATED：SP分配 * ADMIN_ALLOCATED：系统管理员分配 &gt; * 开通按需；购买按需套餐包、一次性资源、包周期等都属于PURCHASED。
    /// </summary>

    std::string getResourceSource() const;
    bool resourceSourceIsSet() const;
    void unsetresourceSource();
    void setResourceSource(const std::string& value);

    /// <summary>
    /// 资产ID。
    /// </summary>

    std::string getAssetId() const;
    bool assetIdIsSet() const;
    void unsetassetId();
    void setAssetId(const std::string& value);

    /// <summary>
    /// 资源ID。
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);

    /// <summary>
    /// 资源数量。声音模型训练个数。
    /// </summary>

    int32_t getResourceNums() const;
    bool resourceNumsIsSet() const;
    void unsetresourceNums();
    void setResourceNums(int32_t value);

    /// <summary>
    /// 可用资源数量。可用声音模型训练个数。
    /// </summary>

    int32_t getResourceAvailableNums() const;
    bool resourceAvailableNumsIsSet() const;
    void unsetresourceAvailableNums();
    void setResourceAvailableNums(int32_t value);

    /// <summary>
    /// 资源类型。 * BASIC: 基础版 * MIDDLE: 进阶版 * ADVANCE：高级版 * THIRD_PARTY：第三方出门问问 * THIRD_PARTY_LJZN: 第三方逻辑智能 * TTS_CMWW：TTS资源 * TTS_LJZN: 逻辑智能TTS资源 * FLEXUS: Flexus版资源
    /// </summary>

    std::string getResourceType() const;
    bool resourceTypeIsSet() const;
    void unsetresourceType();
    void setResourceType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ChardMode getChargeMode() const;
    bool chargeModeIsSet() const;
    void unsetchargeMode();
    void setChargeMode(const ChardMode& value);

    /// <summary>
    /// 资源过期时间，格式遵循：RFC 3339 如\&quot;2021-01-10T08:43:17Z\&quot;
    /// </summary>

    std::string getExpireTime() const;
    bool expireTimeIsSet() const;
    void unsetexpireTime();
    void setExpireTime(const std::string& value);

    /// <summary>
    /// 资源状态
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);


protected:
    std::string operationType_;
    bool operationTypeIsSet_;
    std::string resourceSource_;
    bool resourceSourceIsSet_;
    std::string assetId_;
    bool assetIdIsSet_;
    std::string resourceId_;
    bool resourceIdIsSet_;
    int32_t resourceNums_;
    bool resourceNumsIsSet_;
    int32_t resourceAvailableNums_;
    bool resourceAvailableNumsIsSet_;
    std::string resourceType_;
    bool resourceTypeIsSet_;
    ChardMode chargeMode_;
    bool chargeModeIsSet_;
    std::string expireTime_;
    bool expireTimeIsSet_;
    int32_t status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_VoiceTrainingResource_H_
