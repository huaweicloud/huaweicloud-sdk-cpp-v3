
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_DigitalAssetSummary_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_DigitalAssetSummary_H_


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
/// 
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  DigitalAssetSummary
    : public ModelBase
{
public:
    DigitalAssetSummary();
    virtual ~DigitalAssetSummary();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DigitalAssetSummary members

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
    /// 资产状态。 * CREATING：资产创建中，主文件尚未上传 * FAILED：主文件上传失败 * UNACTIVED：主文件上传成功，资产未激活，资产不可用于其他业务（用户可更新状态） * ACTIVED：主文件上传成功，资产激活，资产可用于其他业务（用户可更新状态） * DELETING：资产删除中，资产不可用，资产可恢复 * DELETED：资产文件已删除，资产不可用，资产不可恢复 * BLOCK: 资产被冻结，资产不可用，不可查看文件。 * WAITING_DELETE：资产将被下线
    /// </summary>

    std::string getAssetState() const;
    bool assetStateIsSet() const;
    void unsetassetState();
    void setAssetState(const std::string& value);

    /// <summary>
    /// 资产类型。 公共资产类型： * VOICE_MODEL：音色模型（仅系统管理员可上传，普通租户仅可查询） * VIDEO：视频文件 * IMAGE：图片文件 * PPT：幻灯片文件 * MUSIC: 音乐 * AUDIO: 音频 * COMMON_FILE：通用文件  分身数字人资产： * HUMAN_MODEL_2D: 分身数字人模型 * BUSINESS_CARD_TEMPLET: 数字人名片模板
    /// </summary>

    std::string getAssetType() const;
    bool assetTypeIsSet() const;
    void unsetassetType();
    void setAssetType(const std::string& value);

    /// <summary>
    /// 封面图片路径。
    /// </summary>

    std::string getCoverUrl() const;
    bool coverUrlIsSet() const;
    void unsetcoverUrl();
    void setCoverUrl(const std::string& value);

    /// <summary>
    /// 缩略图路径。
    /// </summary>

    std::string getThumbnailUrl() const;
    bool thumbnailUrlIsSet() const;
    void unsetthumbnailUrl();
    void setThumbnailUrl(const std::string& value);


protected:
    std::string assetId_;
    bool assetIdIsSet_;
    std::string assetName_;
    bool assetNameIsSet_;
    std::string assetState_;
    bool assetStateIsSet_;
    std::string assetType_;
    bool assetTypeIsSet_;
    std::string coverUrl_;
    bool coverUrlIsSet_;
    std::string thumbnailUrl_;
    bool thumbnailUrlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_DigitalAssetSummary_H_
