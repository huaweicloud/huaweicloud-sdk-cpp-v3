
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateDigitalAssetRequestBody_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateDigitalAssetRequestBody_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
/// 创建资产请求体。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  CreateDigitalAssetRequestBody
    : public ModelBase
{
public:
    CreateDigitalAssetRequestBody();
    virtual ~CreateDigitalAssetRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateDigitalAssetRequestBody members

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
    /// 
    /// </summary>

    ReviewConfig getReviewConfig() const;
    bool reviewConfigIsSet() const;
    void unsetreviewConfig();
    void setReviewConfig(const ReviewConfig& value);

    /// <summary>
    /// **参数解释**： 标签列表。 &gt; 分身形象系统资产的tag定义如下： &gt; - 行业：NEWS,BUSINESS,E_COMMERCE,MARKETING,KNOWLEDGE,EDUCATION,MEDICAL,SPORTS &gt; - 性别：MALE,FEMALE &gt; - 姿势：FULL_BODY,HALF_BODY,STANDING,SITTING,FRONT_PHOTO,SIDE_PHOTO &gt; - 区域：ASIAN,WESTERN,MIDDLE_EASTERNER,AFRICAN,LATINO  **约束限制**： 不涉及 **取值范围**： 标签个数最大为50个。 标签内容为中英文，字符长度0-128位。 **默认取值**： 不涉及
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
    /// **参数解释**： 设置系统属性。内部参数，普通用户无需设置。 **约束限制**： 不涉及 **取值范围**： 个数最大为50个。 **默认取值**： 不涉及
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
    /// **参数解释**： 是否需要生成封面。 **约束限制**： 仅用于视频类资产。 **取值范围**： * true：自动生成封面。 * false：不自动生成封面。
    /// </summary>

    bool isIsNeedGenerateCover() const;
    bool isNeedGenerateCoverIsSet() const;
    void unsetisNeedGenerateCover();
    void setIsNeedGenerateCover(bool value);

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


protected:
    std::string assetName_;
    bool assetNameIsSet_;
    std::string assetDescription_;
    bool assetDescriptionIsSet_;
    std::string assetType_;
    bool assetTypeIsSet_;
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
    bool isNeedGenerateCover_;
    bool isNeedGenerateCoverIsSet_;
    int32_t assetOrder_;
    bool assetOrderIsSet_;
    std::vector<SupportedServiceEnum> supportedService_;
    bool supportedServiceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateDigitalAssetRequestBody_H_
