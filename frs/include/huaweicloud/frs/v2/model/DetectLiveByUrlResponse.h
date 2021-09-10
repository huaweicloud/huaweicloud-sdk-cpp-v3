
#ifndef HUAWEICLOUD_SDK_FRS_V2_MODEL_DetectLiveByUrlResponse_H_
#define HUAWEICLOUD_SDK_FRS_V2_MODEL_DetectLiveByUrlResponse_H_

#include <huaweicloud/frs/v2/FrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/frs/v2/model/WarningList.h>
#include <huaweicloud/frs/v2/model/LiveDetectResp_videoresult.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_FRS_V2_EXPORT  DetectLiveByUrlResponse
    : public ModelBase, public HttpResponse
{
public:
    DetectLiveByUrlResponse();
    virtual ~DetectLiveByUrlResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DetectLiveByUrlResponse members

    /// <summary>
    /// 
    /// </summary>

    LiveDetectResp_videoresult getVideoResult() const;
    bool videoResultIsSet() const;
    void unsetvideoResult();
    void setVideoResult(const LiveDetectResp_videoresult& value);

    /// <summary>
    /// 警告信息列表，WarningList结构见[WarningList](zh-cn_topic_0146322261.xml)。 调用失败时无此字段
    /// </summary>

    std::vector<WarningList>& getWarningList();
    bool warningListIsSet() const;
    void unsetwarningList();
    void setWarningList(const std::vector<WarningList>& value);


protected:
    LiveDetectResp_videoresult videoResult_;
    bool videoResultIsSet_;
    std::vector<WarningList> warningList_;
    bool warningListIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FRS_V2_MODEL_DetectLiveByUrlResponse_H_
