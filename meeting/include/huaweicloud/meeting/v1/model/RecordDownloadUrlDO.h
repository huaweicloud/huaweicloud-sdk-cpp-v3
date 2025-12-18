
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_RecordDownloadUrlDO_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_RecordDownloadUrlDO_H_


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
/// 单个录制文件下载链接信息。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  RecordDownloadUrlDO
    : public ModelBase
{
public:
    RecordDownloadUrlDO();
    virtual ~RecordDownloadUrlDO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RecordDownloadUrlDO members

    /// <summary>
    /// 下载鉴权token，下载文件时，使用该token鉴权。（一小时内有效，使用后立即失效）。
    /// </summary>

    std::string getToken() const;
    bool tokenIsSet() const;
    void unsettoken();
    void setToken(const std::string& value);

    /// <summary>
    /// 文件类型。 * Aux：辅流（会议中的共享画面；分辨率为720p） * Hd：高清（会议中的视频画面；分辨率和会议中视频画面的分辨率一致，1080p或者720p） * Sd：标清（会议中视频画面和共享画面的合成画面，视频画面是大画面，共享画面是小画面，共享画面布局在右下方；分辨率为4CIF） &gt; 单个MP4文件大小不超过1GB。 
    /// </summary>

    std::string getFileType() const;
    bool fileTypeIsSet() const;
    void unsetfileType();
    void setFileType(const std::string& value);

    /// <summary>
    /// 文件下载url，最大1000个字符。
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);


protected:
    std::string token_;
    bool tokenIsSet_;
    std::string fileType_;
    bool fileTypeIsSet_;
    std::string url_;
    bool urlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_RecordDownloadUrlDO_H_
