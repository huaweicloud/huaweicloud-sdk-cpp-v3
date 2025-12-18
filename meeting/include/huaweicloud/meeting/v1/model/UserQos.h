
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_UserQos_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_UserQos_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/meeting/v1/model/MediaQos.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 会场网络质量对象
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  UserQos
    : public ModelBase
{
public:
    UserQos();
    virtual ~UserQos();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UserQos members

    /// <summary>
    /// 会场ID
    /// </summary>

    std::string getParticipantID() const;
    bool participantIDIsSet() const;
    void unsetparticipantID();
    void setParticipantID(const std::string& value);

    /// <summary>
    /// 网络质量评级
    /// </summary>

    std::string getNetRate() const;
    bool netRateIsSet() const;
    void unsetnetRate();
    void setNetRate(const std::string& value);

    /// <summary>
    /// 上行总带宽(kbit/s)
    /// </summary>

    int32_t getBandWidthUp() const;
    bool bandWidthUpIsSet() const;
    void unsetbandWidthUp();
    void setBandWidthUp(int32_t value);

    /// <summary>
    /// 下行总带宽(kbit/s)
    /// </summary>

    int32_t getBandWidthDown() const;
    bool bandWidthDownIsSet() const;
    void unsetbandWidthDown();
    void setBandWidthDown(int32_t value);

    /// <summary>
    /// 上行丢包率（千分数）
    /// </summary>

    int32_t getLostPacketRateUp() const;
    bool lostPacketRateUpIsSet() const;
    void unsetlostPacketRateUp();
    void setLostPacketRateUp(int32_t value);

    /// <summary>
    /// 下行丢包率（千分数）
    /// </summary>

    int32_t getLostPacketRateDown() const;
    bool lostPacketRateDownIsSet() const;
    void unsetlostPacketRateDown();
    void setLostPacketRateDown(int32_t value);

    /// <summary>
    /// 时延(ms)
    /// </summary>

    int32_t getDelay() const;
    bool delayIsSet() const;
    void unsetdelay();
    void setDelay(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    MediaQos getVideoQos() const;
    bool videoQosIsSet() const;
    void unsetvideoQos();
    void setVideoQos(const MediaQos& value);

    /// <summary>
    /// 
    /// </summary>

    MediaQos getAudioQos() const;
    bool audioQosIsSet() const;
    void unsetaudioQos();
    void setAudioQos(const MediaQos& value);

    /// <summary>
    /// 
    /// </summary>

    MediaQos getAuxQos() const;
    bool auxQosIsSet() const;
    void unsetauxQos();
    void setAuxQos(const MediaQos& value);


protected:
    std::string participantID_;
    bool participantIDIsSet_;
    std::string netRate_;
    bool netRateIsSet_;
    int32_t bandWidthUp_;
    bool bandWidthUpIsSet_;
    int32_t bandWidthDown_;
    bool bandWidthDownIsSet_;
    int32_t lostPacketRateUp_;
    bool lostPacketRateUpIsSet_;
    int32_t lostPacketRateDown_;
    bool lostPacketRateDownIsSet_;
    int32_t delay_;
    bool delayIsSet_;
    MediaQos videoQos_;
    bool videoQosIsSet_;
    MediaQos audioQos_;
    bool audioQosIsSet_;
    MediaQos auxQos_;
    bool auxQosIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_UserQos_H_
