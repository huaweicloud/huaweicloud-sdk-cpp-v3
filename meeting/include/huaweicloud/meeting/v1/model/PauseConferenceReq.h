
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_PauseConferenceReq_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_PauseConferenceReq_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 主持人暂停/取消暂停会议请求消息体
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  PauseConferenceReq
    : public ModelBase
{
public:
    PauseConferenceReq();
    virtual ~PauseConferenceReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PauseConferenceReq members

    /// <summary>
    /// 主持人暂停/取消暂停会议 0：会议正常 1：会议暂停
    /// </summary>

    int32_t getPause() const;
    bool pauseIsSet() const;
    void unsetpause();
    void setPause(int32_t value);


protected:
    int32_t pause_;
    bool pauseIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_PauseConferenceReq_H_
