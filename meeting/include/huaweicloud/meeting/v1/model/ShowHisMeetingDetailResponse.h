
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowHisMeetingDetailResponse_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowHisMeetingDetailResponse_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/meeting/v1/model/PageParticipant.h>
#include <huaweicloud/meeting/v1/model/ConferenceInfo.h>

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
class HUAWEICLOUD_MEETING_V1_EXPORT  ShowHisMeetingDetailResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowHisMeetingDetailResponse();
    virtual ~ShowHisMeetingDetailResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowHisMeetingDetailResponse members

    /// <summary>
    /// 
    /// </summary>

    ConferenceInfo getConferenceData() const;
    bool conferenceDataIsSet() const;
    void unsetconferenceData();
    void setConferenceData(const ConferenceInfo& value);

    /// <summary>
    /// 
    /// </summary>

    PageParticipant getData() const;
    bool dataIsSet() const;
    void unsetdata();
    void setData(const PageParticipant& value);


protected:
    ConferenceInfo conferenceData_;
    bool conferenceDataIsSet_;
    PageParticipant data_;
    bool dataIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowHisMeetingDetailResponse_H_
