
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_CreateAnonymousAuthRandomRequest_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_CreateAnonymousAuthRandomRequest_H_


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
class HUAWEICLOUD_MEETING_V1_EXPORT  CreateAnonymousAuthRandomRequest
    : public ModelBase
{
public:
    CreateAnonymousAuthRandomRequest();
    virtual ~CreateAnonymousAuthRandomRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateAnonymousAuthRandomRequest members

    /// <summary>
    /// 会议ID。
    /// </summary>

    std::string getConferenceID() const;
    bool conferenceIDIsSet() const;
    void unsetconferenceID();
    void setConferenceID(const std::string& value);

    /// <summary>
    /// 会议密码。
    /// </summary>

    std::string getXPassword() const;
    bool xPasswordIsSet() const;
    void unsetxPassword();
    void setXPassword(const std::string& value);


protected:
    std::string conferenceID_;
    bool conferenceIDIsSet_;
    std::string xPassword_;
    bool xPasswordIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateAnonymousAuthRandomRequest& dereference_from_shared_ptr(std::shared_ptr<CreateAnonymousAuthRandomRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_CreateAnonymousAuthRandomRequest_H_
