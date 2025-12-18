
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_CancelRecurringSubMeetingRequest_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_CancelRecurringSubMeetingRequest_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/meeting/v1/model/RestCancelSingleRecordCycleConfListReqBody.h>
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
class HUAWEICLOUD_MEETING_V1_EXPORT  CancelRecurringSubMeetingRequest
    : public ModelBase
{
public:
    CancelRecurringSubMeetingRequest();
    virtual ~CancelRecurringSubMeetingRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CancelRecurringSubMeetingRequest members

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
    /// 取消会议操作类型。默认已召开的会议不能取消。 * 1：需要结束正在召开的会议 
    /// </summary>

    int32_t getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    RestCancelSingleRecordCycleConfListReqBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const RestCancelSingleRecordCycleConfListReqBody& value);


protected:
    std::string xAuthorizationType_;
    bool xAuthorizationTypeIsSet_;
    std::string userUUID_;
    bool userUUIDIsSet_;
    std::string xSiteId_;
    bool xSiteIdIsSet_;
    std::string conferenceID_;
    bool conferenceIDIsSet_;
    int32_t type_;
    bool typeIsSet_;
    RestCancelSingleRecordCycleConfListReqBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CancelRecurringSubMeetingRequest& dereference_from_shared_ptr(std::shared_ptr<CancelRecurringSubMeetingRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_CancelRecurringSubMeetingRequest_H_
