
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowRecordingFileDownloadUrlsResponse_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowRecordingFileDownloadUrlsResponse_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/meeting/v1/model/RecordDownloadInfoBO.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  ShowRecordingFileDownloadUrlsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowRecordingFileDownloadUrlsResponse();
    virtual ~ShowRecordingFileDownloadUrlsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowRecordingFileDownloadUrlsResponse members

    /// <summary>
    /// 录制文件下载链接。
    /// </summary>

    std::vector<RecordDownloadInfoBO>& getRecordUrls();
    bool recordUrlsIsSet() const;
    void unsetrecordUrls();
    void setRecordUrls(const std::vector<RecordDownloadInfoBO>& value);


protected:
    std::vector<RecordDownloadInfoBO> recordUrls_;
    bool recordUrlsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowRecordingFileDownloadUrlsResponse_H_
