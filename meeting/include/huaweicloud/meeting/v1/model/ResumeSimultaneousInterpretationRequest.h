
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_ResumeSimultaneousInterpretationRequest_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_ResumeSimultaneousInterpretationRequest_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/meeting/v1/model/RestSimultaneousInterpretationBody.h>

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
class HUAWEICLOUD_MEETING_V1_EXPORT  ResumeSimultaneousInterpretationRequest
    : public ModelBase
{
public:
    ResumeSimultaneousInterpretationRequest();
    virtual ~ResumeSimultaneousInterpretationRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ResumeSimultaneousInterpretationRequest members

    /// <summary>
    /// 会议ID。
    /// </summary>

    std::string getConferenceID() const;
    bool conferenceIDIsSet() const;
    void unsetconferenceID();
    void setConferenceID(const std::string& value);

    /// <summary>
    /// 会控Token，通过[[获取会控token](https://support.huaweicloud.com/api-meeting/meeting_21_0027.html)](tag:hws)[[获取会控token](https://support.huaweicloud.com/intl/zh-cn/api-meeting/meeting_21_0027.html)](tag:hk)接口获得。
    /// </summary>

    std::string getXConferenceAuthorization() const;
    bool xConferenceAuthorizationIsSet() const;
    void unsetxConferenceAuthorization();
    void setXConferenceAuthorization(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    RestSimultaneousInterpretationBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const RestSimultaneousInterpretationBody& value);


protected:
    std::string conferenceID_;
    bool conferenceIDIsSet_;
    std::string xConferenceAuthorization_;
    bool xConferenceAuthorizationIsSet_;
    RestSimultaneousInterpretationBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ResumeSimultaneousInterpretationRequest& dereference_from_shared_ptr(std::shared_ptr<ResumeSimultaneousInterpretationRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_ResumeSimultaneousInterpretationRequest_H_
