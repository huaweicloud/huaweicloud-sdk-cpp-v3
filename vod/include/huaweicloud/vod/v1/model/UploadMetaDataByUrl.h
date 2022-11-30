
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_UploadMetaDataByUrl_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_UploadMetaDataByUrl_H_

#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vod/v1/model/Review.h>
#include <string>
#include <huaweicloud/vod/v1/model/Thumbnail.h>

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
class HUAWEICLOUD_VOD_V1_EXPORT  UploadMetaDataByUrl
    : public ModelBase
{
public:
    UploadMetaDataByUrl();
    virtual ~UploadMetaDataByUrl();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UploadMetaDataByUrl members

    /// <summary>
    /// 上传音视频文件的格式。  取值如下： - 视频文件：MP4、TS、MOV、MXF、MPG、FLV、WMV、AVI、M4V、F4V、MPEG、3GP、ASF、MKV、M3U8 - 音频文件：MP3、OGG、WAV、WMA、APE、FLAC、AAC、AC3、MMF、AMR、M4A、M4R、WV、MP2  若上传格式为音频文件，则不支持转码、添加水印和字幕。
    /// </summary>

    std::string getVideoType() const;
    bool videoTypeIsSet() const;
    void unsetvideoType();
    void setVideoType(const std::string& value);

    /// <summary>
    /// 媒资标题，长度不超过128个字节，UTF-8编码。
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// 音视频源文件URL。   &gt; URL必须以扩展名结尾，暂只支持http和https协议。
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);

    /// <summary>
    /// 视频描述，长度不超过1024个字节。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 媒资分类ID。  您可以调用[创建媒资分类](https://support.huaweicloud.com/api-vod/vod_04_0028.html)接口或在点播控制台的[分类设置](https://support.huaweicloud.com/usermanual-vod/vod010006.html)中创建对应的媒资分类，并获取分类ID。  &gt; 若不设置或者设置为-1，则上传的音视频归类到系统预置的“其它”分类中。
    /// </summary>

    int32_t getCategoryId() const;
    bool categoryIdIsSet() const;
    void unsetcategoryId();
    void setCategoryId(int32_t value);

    /// <summary>
    /// 视频标签。  单个标签不超过16个字节，最多不超过16个标签。  多个用逗号分隔，UTF8编码。
    /// </summary>

    std::string getTags() const;
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::string& value);

    /// <summary>
    /// 是否自动发布。  取值如下： - 0：表示不自动发布。 - 1：表示自动发布。  默认值：0。
    /// </summary>

    int32_t getAutoPublish() const;
    bool autoPublishIsSet() const;
    void unsetautoPublish();
    void setAutoPublish(int32_t value);

    /// <summary>
    /// 转码模板组名称。  若不为空，则使用指定的转码模板对上传的音视频进行转码，您可以在视频点播控制台配置转码模板，具体请参见[转码设置](https://support.huaweicloud.com/usermanual-vod/vod_01_0072.html)。  &gt;若同时设置了“**template_group_name**”和“**workflow_name**”字段，则“**template_group_name**”字段生效。
    /// </summary>

    std::string getTemplateGroupName() const;
    bool templateGroupNameIsSet() const;
    void unsettemplateGroupName();
    void setTemplateGroupName(const std::string& value);

    /// <summary>
    /// 是否自动加密。  取值如下： - 0：表示不加密。 - 1：表示需要加密。  默认值：0。若设置为需要加密，则必须配置转码模板，且转码的输出格式是HLS。
    /// </summary>

    int32_t getAutoEncrypt() const;
    bool autoEncryptIsSet() const;
    void unsetautoEncrypt();
    void setAutoEncrypt(int32_t value);

    /// <summary>
    /// 是否自动预热到CDN。  取值如下： - 0：表示不自动预热。 - 1：表示自动预热。  默认值：0。
    /// </summary>

    int32_t getAutoPreheat() const;
    bool autoPreheatIsSet() const;
    void unsetautoPreheat();
    void setAutoPreheat(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    Thumbnail getThumbnail() const;
    bool thumbnailIsSet() const;
    void unsetthumbnail();
    void setThumbnail(const Thumbnail& value);

    /// <summary>
    /// 
    /// </summary>

    Review getReview() const;
    bool reviewIsSet() const;
    void unsetreview();
    void setReview(const Review& value);

    /// <summary>
    /// 工作流名称。  若不为空，则使用指定的工作流对上传的音视频进行处理，您可以在视频点播控制台配置工作流，具体请参见[工作流设置](https://support.huaweicloud.com/usermanual-vod/vod010041.html)。
    /// </summary>

    std::string getWorkflowName() const;
    bool workflowNameIsSet() const;
    void unsetworkflowName();
    void setWorkflowName(const std::string& value);


protected:
    std::string videoType_;
    bool videoTypeIsSet_;
    std::string title_;
    bool titleIsSet_;
    std::string url_;
    bool urlIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    int32_t categoryId_;
    bool categoryIdIsSet_;
    std::string tags_;
    bool tagsIsSet_;
    int32_t autoPublish_;
    bool autoPublishIsSet_;
    std::string templateGroupName_;
    bool templateGroupNameIsSet_;
    int32_t autoEncrypt_;
    bool autoEncryptIsSet_;
    int32_t autoPreheat_;
    bool autoPreheatIsSet_;
    Thumbnail thumbnail_;
    bool thumbnailIsSet_;
    Review review_;
    bool reviewIsSet_;
    std::string workflowName_;
    bool workflowNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_UploadMetaDataByUrl_H_
