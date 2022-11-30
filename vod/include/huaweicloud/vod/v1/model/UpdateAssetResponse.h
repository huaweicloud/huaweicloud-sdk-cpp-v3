
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_UpdateAssetResponse_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_UpdateAssetResponse_H_

#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  UpdateAssetResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateAssetResponse();
    virtual ~UpdateAssetResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateAssetResponse members

    /// <summary>
    /// 媒资ID。
    /// </summary>

    std::string getAssetId() const;
    bool assetIdIsSet() const;
    void unsetassetId();
    void setAssetId(const std::string& value);

    /// <summary>
    /// 视频上传地址。  用于客户端上传不超过20MB的小视频文件（&lt;&#x3D;20MB）。该URL中携带了临时授权信息，当文件大于20MB时，需要采用分段方式上传。  &gt; 您可以使用PUT请求向“**video_upload_url**”中上传视频文件。其中，“**Content-Type**”需要根据上传的视频文件类型进行设置，如下所示：视频文件：video/视频格式，如：“video/mp4”。
    /// </summary>

    std::string getVideoUploadUrl() const;
    bool videoUploadUrlIsSet() const;
    void unsetvideoUploadUrl();
    void setVideoUploadUrl(const std::string& value);

    /// <summary>
    /// 封面上传地址，用于上传封面文件。  &gt; 您可以使用PUT请求向“**cover_upload_url**”中上传封面图片。其中，“**Content-Type**”需要根据上传的封面文件类型进行设置，如下所示：图片文件：image/图片格式，如：“image/png”。
    /// </summary>

    std::string getCoverUploadUrl() const;
    bool coverUploadUrlIsSet() const;
    void unsetcoverUploadUrl();
    void setCoverUploadUrl(const std::string& value);

    /// <summary>
    /// 字幕上传地址，用于上传字幕。  &gt; 您可以使用PUT请求向“**subtitle_upload_urls**”中上传字幕文件。其中，“**Content-Type**”需要根据上传的字幕文件类型进行设置，如下所示：字幕文件：application/octet-stream。
    /// </summary>

    std::vector<std::string>& getSubtitleUploadUrls();
    bool subtitleUploadUrlsIsSet() const;
    void unsetsubtitleUploadUrls();
    void setSubtitleUploadUrls(const std::vector<std::string>& value);


protected:
    std::string assetId_;
    bool assetIdIsSet_;
    std::string videoUploadUrl_;
    bool videoUploadUrlIsSet_;
    std::string coverUploadUrl_;
    bool coverUploadUrlIsSet_;
    std::vector<std::string> subtitleUploadUrls_;
    bool subtitleUploadUrlsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_UpdateAssetResponse_H_
