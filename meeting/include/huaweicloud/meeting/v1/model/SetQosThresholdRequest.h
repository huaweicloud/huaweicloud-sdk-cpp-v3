
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_SetQosThresholdRequest_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_SetQosThresholdRequest_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/meeting/v1/model/SetQosThresholdReq.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  SetQosThresholdRequest
    : public ModelBase
{
public:
    SetQosThresholdRequest();
    virtual ~SetQosThresholdRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SetQosThresholdRequest members

    /// <summary>
    /// 阈值类型： * AUDIO：音频相关阈值 * VIDEO：视频相关阈值 * SCREEN：屏幕共享相关阈值 * CPU：CPU相关阈值
    /// </summary>

    std::string getThresholdType() const;
    bool thresholdTypeIsSet() const;
    void unsetthresholdType();
    void setThresholdType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    SetQosThresholdReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const SetQosThresholdReq& value);


protected:
    std::string thresholdType_;
    bool thresholdTypeIsSet_;
    SetQosThresholdReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    SetQosThresholdRequest& dereference_from_shared_ptr(std::shared_ptr<SetQosThresholdRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_SetQosThresholdRequest_H_
