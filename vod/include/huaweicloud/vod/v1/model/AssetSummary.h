
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_AssetSummary_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_AssetSummary_H_

#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vod/v1/model/CoverInfo.h>
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
/// 媒资总览
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  AssetSummary
    : public ModelBase
{
public:
    AssetSummary();
    virtual ~AssetSummary();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// AssetSummary members

    /// <summary>
    /// 媒资ID。
    /// </summary>

    std::string getAssetId() const;
    bool assetIdIsSet() const;
    void unsetassetId();
    void setAssetId(const std::string& value);

    /// <summary>
    /// 媒资标题。长度不超过128个字节，UTF-8编码。
    /// </summary>

    std::string getTitle() const;
    bool titleIsSet() const;
    void unsettitle();
    void setTitle(const std::string& value);

    /// <summary>
    /// 媒资描述。长度不超过1024个字节。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 媒资时长。  单位：秒。
    /// </summary>

    int32_t getDuration() const;
    bool durationIsSet() const;
    void unsetduration();
    void setDuration(int32_t value);

    /// <summary>
    /// 媒资大小。  单位：字节。
    /// </summary>

    int64_t getSize() const;
    bool sizeIsSet() const;
    void unsetsize();
    void setSize(int64_t value);

    /// <summary>
    /// 原始播放url。
    /// </summary>

    std::string getOriginalUrl() const;
    bool originalUrlIsSet() const;
    void unsetoriginalUrl();
    void setOriginalUrl(const std::string& value);

    /// <summary>
    /// 媒资分类名称。
    /// </summary>

    std::string getCategory() const;
    bool categoryIsSet() const;
    void unsetcategory();
    void setCategory(const std::string& value);

    /// <summary>
    /// 封面信息。
    /// </summary>

    std::vector<CoverInfo>& getCovers();
    bool coversIsSet() const;
    void unsetcovers();
    void setCovers(const std::vector<CoverInfo>& value);

    /// <summary>
    /// 媒资创建时间。  格式为yyyymmddhhmmss。必须是与时区无关的UTC时间。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 媒资状态。  取值如下： - CREATING：上传中。 - FAILED：上传失败。 - CREATED：上传成功。 - PUBLISHED：已发布。 - DELETED：已删除。
    /// </summary>

    std::string getAssetStatus() const;
    bool assetStatusIsSet() const;
    void unsetassetStatus();
    void setAssetStatus(const std::string& value);

    /// <summary>
    /// 转码状态。  取值如下： - UN_TRANSCODE：未转码。 - WAITING_TRANSCODE：待转码 - TRANSCODING：转码中。 - TRANSCODE_SUCCEED：转码成功。 - TRANSCODE_FAILED：转码失败。
    /// </summary>

    std::string getTranscodeStatus() const;
    bool transcodeStatusIsSet() const;
    void unsettranscodeStatus();
    void setTranscodeStatus(const std::string& value);

    /// <summary>
    /// 截图状态。  取值如下： - UN_THUMBNAIL：未截图。 - THUMBNAILING：截图中。 - THUMBNAIL_SUCCEED：截图成功。 - THUMBNAIL_FAILED：截图失败。
    /// </summary>

    std::string getThumbnailStatus() const;
    bool thumbnailStatusIsSet() const;
    void unsetthumbnailStatus();
    void setThumbnailStatus(const std::string& value);

    /// <summary>
    /// 内容审核状态  取值如下： - UN_REVIEW：未审核。 - REVIEWING：审核中。 - REVIEW_SUSPICIOUS：审核可疑，需要人工复审。 - REVIEW_PASSED：审核通过。 - REVIEW_FAILED：审核失败。 - REVIEW_BLOCKED：已屏蔽。
    /// </summary>

    std::string getReviewStatus() const;
    bool reviewStatusIsSet() const;
    void unsetreviewStatus();
    void setReviewStatus(const std::string& value);

    /// <summary>
    /// 媒资的任务执行描述汇总。  示例： - asset_exec_desc: upload success，媒资任务执行描述信息。 - transcode_exec_desc: transcode success，转码任务执行描述信息。 - thumbnail_exec_desc: thumbnail failed，截图任务执行描述信息。 - review_exec_desc: review pass，审核任务执行描述信息。
    /// </summary>

    std::string getExecDesc() const;
    bool execDescIsSet() const;
    void unsetexecDesc();
    void setExecDesc(const std::string& value);

    /// <summary>
    /// 音视频文件的格式。  取值如下： - 视频文件格式：MP4、TS、MOV、MXF、MPG、FLV、WMV、AVI、M4V、F4V、MPEG - 音频文件格式：MP3、OGG、WAV、WMA、APE、FLAC、AAC、AC3、MMF、AMR、M4A、M4R、WV、MP2
    /// </summary>

    std::string getMediaType() const;
    bool mediaTypeIsSet() const;
    void unsetmediaType();
    void setMediaType(const std::string& value);


protected:
    std::string assetId_;
    bool assetIdIsSet_;
    std::string title_;
    bool titleIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    int32_t duration_;
    bool durationIsSet_;
    int64_t size_;
    bool sizeIsSet_;
    std::string originalUrl_;
    bool originalUrlIsSet_;
    std::string category_;
    bool categoryIsSet_;
    std::vector<CoverInfo> covers_;
    bool coversIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string assetStatus_;
    bool assetStatusIsSet_;
    std::string transcodeStatus_;
    bool transcodeStatusIsSet_;
    std::string thumbnailStatus_;
    bool thumbnailStatusIsSet_;
    std::string reviewStatus_;
    bool reviewStatusIsSet_;
    std::string execDesc_;
    bool execDescIsSet_;
    std::string mediaType_;
    bool mediaTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_AssetSummary_H_
