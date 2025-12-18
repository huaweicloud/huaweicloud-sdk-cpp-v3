
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_SearchQosParticipantDetailRequest_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_SearchQosParticipantDetailRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  SearchQosParticipantDetailRequest
    : public ModelBase
{
public:
    SearchQosParticipantDetailRequest();
    virtual ~SearchQosParticipantDetailRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SearchQosParticipantDetailRequest members

    /// <summary>
    /// 会议UUID。
    /// </summary>

    std::string getConfUUID() const;
    bool confUUIDIsSet() const;
    void unsetconfUUID();
    void setConfUUID(const std::string& value);

    /// <summary>
    /// 会议类别。 * online：在线会议，在召开的会议 * history：历史会议，已召开的会议
    /// </summary>

    std::string getConfType() const;
    bool confTypeIsSet() const;
    void unsetconfType();
    void setConfType(const std::string& value);

    /// <summary>
    /// 与会者标识。
    /// </summary>

    std::string getParticipantID() const;
    bool participantIDIsSet() const;
    void unsetparticipantID();
    void setParticipantID(const std::string& value);

    /// <summary>
    /// Qos类型。 - audio：音频 - video：视频 - screen：屏幕共享 - cpu：cpu
    /// </summary>

    std::string getQosType() const;
    bool qosTypeIsSet() const;
    void unsetqosType();
    void setQosType(const std::string& value);


protected:
    std::string confUUID_;
    bool confUUIDIsSet_;
    std::string confType_;
    bool confTypeIsSet_;
    std::string participantID_;
    bool participantIDIsSet_;
    std::string qosType_;
    bool qosTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    SearchQosParticipantDetailRequest& dereference_from_shared_ptr(std::shared_ptr<SearchQosParticipantDetailRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_SearchQosParticipantDetailRequest_H_
