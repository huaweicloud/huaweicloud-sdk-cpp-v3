
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListVideoMotionCaptureJobsResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListVideoMotionCaptureJobsResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/VideoMotionCaptureInfo.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ListVideoMotionCaptureJobsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListVideoMotionCaptureJobsResponse();
    virtual ~ListVideoMotionCaptureJobsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListVideoMotionCaptureJobsResponse members

    /// <summary>
    /// 视频驱动任务总数。
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 视频驱动任务列表。
    /// </summary>

    std::vector<VideoMotionCaptureInfo>& getVideoMotionCaptureJobs();
    bool videoMotionCaptureJobsIsSet() const;
    void unsetvideoMotionCaptureJobs();
    void setVideoMotionCaptureJobs(const std::vector<VideoMotionCaptureInfo>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<VideoMotionCaptureInfo> videoMotionCaptureJobs_;
    bool videoMotionCaptureJobsIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ListVideoMotionCaptureJobsResponse_H_
