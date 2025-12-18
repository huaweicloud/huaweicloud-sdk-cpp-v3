
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestSetAttendeeLanChannelBody_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestSetAttendeeLanChannelBody_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 传译员信息
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  RestSetAttendeeLanChannelBody
    : public ModelBase
{
public:
    RestSetAttendeeLanChannelBody();
    virtual ~RestSetAttendeeLanChannelBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RestSetAttendeeLanChannelBody members

    /// <summary>
    /// 会场标识列表。
    /// </summary>

    std::vector<std::string>& getParticipantIDs();
    bool participantIDsIsSet() const;
    void unsetparticipantIDs();
    void setParticipantIDs(const std::vector<std::string>& value);

    /// <summary>
    /// 与会者收听的语言频道，普通与会者听与说一致。
    /// </summary>

    std::string getListenLanChannel() const;
    bool listenLanChannelIsSet() const;
    void unsetlistenLanChannel();
    void setListenLanChannel(const std::string& value);

    /// <summary>
    /// 与会者发言的语言频道，普通与会者听与说一致。
    /// </summary>

    std::string getSpeakLanChannel() const;
    bool speakLanChannelIsSet() const;
    void unsetspeakLanChannel();
    void setSpeakLanChannel(const std::string& value);

    /// <summary>
    /// 是否包含原声，0：不包含，1：包含。
    /// </summary>

    int32_t getIncludeOriginalVoice() const;
    bool includeOriginalVoiceIsSet() const;
    void unsetincludeOriginalVoice();
    void setIncludeOriginalVoice(int32_t value);


protected:
    std::vector<std::string> participantIDs_;
    bool participantIDsIsSet_;
    std::string listenLanChannel_;
    bool listenLanChannelIsSet_;
    std::string speakLanChannel_;
    bool speakLanChannelIsSet_;
    int32_t includeOriginalVoice_;
    bool includeOriginalVoiceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestSetAttendeeLanChannelBody_H_
