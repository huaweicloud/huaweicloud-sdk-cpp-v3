
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowQosThresholdRequest_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowQosThresholdRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  ShowQosThresholdRequest
    : public ModelBase
{
public:
    ShowQosThresholdRequest();
    virtual ~ShowQosThresholdRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowQosThresholdRequest members

    /// <summary>
    /// 阈值类型。 * AUDIO：音频告警阈值 * VIDEO：视频告警阈值 * SCREEN：屏幕共享告警阈值 * CPU：CPU告警阈值
    /// </summary>

    std::string getThresholdType() const;
    bool thresholdTypeIsSet() const;
    void unsetthresholdType();
    void setThresholdType(const std::string& value);


protected:
    std::string thresholdType_;
    bool thresholdTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowQosThresholdRequest& dereference_from_shared_ptr(std::shared_ptr<ShowQosThresholdRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowQosThresholdRequest_H_
