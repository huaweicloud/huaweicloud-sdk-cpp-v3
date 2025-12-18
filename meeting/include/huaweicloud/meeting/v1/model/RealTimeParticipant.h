
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_RealTimeParticipant_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_RealTimeParticipant_H_


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
/// 在线会场信息。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  RealTimeParticipant
    : public ModelBase
{
public:
    RealTimeParticipant();
    virtual ~RealTimeParticipant();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RealTimeParticipant members

    /// <summary>
    /// 与会者标识。
    /// </summary>

    std::string getPid() const;
    bool pidIsSet() const;
    void unsetpid();
    void setPid(const std::string& value);

    /// <summary>
    /// 与会者名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 与会者号码。
    /// </summary>

    std::string getPhone() const;
    bool phoneIsSet() const;
    void unsetphone();
    void setPhone(const std::string& value);

    /// <summary>
    /// 用户状态。 - 0: 会议中 - 1: 正在呼叫 - 2: 正在加入会议 &gt; 若会场未入会或已离会，则不会显示于在线会场列表。
    /// </summary>

    int32_t getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(int32_t value);

    /// <summary>
    /// 音视频能力。 - 0: 音频 - 1: 视频
    /// </summary>

    int32_t getVideo() const;
    bool videoIsSet() const;
    void unsetvideo();
    void setVideo(int32_t value);

    /// <summary>
    /// 麦克风状态。 - 0: 麦克风打开 - 1: 麦克风关闭
    /// </summary>

    int32_t getMute() const;
    bool muteIsSet() const;
    void unsetmute();
    void setMute(int32_t value);

    /// <summary>
    /// 与会者举手状态。 - 0: 未举手 - 1: 举手
    /// </summary>

    int32_t getHand() const;
    bool handIsSet() const;
    void unsethand();
    void setHand(int32_t value);


protected:
    std::string pid_;
    bool pidIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string phone_;
    bool phoneIsSet_;
    int32_t state_;
    bool stateIsSet_;
    int32_t video_;
    bool videoIsSet_;
    int32_t mute_;
    bool muteIsSet_;
    int32_t hand_;
    bool handIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_RealTimeParticipant_H_
