
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowRealTimeInfoOfMeetingResponse_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowRealTimeInfoOfMeetingResponse_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/meeting/v1/model/RealTimeConfInfo.h>
#include <huaweicloud/meeting/v1/model/RealTimeParticipant.h>
#include <vector>
#include <huaweicloud/meeting/v1/model/RealTimeAttendee.h>

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
class HUAWEICLOUD_MEETING_V1_EXPORT  ShowRealTimeInfoOfMeetingResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowRealTimeInfoOfMeetingResponse();
    virtual ~ShowRealTimeInfoOfMeetingResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowRealTimeInfoOfMeetingResponse members

    /// <summary>
    /// 被邀请与会者信息，包括预约会议时邀请的与会者和会中主持人邀请的与会者，已经加入会议的和未加入会议的都返回。
    /// </summary>

    std::vector<RealTimeAttendee>& getAttendees();
    bool attendeesIsSet() const;
    void unsetattendees();
    void setAttendees(const std::vector<RealTimeAttendee>& value);

    /// <summary>
    /// 在线与会者列表信息，包括已加入会议、被邀请正在呼叫中、正在加入会议的与会者列表等。 &gt; * 同一个帐号用不同类型终端（手机端或者PC端等）加入会议时，是不同的在线与会者 &gt; * 未加入或者已离会与会者，不在在线与会者列表中 
    /// </summary>

    std::vector<RealTimeParticipant>& getParticipants();
    bool participantsIsSet() const;
    void unsetparticipants();
    void setParticipants(const std::vector<RealTimeParticipant>& value);

    /// <summary>
    /// 
    /// </summary>

    RealTimeConfInfo getConfInfo() const;
    bool confInfoIsSet() const;
    void unsetconfInfo();
    void setConfInfo(const RealTimeConfInfo& value);


protected:
    std::vector<RealTimeAttendee> attendees_;
    bool attendeesIsSet_;
    std::vector<RealTimeParticipant> participants_;
    bool participantsIsSet_;
    RealTimeConfInfo confInfo_;
    bool confInfoIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowRealTimeInfoOfMeetingResponse_H_
