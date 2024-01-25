
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_AssetProcessReq_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_AssetProcessReq_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/vod/v1/model/Thumbnail.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  AssetProcessReq
    : public ModelBase
{
public:
    AssetProcessReq();
    virtual ~AssetProcessReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AssetProcessReq members

    /// <summary>
    /// 媒资ID。
    /// </summary>

    std::string getAssetId() const;
    bool assetIdIsSet() const;
    void unsetassetId();
    void setAssetId(const std::string& value);

    /// <summary>
    /// hls的音视频流存储方式。  取值如下： - composite：存储在同一文件中。 - separate：存储在不同文件中。
    /// </summary>

    std::string getHlsStorageType() const;
    bool hlsStorageTypeIsSet() const;
    void unsethlsStorageType();
    void setHlsStorageType(const std::string& value);

    /// <summary>
    /// 转码模板组名称。   若不为空，则使用指定的转码模板对上传的音视频进行转码，您可以在视频点播控制台配置转码模板，具体请参见[转码设置](https://support.huaweicloud.com/usermanual-vod/vod_01_0072.html)。
    /// </summary>

    std::string getTemplateGroupName() const;
    bool templateGroupNameIsSet() const;
    void unsettemplateGroupName();
    void setTemplateGroupName(const std::string& value);

    /// <summary>
    /// 是否自动加密。  取值如下： - 0：表示不加密。 - 1：表示需要加密。  默认值：0。  加密与转码必须要一起进行，当需要加密时，转码参数不能为空，且转码输出格式必须要为HLS。
    /// </summary>

    int32_t getAutoEncrypt() const;
    bool autoEncryptIsSet() const;
    void unsetautoEncrypt();
    void setAutoEncrypt(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    Thumbnail getThumbnail() const;
    bool thumbnailIsSet() const;
    void unsetthumbnail();
    void setThumbnail(const Thumbnail& value);

    /// <summary>
    /// 字幕文件ID。  &gt; 仅在[创建媒资](https://support.huaweicloud.com/api-vod/vod_04_0196.html)时，请求参数设置了“**subtitles**”时，该参数设置才生效。
    /// </summary>

    std::vector<int32_t>& getSubtitleId();
    bool subtitleIdIsSet() const;
    void unsetsubtitleId();
    void setSubtitleId(std::vector<int32_t> value);


protected:
    std::string assetId_;
    bool assetIdIsSet_;
    std::string hlsStorageType_;
    bool hlsStorageTypeIsSet_;
    std::string templateGroupName_;
    bool templateGroupNameIsSet_;
    int32_t autoEncrypt_;
    bool autoEncryptIsSet_;
    Thumbnail thumbnail_;
    bool thumbnailIsSet_;
    std::vector<int32_t> subtitleId_;
    bool subtitleIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_AssetProcessReq_H_
