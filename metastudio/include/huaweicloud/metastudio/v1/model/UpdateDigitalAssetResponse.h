
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateDigitalAssetResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateDigitalAssetResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/AssetFileInfo.h>
#include <huaweicloud/metastudio/v1/model/SupportedServiceEnum.h>
#include <string>
#include <huaweicloud/metastudio/v1/model/SystemProperty.h>
#include <huaweicloud/metastudio/v1/model/AssetExtraMeta.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  UpdateDigitalAssetResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateDigitalAssetResponse();
    virtual ~UpdateDigitalAssetResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateDigitalAssetResponse members

    /// <summary>
    /// 租户id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 资产ID。
    /// </summary>

    std::string getAssetId() const;
    bool assetIdIsSet() const;
    void unsetassetId();
    void setAssetId(const std::string& value);

    /// <summary>
    /// 资产名称。
    /// </summary>

    std::string getAssetName() const;
    bool assetNameIsSet() const;
    void unsetassetName();
    void setAssetName(const std::string& value);

    /// <summary>
    /// 资产描述。
    /// </summary>

    std::string getAssetDescription() const;
    bool assetDescriptionIsSet() const;
    void unsetassetDescription();
    void setAssetDescription(const std::string& value);

    /// <summary>
    /// 第三方用户ID。 &gt; * 即创建资产是通过X-App-UserId头域传入的值。
    /// </summary>

    std::string getAppUserId() const;
    bool appUserIdIsSet() const;
    void unsetappUserId();
    void setAppUserId(const std::string& value);

    /// <summary>
    /// 资产创建时间。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 资产更新时间。
    /// </summary>

    std::string getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const std::string& value);

    /// <summary>
    /// 资产类型。  公共资产类型： * VOICE_MODEL：音色模型 * VIDEO：视频文件 * IMAGE：图片文件 * PPT：幻灯片文件 * MUSIC: 音乐 * AUDIO: 音频 * COMMON_FILE：通用文件  分身数字人资产类型： * HUMAN_MODEL_2D：分身数字人模型 * BUSINESS_CARD_TEMPLET: 数字人名片模板  3D数字人资产类型： * HUMAN_MODEL：3D数字人模型 * SCENE：场景模型 * ANIMATION：动作动画 * MATERIAL：风格化素材 * NORMAL_MODEL: 普通模型
    /// </summary>

    std::string getAssetType() const;
    bool assetTypeIsSet() const;
    void unsetassetType();
    void setAssetType(const std::string& value);

    /// <summary>
    /// 资产状态。 * CREATING：资产创建中，主文件尚未上传 * FAILED：主文件上传失败 * UNACTIVED：主文件上传成功，资产未激活，资产不可用于其他业务（用户可更新状态） * ACTIVED：主文件上传成功，资产激活，资产可用于其他业务（用户可更新状态） * DELETING：资产删除中，资产不可用，资产可恢复 * DELETED：资产文件已删除，资产不可用，资产不可恢复 * BLOCK: 资产被冻结，资产不可用，不可查看文件。 * WAITING_DELETE：资产将被下线
    /// </summary>

    std::string getAssetState() const;
    bool assetStateIsSet() const;
    void unsetassetState();
    void setAssetState(const std::string& value);

    /// <summary>
    /// 失败原因。 * AUTOMATIC_REVIEW_REJECT：自动审核失败 * MANUAL_REVIEW_REJECT：人工审核失败
    /// </summary>

    std::string getFailType() const;
    bool failTypeIsSet() const;
    void unsetfailType();
    void setFailType(const std::string& value);

    /// <summary>
    /// 冻结/解冻/失败 原因。
    /// </summary>

    std::string getReason() const;
    bool reasonIsSet() const;
    void unsetreason();
    void setReason(const std::string& value);

    /// <summary>
    /// 标签列表。 &gt; 分身形象系统资产的tag定义如下： &gt; - 行业：NEWS,BUSINESS,E-COMMERCE,MARKETING,KNOWLEDGE,EDUCATION,SPORTS &gt; - 性别：MALE,FEMALE &gt; - 姿势：FULL-BODY,HALF-BODY,STANDING,SITTING,WALKING &gt; - 区域：ASIAN,WESTERN,MIDDLE-EASTERNER,AFRICAN,LATINO
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
    /// 资产下的文件。
    /// </summary>

    std::vector<AssetFileInfo>& getFiles();
    bool filesIsSet() const;
    void unsetfiles();
    void setFiles(const std::vector<AssetFileInfo>& value);

    /// <summary>
    /// 展示顺序
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
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string assetId_;
    bool assetIdIsSet_;
    std::string assetName_;
    bool assetNameIsSet_;
    std::string assetDescription_;
    bool assetDescriptionIsSet_;
    std::string appUserId_;
    bool appUserIdIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string updateTime_;
    bool updateTimeIsSet_;
    std::string assetType_;
    bool assetTypeIsSet_;
    std::string assetState_;
    bool assetStateIsSet_;
    std::string failType_;
    bool failTypeIsSet_;
    std::string reason_;
    bool reasonIsSet_;
    std::vector<std::string> tags_;
    bool tagsIsSet_;
    AssetExtraMeta assetExtraMeta_;
    bool assetExtraMetaIsSet_;
    std::vector<SystemProperty> systemProperties_;
    bool systemPropertiesIsSet_;
    std::vector<AssetFileInfo> files_;
    bool filesIsSet_;
    int32_t assetOrder_;
    bool assetOrderIsSet_;
    std::vector<SupportedServiceEnum> supportedService_;
    bool supportedServiceIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_UpdateDigitalAssetResponse_H_
