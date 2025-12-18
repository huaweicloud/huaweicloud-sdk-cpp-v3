
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_SearchQosParticipantDetailResponse_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_SearchQosParticipantDetailResponse_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/meeting/v1/model/QosInfo.h>
#include <huaweicloud/meeting/v1/model/QosParticipantInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  SearchQosParticipantDetailResponse
    : public ModelBase, public HttpResponse
{
public:
    SearchQosParticipantDetailResponse();
    virtual ~SearchQosParticipantDetailResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SearchQosParticipantDetailResponse members

    /// <summary>
    /// 
    /// </summary>

    QosParticipantInfo getUser() const;
    bool userIsSet() const;
    void unsetuser();
    void setUser(const QosParticipantInfo& value);

    /// <summary>
    /// 
    /// </summary>

    QosInfo getQos() const;
    bool qosIsSet() const;
    void unsetqos();
    void setQos(const QosInfo& value);


protected:
    QosParticipantInfo user_;
    bool userIsSet_;
    QosInfo qos_;
    bool qosIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_SearchQosParticipantDetailResponse_H_
