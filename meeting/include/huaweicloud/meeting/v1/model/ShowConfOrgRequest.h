
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowConfOrgRequest_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowConfOrgRequest_H_


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
class HUAWEICLOUD_MEETING_V1_EXPORT  ShowConfOrgRequest
    : public ModelBase
{
public:
    ShowConfOrgRequest();
    virtual ~ShowConfOrgRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowConfOrgRequest members

    /// <summary>
    /// 会议ID。
    /// </summary>

    std::string getConferenceID() const;
    bool conferenceIDIsSet() const;
    void unsetconferenceID();
    void setConferenceID(const std::string& value);


protected:
    std::string conferenceID_;
    bool conferenceIDIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowConfOrgRequest& dereference_from_shared_ptr(std::shared_ptr<ShowConfOrgRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowConfOrgRequest_H_
