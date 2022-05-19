
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_BaseInfo_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_BaseInfo_H_

#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vod/v1/model/CoverInfo.h>
#include <huaweicloud/vod/v1/model/SubtitleInfo.h>
#include <huaweicloud/vod/v1/model/File_addr.h>
#include <string>
#include <huaweicloud/vod/v1/model/MetaData.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 媒资基本信息。
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  BaseInfo
    : public ModelBase
{
public:
    BaseInfo();
    virtual ~BaseInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BaseInfo members

    /// <summary>
    /// 媒资标题。  长度不超过128个字节，UTF8编码。
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// 媒资文件名。
    /// </summary>

    std::string getVideoName() const;
    bool videoNameIsSet() const;
    void unsetvideoName();
    void setVideoName(const std::string& value);

    /// <summary>
    /// 媒资描述。  长度不超过1024个字节。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 媒资分类id。
    /// </summary>

    int64_t getCategoryId() const;
    bool categoryIdIsSet() const;
    void unsetcategoryId();
    void setCategoryId(int64_t value);

    /// <summary>
    /// 媒资分类名称。
    /// </summary>

    std::string getCategoryName() const;
    bool categoryNameIsSet() const;
    void unsetcategoryName();
    void setCategoryName(const std::string& value);

    /// <summary>
    /// 媒资创建时间。  格式为yyyymmddhhmmss。必须是与时区无关的UTC时间。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 媒资最近修改时间。  格式为yyyymmddhhmmss。必须是与时区无关的UTC时间。
    /// </summary>

    std::string getLastModified() const;
    bool lastModifiedIsSet() const;
    void unsetlastModified();
    void setLastModified(const std::string& value);

    /// <summary>
    /// 音视频文件类型。  取值如下： - 视频文件：MP4、TS、MOV、MXF、MPG、FLV、WMV、AVI、M4V、F4V、MPEG、3GP、ASF、MKV。 - 音频文件：MP3、OGG、WAV、WMA、APE、FLAC、AAC、AC3、MMF、AMR、M4A、M4R、WV、MP2。
    /// </summary>

    std::string getVideoType() const;
    bool videoTypeIsSet() const;
    void unsetvideoType();
    void setVideoType(const std::string& value);

    /// <summary>
    /// 媒资标签。  单个标签不超过16个字节，最多不超过16个标签。  多个用逗号分隔，UTF8编码。
    /// </summary>

    std::string getTags() const;
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    MetaData getMetaData() const;
    bool metaDataIsSet() const;
    void unsetmetaData();
    void setMetaData(const MetaData& value);

    /// <summary>
    /// 原始视频文件的访问地址。
    /// </summary>

    std::string getVideoUrl() const;
    bool videoUrlIsSet() const;
    void unsetvideoUrl();
    void setVideoUrl(const std::string& value);

    /// <summary>
    /// 原视频文件的OBS临时访问地址,仅媒资详情接口生效
    /// </summary>

    std::string getSignUrl() const;
    bool signUrlIsSet() const;
    void unsetsignUrl();
    void setSignUrl(const std::string& value);

    /// <summary>
    /// 封面信息。
    /// </summary>

    std::vector<CoverInfo>& getCoverInfoArray();
    bool coverInfoArrayIsSet() const;
    void unsetcoverInfoArray();
    void setCoverInfoArray(const std::vector<CoverInfo>& value);

    /// <summary>
    /// 字幕信息数组
    /// </summary>

    std::vector<SubtitleInfo>& getSubtitleInfo();
    bool subtitleInfoIsSet() const;
    void unsetsubtitleInfo();
    void setSubtitleInfo(const std::vector<SubtitleInfo>& value);

    /// <summary>
    /// 
    /// </summary>

    File_addr getSourcePath() const;
    bool sourcePathIsSet() const;
    void unsetsourcePath();
    void setSourcePath(const File_addr& value);

    /// <summary>
    /// 
    /// </summary>

    File_addr getOutputPath() const;
    bool outputPathIsSet() const;
    void unsetoutputPath();
    void setOutputPath(const File_addr& value);


protected:
    std::string title_;
    bool titleIsSet_;
    std::string videoName_;
    bool videoNameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    int64_t categoryId_;
    bool categoryIdIsSet_;
    std::string categoryName_;
    bool categoryNameIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string lastModified_;
    bool lastModifiedIsSet_;
    std::string videoType_;
    bool videoTypeIsSet_;
    std::string tags_;
    bool tagsIsSet_;
    MetaData metaData_;
    bool metaDataIsSet_;
    std::string videoUrl_;
    bool videoUrlIsSet_;
    std::string signUrl_;
    bool signUrlIsSet_;
    std::vector<CoverInfo> coverInfoArray_;
    bool coverInfoArrayIsSet_;
    std::vector<SubtitleInfo> subtitleInfo_;
    bool subtitleInfoIsSet_;
    File_addr sourcePath_;
    bool sourcePathIsSet_;
    File_addr outputPath_;
    bool outputPathIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_BaseInfo_H_
