
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestInviteReqBody_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestInviteReqBody_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/meeting/v1/model/Attendee.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 邀请与会者请求。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  RestInviteReqBody
    : public ModelBase
{
public:
    RestInviteReqBody();
    virtual ~RestInviteReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RestInviteReqBody members

    /// <summary>
    /// 邀请的与会者列表。
    /// </summary>

    std::vector<Attendee>& getAttendees();
    bool attendeesIsSet() const;
    void unsetattendees();
    void setAttendees(const std::vector<Attendee>& value);


protected:
    std::vector<Attendee> attendees_;
    bool attendeesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestInviteReqBody_H_
