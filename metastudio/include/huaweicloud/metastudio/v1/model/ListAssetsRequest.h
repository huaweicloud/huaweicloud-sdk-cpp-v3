
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListAssetsRequest_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListAssetsRequest_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

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
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ListAssetsRequest
    : public ModelBase
{
public:
    ListAssetsRequest();
    virtual ~ListAssetsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAssetsRequest members

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
    /// 第三方用户ID。不允许输入中文。
    /// </summary>

    std::string getXAppUserId() const;
    bool xAppUserIdIsSet() const;
    void unsetxAppUserId();
    void setXAppUserId(const std::string& value);

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
    /// 按名称模糊查询。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 按标签模糊查询。
    /// </summary>

    std::string getTag() const;
    bool tagIsSet() const;
    void unsettag();
    void setTag(const std::string& value);

    /// <summary>
    /// 标签查询组合方式 INTERSECTION：交集 UNION_SET：并集
    /// </summary>

    std::string getTagCombinationType() const;
    bool tagCombinationTypeIsSet() const;
    void unsettagCombinationType();
    void setTagCombinationType(const std::string& value);

    /// <summary>
    /// 起始时间。格式遵循：RFC 3339 如\&quot;2021-01-10T08:43:17Z\&quot;。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 结束时间。格式遵循：RFC 3339 如\&quot;2021-01-10T10:43:17Z\&quot;。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 资产类型。多个类型使用英文逗号分隔。 * HUMAN_MODEL：数字人模型 * VOICE_MODEL：音色模型（仅系统管理员可上传） * SCENE：场景模型 * ANIMATION：动作动画 * VIDEO：视频文件 * IMAGE：图片文件 * PPT：幻灯片文件 * MATERIAL：风格化素材 * HUMAN_MODEL_2D: 2D数字人网络模型 * BUSINESS_CARD_TEMPLET: 数字人名片模板 * MUSIC: 音乐 * AUDIO: 音频
    /// </summary>

    std::string getAssetType() const;
    bool assetTypeIsSet() const;
    void unsetassetType();
    void setAssetType(const std::string& value);

    /// <summary>
    /// 排序字段，支持的排序方式有： - 按创建时间排序：create_time - 按更新时间排序：update_time - 按资产排序：asset_order
    /// </summary>

    std::string getSortKey() const;
    bool sortKeyIsSet() const;
    void unsetsortKey();
    void setSortKey(const std::string& value);

    /// <summary>
    /// 排序方式。 * asc：升序 * desc：降序  默认asc升序。
    /// </summary>

    std::string getSortDir() const;
    bool sortDirIsSet() const;
    void unsetsortDir();
    void setSortDir(const std::string& value);

    /// <summary>
    /// 资产来源。 * SYSTEM：系统资产 * CUSTOMIZATION：租户资产 * GROUP_CUSTOMIZATION：租户组资产 * ALL：所有资产  默认查询租户资产。
    /// </summary>

    std::string getAssetSource() const;
    bool assetSourceIsSet() const;
    void unsetassetSource();
    void setAssetSource(const std::string& value);

    /// <summary>
    /// 资产状态。多个资产状态使用英文逗号分隔。 * CREATING：资产创建中，主文件尚未上传 * FAILED：主文件上传失败 * UNACTIVED：主文件上传成功，资产未激活，资产不可用于其他业务（用户可更新状态） * ACTIVED：主文件上传成功，资产激活，资产可用于其他业务（用户可更新状态） * DELETING：资产删除中，资产不可用，资产可恢复 * DELETED：资产文件已删除，资产不可用，资产不可恢复 * BLOCK：资产被冻结，资产不可用，不可查看文件。 * WAITING_DELETE：资产将被下线 默认查询所有状态的资产。
    /// </summary>

    std::string getAssetState() const;
    bool assetStateIsSet() const;
    void unsetassetState();
    void setAssetState(const std::string& value);

    /// <summary>
    /// 基于风格化ID查询关联资产。 * system_male_001：男性风格01 * system_female_001：女性风格01 * system_male_002：男性风格02  * system_female_002：女性风格02
    /// </summary>

    std::string getStyleId() const;
    bool styleIdIsSet() const;
    void unsetstyleId();
    void setStyleId(const std::string& value);

    /// <summary>
    /// 使用精确查询的字段
    /// </summary>

    std::vector<std::string>& getAccurateQueryField();
    bool accurateQueryFieldIsSet() const;
    void unsetaccurateQueryField();
    void setAccurateQueryField(const std::vector<std::string>& value);

    /// <summary>
    /// 可用引擎。 * UE：UE引擎 * MetaEngine：MetaEngine引擎 &gt; 该字段当前只对MetaEngine白名单用户生效
    /// </summary>

    std::string getRenderEngine() const;
    bool renderEngineIsSet() const;
    void unsetrenderEngine();
    void setRenderEngine(const std::string& value);

    /// <summary>
    /// 资产id
    /// </summary>

    std::vector<std::string>& getAssetId();
    bool assetIdIsSet() const;
    void unsetassetId();
    void setAssetId(const std::vector<std::string>& value);

    /// <summary>
    /// 性别。多选使用英文逗号分隔。
    /// </summary>

    std::string getSex() const;
    bool sexIsSet() const;
    void unsetsex();
    void setSex(const std::string& value);

    /// <summary>
    /// 语言。多选使用英文逗号分隔。
    /// </summary>

    std::string getLanguage() const;
    bool languageIsSet() const;
    void unsetlanguage();
    void setLanguage(const std::string& value);

    /// <summary>
    /// 系统属性。  key和value间用\&quot;:\&quot;分隔，多个key之间用\&quot;,\&quot;分隔。  如system_property&#x3D;BACKGROUND_IMG:Yes,RENDER_ENGINE:MetaEngine。  不同Key对应Value取值如下：  公共资产属性： * BACKGROUND_IMG：视频制作的2D背景图片，可取值Yes * CREATED_BY_PLATFORM：是否平台生成，可取值Yes  分身数字人资产属性： * MATERIAL_IMG：素材图片，用作前景。可取值Yes * MATERIAL_VIDEO：素材视频，用作前景。可取值Yes * TO_BE_TRANSLATED_VIDEO: 视频翻译的源视频。可取值Yes  3D数字人资产属性： * STYLE_ID：风格Id * RENDER_ENGINE：引擎类型，可取值UE或MetaEngine * BACKGROUND_SCENE：视频制作的2D背景场景，可取值Horizontal（横屏）或者Vertical（竖屏）  租户组资产验签属性： * SIG：加签秘钥。取值方式SIG&#x3D;HexEncode(HMAC-SHA256(group_id:EXP_TIME:NONCE,key)) * EXP_TIME：过期时间，当前时间增加增加10分钟。取值示例1627768613 * NONCE：随机字符串。取值示例：EycLQsHwxhzK9OW8UEKWNfH2I3CGR2nINuU1EBpv162d42d92s
    /// </summary>

    std::string getSystemProperty() const;
    bool systemPropertyIsSet() const;
    void unsetsystemProperty();
    void setSystemProperty(const std::string& value);

    /// <summary>
    /// 动作是否可编辑。仅在分身数字人模型查询时有效。
    /// </summary>

    bool isActionEditable() const;
    bool actionEditableIsSet() const;
    void unsetactionEditable();
    void setActionEditable(bool value);

    /// <summary>
    /// 分身数字人是否带原子动作库。 &gt; * 带原子动作库的分身数字人可做动作编排。
    /// </summary>

    bool isIsWithActionLibrary() const;
    bool isWithActionLibraryIsSet() const;
    void unsetisWithActionLibrary();
    void setIsWithActionLibrary(bool value);

    /// <summary>
    /// 分身数字人是否支持走动。仅在分身数字人模型查询时有效。
    /// </summary>

    bool isIsMovable() const;
    bool isMovableIsSet() const;
    void unsetisMovable();
    void setIsMovable(bool value);

    /// <summary>
    /// 取值：HUAWEI_METASTUDIO、MOBVOI。 HUAWEI_METASTUDIO：MetaStudio自研音色 MOBVOI：出门问问音色
    /// </summary>

    std::string getVoiceProvider() const;
    bool voiceProviderIsSet() const;
    void unsetvoiceProvider();
    void setVoiceProvider(const std::string& value);

    /// <summary>
    /// 角色。 SHARER：共享方，SHAREE：被共享方
    /// </summary>

    std::string getRole() const;
    bool roleIsSet() const;
    void unsetrole();
    void setRole(const std::string& value);

    /// <summary>
    /// 音色是否支持实时合成。仅在音色查询时有效。 &gt; * 支持实时合成的音色，可以用于直播和智能交互场景。否则只能用于视频制作。
    /// </summary>

    bool isIsRealtimeVoice() const;
    bool isRealtimeVoiceIsSet() const;
    void unsetisRealtimeVoice();
    void setIsRealtimeVoice(bool value);

    /// <summary>
    /// 模型版本
    /// </summary>

    std::string getHumanModel2dVersion() const;
    bool humanModel2dVersionIsSet() const;
    void unsethumanModel2dVersion();
    void setHumanModel2dVersion(const std::string& value);

    /// <summary>
    /// 资产已执行的任务名称
    /// </summary>

    std::string getIncludeDeviceName() const;
    bool includeDeviceNameIsSet() const;
    void unsetincludeDeviceName();
    void setIncludeDeviceName(const std::string& value);

    /// <summary>
    /// 资产已执行的任务名称
    /// </summary>

    std::string getExcludeDeviceName() const;
    bool excludeDeviceNameIsSet() const;
    void unsetexcludeDeviceName();
    void setExcludeDeviceName(const std::string& value);

    /// <summary>
    /// 资产支持的业务类型。默认查询所有资产。 * VIDEO_2D：分身数字人视频制作 * LIVE_2D：分身数字人直播 * CHAT_2D：分身数字人智能交互
    /// </summary>

    std::string getSupportedService() const;
    bool supportedServiceIsSet() const;
    void unsetsupportedService();
    void setSupportedService(const std::string& value);

    /// <summary>
    /// 第三方用户ID。不允许输入中文。
    /// </summary>

    std::string getAppUserId() const;
    bool appUserIdIsSet() const;
    void unsetappUserId();
    void setAppUserId(const std::string& value);

    /// <summary>
    /// 租户组id。只支持asset_souce是ALL 或者GROUP_CUSTOMIZATION 来源。
    /// </summary>

    std::string getProjectGroupId() const;
    bool projectGroupIdIsSet() const;
    void unsetprojectGroupId();
    void setProjectGroupId(const std::string& value);


protected:
    std::string authorization_;
    bool authorizationIsSet_;
    std::string xSdkDate_;
    bool xSdkDateIsSet_;
    std::string xAppUserId_;
    bool xAppUserIdIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string tag_;
    bool tagIsSet_;
    std::string tagCombinationType_;
    bool tagCombinationTypeIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::string assetType_;
    bool assetTypeIsSet_;
    std::string sortKey_;
    bool sortKeyIsSet_;
    std::string sortDir_;
    bool sortDirIsSet_;
    std::string assetSource_;
    bool assetSourceIsSet_;
    std::string assetState_;
    bool assetStateIsSet_;
    std::string styleId_;
    bool styleIdIsSet_;
    std::vector<std::string> accurateQueryField_;
    bool accurateQueryFieldIsSet_;
    std::string renderEngine_;
    bool renderEngineIsSet_;
    std::vector<std::string> assetId_;
    bool assetIdIsSet_;
    std::string sex_;
    bool sexIsSet_;
    std::string language_;
    bool languageIsSet_;
    std::string systemProperty_;
    bool systemPropertyIsSet_;
    bool actionEditable_;
    bool actionEditableIsSet_;
    bool isWithActionLibrary_;
    bool isWithActionLibraryIsSet_;
    bool isMovable_;
    bool isMovableIsSet_;
    std::string voiceProvider_;
    bool voiceProviderIsSet_;
    std::string role_;
    bool roleIsSet_;
    bool isRealtimeVoice_;
    bool isRealtimeVoiceIsSet_;
    std::string humanModel2dVersion_;
    bool humanModel2dVersionIsSet_;
    std::string includeDeviceName_;
    bool includeDeviceNameIsSet_;
    std::string excludeDeviceName_;
    bool excludeDeviceNameIsSet_;
    std::string supportedService_;
    bool supportedServiceIsSet_;
    std::string appUserId_;
    bool appUserIdIsSet_;
    std::string projectGroupId_;
    bool projectGroupIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListAssetsRequest& dereference_from_shared_ptr(std::shared_ptr<ListAssetsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListAssetsRequest_H_
