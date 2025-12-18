
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_SegmentFileDO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_SegmentFileDO_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 录制切片文件
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  SegmentFileDO
    : public ModelBase
{
public:
    SegmentFileDO();
    virtual ~SegmentFileDO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SegmentFileDO members

    /// <summary>
    /// 会议录制类型，取值范围见数据结构RecordType：AUDIO 纯音频录制，SPEAKER_VIDEO 演讲者视图，SHARE_VIDEO共享屏幕，SPEAKER_SHARE_VIDEO 含演讲者视图的共享屏幕
    /// </summary>

    std::string getRecordType() const;
    bool recordTypeIsSet() const;
    void unsetrecordType();
    void setRecordType(const std::string& value);

    /// <summary>
    /// 录制文件开始时间 
    /// </summary>

    int64_t getBeginTime() const;
    bool beginTimeIsSet() const;
    void unsetbeginTime();
    void setBeginTime(int64_t value);

    /// <summary>
    /// 录制文件结束时间 
    /// </summary>

    int64_t getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(int64_t value);

    /// <summary>
    /// 录制文件时长(秒)
    /// </summary>

    int64_t getDuration() const;
    bool durationIsSet() const;
    void unsetduration();
    void setDuration(int64_t value);

    /// <summary>
    /// 文件大小(字节数)
    /// </summary>

    int64_t getFileSize() const;
    bool fileSizeIsSet() const;
    void unsetfileSize();
    void setFileSize(int64_t value);

    /// <summary>
    /// 文件hash校验码(SHA256)，64个字符
    /// </summary>

    std::string getSha256() const;
    bool sha256IsSet() const;
    void unsetsha256();
    void setSha256(const std::string& value);

    /// <summary>
    /// 录制文件播放地址，有效期1小时
    /// </summary>

    std::string getPlayUrl() const;
    bool playUrlIsSet() const;
    void unsetplayUrl();
    void setPlayUrl(const std::string& value);

    /// <summary>
    /// 录制文件下载地址，有效期1小时
    /// </summary>

    std::string getDownloadUrl() const;
    bool downloadUrlIsSet() const;
    void unsetdownloadUrl();
    void setDownloadUrl(const std::string& value);


protected:
    std::string recordType_;
    bool recordTypeIsSet_;
    int64_t beginTime_;
    bool beginTimeIsSet_;
    int64_t endTime_;
    bool endTimeIsSet_;
    int64_t duration_;
    bool durationIsSet_;
    int64_t fileSize_;
    bool fileSizeIsSet_;
    std::string sha256_;
    bool sha256IsSet_;
    std::string playUrl_;
    bool playUrlIsSet_;
    std::string downloadUrl_;
    bool downloadUrlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_SegmentFileDO_H_
