
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestMuteParticipantReqBody_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestMuteParticipantReqBody_H_


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
/// 静音与会者请求。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  RestMuteParticipantReqBody
    : public ModelBase
{
public:
    RestMuteParticipantReqBody();
    virtual ~RestMuteParticipantReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RestMuteParticipantReqBody members

    /// <summary>
    /// - 0: 取消静音 - 1: 静音
    /// </summary>

    int32_t getIsMute() const;
    bool isMuteIsSet() const;
    void unsetisMute();
    void setIsMute(int32_t value);


protected:
    int32_t isMute_;
    bool isMuteIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestMuteParticipantReqBody_H_
