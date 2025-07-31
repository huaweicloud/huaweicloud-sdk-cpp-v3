
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateDigitalAssetRequestBody_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateDigitalAssetRequestBody_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/AutoOperationConfig.h>
#include <huaweicloud/metastudio/v1/model/SupportedServiceEnum.h>
#include <huaweicloud/metastudio/v1/model/AssetSharedConfig.h>
#include <string>
#include <huaweicloud/metastudio/v1/model/SystemProperty.h>
#include <huaweicloud/metastudio/v1/model/AssetExtraMeta.h>
#include <huaweicloud/metastudio/v1/model/ReviewConfig.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 更新资产请求体。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  UpdateDigitalAssetRequestBody
    : public ModelBase
{
public:
    UpdateDigitalAssetRequestBody();
    virtual ~UpdateDigitalAssetRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateDigitalAssetRequestBody members

    /// <summary>
    /// **参数解释**： 资产名称。 **约束限制**： 不涉及。 **取值范围**： 只能使用中英文字符，字符长度0-256位。 **默认取值**： 不涉及。
    /// </summary>

    std::string getAssetName() const;
    bool assetNameIsSet() const;
    void unsetassetName();
    void setAssetName(const std::string& value);

    /// <summary>
    /// **参数解释**： 资产描述。 **约束限制**： 不涉及。 **取值范围**： 只能使用中英文字符，字符长度0-4096位。 **默认取值**： 不涉及。
    /// </summary>

    std::string getAssetDescription() const;
    bool assetDescriptionIsSet() const;
    void unsetassetDescription();
    void setAssetDescription(const std::string& value);

    /// <summary>
    /// **参数解释**： 资产类型。 **约束限制**： VOICE_MODEL，HUMAN_MODEL_2D 普通用户均无法上传。 **取值范围**： 公共资产类型： * VOICE_MODEL：音色模型 * VIDEO：视频文件 * IMAGE：图片文件 * PPT：幻灯片文件 * MUSIC: 音乐 * AUDIO: 音频 * COMMON_FILE：通用文件  分身数字人资产： * HUMAN_MODEL_2D: 分身数字人模型 * BUSINESS_CARD_TEMPLET: 数字人名片模板  **默认取值**： 不涉及。
    /// </summary>

    std::string getAssetType() const;
    bool assetTypeIsSet() const;
    void unsetassetType();
    void setAssetType(const std::string& value);

    /// <summary>
    /// **参数解释**： 资产状态。 **约束限制**： 租户仅能激活或取消激活资产，其他状态由系统自动更新。 **取值范围**： * UNACTIVED：取消激活。未激活的资产不可用于其他业务 * ACTIVED：激活。激活后的资产可用于其他业务 * WAITING_DELETE：资产将被下线(激活状态资产可用、管理员可用)  **默认取值**： 不涉及。
    /// </summary>

    std::string getAssetState() const;
    bool assetStateIsSet() const;
    void unsetassetState();
    void setAssetState(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ReviewConfig getReviewConfig() const;
    bool reviewConfigIsSet() const;
    void unsetreviewConfig();
    void setReviewConfig(const ReviewConfig& value);

    /// <summary>
    /// **参数解释**： 标签列表。 &gt; 分身形象系统资产的tag定义如下： &gt; - 行业：NEWS,BUSINESS,E-COMMERCE,MARKETING,KNOWLEDGE,EDUCATION,SPORTS &gt; - 性别：MALE,FEMALE &gt; - 姿势：FULL-BODY,HALF-BODY,STANDING,SITTING,WALKING &gt; - 区域：ASIAN,WESTERN,MIDDLE-EASTERNER,AFRICAN,LATINO  **约束限制**： 不涉及 **取值范围**： 标签个数最大为50个。 标签内容为中英文，字符长度0-128位。 **默认取值**： 不涉及
    /// </summary>

    std::vector<std::string>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    AssetExtraMeta getAssetExtraMeta() const;
    bool assetExtraMetaIsSet() const;
    void unsetassetExtraMeta();
    void setAssetExtraMeta(const AssetExtraMeta& value);

    /// <summary>
    /// 设置系统属性。
    /// </summary>

    std::vector<SystemProperty>& getSystemProperties();
    bool systemPropertiesIsSet() const;
    void unsetsystemProperties();
    void setSystemProperties(const std::vector<SystemProperty>& value);

    /// <summary>
    /// 
    /// </summary>

    AssetSharedConfig getSharedConfig() const;
    bool sharedConfigIsSet() const;
    void unsetsharedConfig();
    void setSharedConfig(const AssetSharedConfig& value);

    /// <summary>
    /// **参数解释**： 用于console控制台展示顺序。 如果取值相同，则默认最新的排在前面。 **约束限制**： 不涉及 **默认取值**： 不涉及
    /// </summary>

    int32_t getAssetOrder() const;
    bool assetOrderIsSet() const;
    void unsetassetOrder();
    void setAssetOrder(int32_t value);

    /// <summary>
    /// 支持的业务类型。： * VIDEO_2D：分身数字人视频制作 * LIVE_2D：分身数字人直播 * CHAT_2D：分身数字人智能交互
    /// </summary>

    std::vector<SupportedServiceEnum>& getSupportedService();
    bool supportedServiceIsSet() const;
    void unsetsupportedService();
    void setSupportedService(const std::vector<SupportedServiceEnum>& value);

    /// <summary>
    /// 资产自动处理任务。
    /// </summary>

    std::vector<AutoOperationConfig>& getAutoOperationConfig();
    bool autoOperationConfigIsSet() const;
    void unsetautoOperationConfig();
    void setAutoOperationConfig(const std::vector<AutoOperationConfig>& value);


protected:
    std::string assetName_;
    bool assetNameIsSet_;
    std::string assetDescription_;
    bool assetDescriptionIsSet_;
    std::string assetType_;
    bool assetTypeIsSet_;
    std::string assetState_;
    bool assetStateIsSet_;
    ReviewConfig reviewConfig_;
    bool reviewConfigIsSet_;
    std::vector<std::string> tags_;
    bool tagsIsSet_;
    AssetExtraMeta assetExtraMeta_;
    bool assetExtraMetaIsSet_;
    std::vector<SystemProperty> systemProperties_;
    bool systemPropertiesIsSet_;
    AssetSharedConfig sharedConfig_;
    bool sharedConfigIsSet_;
    int32_t assetOrder_;
    bool assetOrderIsSet_;
    std::vector<SupportedServiceEnum> supportedService_;
    bool supportedServiceIsSet_;
    std::vector<AutoOperationConfig> autoOperationConfig_;
    bool autoOperationConfigIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateDigitalAssetRequestBody_H_
