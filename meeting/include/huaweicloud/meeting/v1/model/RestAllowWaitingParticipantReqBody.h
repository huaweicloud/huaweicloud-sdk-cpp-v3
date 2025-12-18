
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestAllowWaitingParticipantReqBody_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestAllowWaitingParticipantReqBody_H_


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
/// 
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  RestAllowWaitingParticipantReqBody
    : public ModelBase
{
public:
    RestAllowWaitingParticipantReqBody();
    virtual ~RestAllowWaitingParticipantReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RestAllowWaitingParticipantReqBody members

    /// <summary>
    /// 等候室成员标志。通过监听[[会议级事件推送中的“等候室成员列表信息”](https://support.huaweicloud.com/api-meeting/meeting_21_1507.html)](tag:hws)[[会议级事件推送中的“等候室成员列表信息”](https://support.huaweicloud.com/intl/zh-cn/api-meeting/meeting_21_1507.html)](tag:hk)事件获得。 
    /// </summary>

    std::string getParticipantID() const;
    bool participantIDIsSet() const;
    void unsetparticipantID();
    void setParticipantID(const std::string& value);

    /// <summary>
    /// 允许所有等候者入会。 * false：指定等候者 * true：所有等候者入会 
    /// </summary>

    bool isAllowAll() const;
    bool allowAllIsSet() const;
    void unsetallowAll();
    void setAllowAll(bool value);


protected:
    std::string participantID_;
    bool participantIDIsSet_;
    bool allowAll_;
    bool allowAllIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestAllowWaitingParticipantReqBody_H_
