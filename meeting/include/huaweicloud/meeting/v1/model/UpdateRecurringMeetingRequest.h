
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_UpdateRecurringMeetingRequest_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_UpdateRecurringMeetingRequest_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/meeting/v1/model/RestScheduleConfDTO.h>
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
class HUAWEICLOUD_MEETING_V1_EXPORT  UpdateRecurringMeetingRequest
    : public ModelBase
{
public:
    UpdateRecurringMeetingRequest();
    virtual ~UpdateRecurringMeetingRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateRecurringMeetingRequest members

    /// <summary>
    /// 标识是否为第三方portal过来的请求。 &gt; 该参数将废弃，请勿使用。 
    /// </summary>

    std::string getXAuthorizationType() const;
    bool xAuthorizationTypeIsSet() const;
    void unsetxAuthorizationType();
    void setXAuthorizationType(const std::string& value);

    /// <summary>
    /// 用户的UUID。 &gt; 该参数将废弃，请勿使用。 
    /// </summary>

    std::string getUserUUID() const;
    bool userUUIDIsSet() const;
    void unsetuserUUID();
    void setUserUUID(const std::string& value);

    /// <summary>
    /// 用于区分到哪个HCSO站点鉴权。 &gt; 该参数将废弃，请勿使用。 
    /// </summary>

    std::string getXSiteId() const;
    bool xSiteIdIsSet() const;
    void unsetxSiteId();
    void setXSiteId(const std::string& value);

    /// <summary>
    /// 会议ID。
    /// </summary>

    std::string getConferenceID() const;
    bool conferenceIDIsSet() const;
    void unsetconferenceID();
    void setConferenceID(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    RestScheduleConfDTO getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const RestScheduleConfDTO& value);


protected:
    std::string xAuthorizationType_;
    bool xAuthorizationTypeIsSet_;
    std::string userUUID_;
    bool userUUIDIsSet_;
    std::string xSiteId_;
    bool xSiteIdIsSet_;
    std::string conferenceID_;
    bool conferenceIDIsSet_;
    RestScheduleConfDTO body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateRecurringMeetingRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateRecurringMeetingRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_UpdateRecurringMeetingRequest_H_
