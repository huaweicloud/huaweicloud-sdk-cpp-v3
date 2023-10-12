
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_UploadAssetReq_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_UploadAssetReq_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/vod/v1/model/Subtitle.h>

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
class HUAWEICLOUD_VOD_V1_EXPORT  UploadAssetReq
    : public ModelBase
{
public:
    UploadAssetReq();
    virtual ~UploadAssetReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UploadAssetReq members

    /// <summary>
    /// 媒资ID。
    /// </summary>

    std::string getAssetId() const;
    bool assetIdIsSet() const;
    void unsetassetId();
    void setAssetId(const std::string& value);

    /// <summary>
    /// 视频文件MD5值。  建议参考[媒资上传和更新](https://support.huaweicloud.com/api-vod/vod_04_0212.html)生成对应的MD5值。
    /// </summary>

    std::string getVideoMd5() const;
    bool videoMd5IsSet() const;
    void unsetvideoMd5();
    void setVideoMd5(const std::string& value);

    /// <summary>
    /// 视频文件名。  文件名后缀为可选。
    /// </summary>

    std::string getVideoName() const;
    bool videoNameIsSet() const;
    void unsetvideoName();
    void setVideoName(const std::string& value);

    /// <summary>
    /// 视频文件类型。 取值为MP4、TS、MOV、MXF、MPG、FLV、WMV、AVI、M4V、F4V、MPEG、3GP、ASF、MKV
    /// </summary>

    std::string getVideoType() const;
    bool videoTypeIsSet() const;
    void unsetvideoType();
    void setVideoType(const std::string& value);

    /// <summary>
    /// 封面ID。  取值范围：[0,7]。  当前只支持一张封面，只能设置为0。
    /// </summary>

    int32_t getCoverId() const;
    bool coverIdIsSet() const;
    void unsetcoverId();
    void setCoverId(int32_t value);

    /// <summary>
    /// 封面图片格式类型。  取值如下： - JPG - PNG
    /// </summary>

    std::string getCoverType() const;
    bool coverTypeIsSet() const;
    void unsetcoverType();
    void setCoverType(const std::string& value);

    /// <summary>
    /// 封面文件的MD5值。
    /// </summary>

    std::string getCoverMd5() const;
    bool coverMd5IsSet() const;
    void unsetcoverMd5();
    void setCoverMd5(const std::string& value);

    /// <summary>
    /// 字幕文件信息
    /// </summary>

    std::vector<Subtitle>& getSubtitles();
    bool subtitlesIsSet() const;
    void unsetsubtitles();
    void setSubtitles(const std::vector<Subtitle>& value);


protected:
    std::string assetId_;
    bool assetIdIsSet_;
    std::string videoMd5_;
    bool videoMd5IsSet_;
    std::string videoName_;
    bool videoNameIsSet_;
    std::string videoType_;
    bool videoTypeIsSet_;
    int32_t coverId_;
    bool coverIdIsSet_;
    std::string coverType_;
    bool coverTypeIsSet_;
    std::string coverMd5_;
    bool coverMd5IsSet_;
    std::vector<Subtitle> subtitles_;
    bool subtitlesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_UploadAssetReq_H_
