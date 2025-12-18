
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestParticipantViewReqBody_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestParticipantViewReqBody_H_


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
/// 会场选看请求。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  RestParticipantViewReqBody
    : public ModelBase
{
public:
    RestParticipantViewReqBody();
    virtual ~RestParticipantViewReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RestParticipantViewReqBody members

    /// <summary>
    /// 选看类型。 - 2: 选看会场
    /// </summary>

    int32_t getViewType() const;
    bool viewTypeIsSet() const;
    void unsetviewType();
    void setViewType(int32_t value);

    /// <summary>
    /// 被选看的与会者标识。
    /// </summary>

    std::string getParticipantID() const;
    bool participantIDIsSet() const;
    void unsetparticipantID();
    void setParticipantID(const std::string& value);


protected:
    int32_t viewType_;
    bool viewTypeIsSet_;
    std::string participantID_;
    bool participantIDIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestParticipantViewReqBody_H_
