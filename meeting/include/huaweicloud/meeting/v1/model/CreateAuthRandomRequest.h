
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_CreateAuthRandomRequest_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_CreateAuthRandomRequest_H_


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
class HUAWEICLOUD_MEETING_V1_EXPORT  CreateAuthRandomRequest
    : public ModelBase
{
public:
    CreateAuthRandomRequest();
    virtual ~CreateAuthRandomRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateAuthRandomRequest members

    /// <summary>
    /// 会议ID
    /// </summary>

    std::string getConfId() const;
    bool confIdIsSet() const;
    void unsetconfId();
    void setConfId(const std::string& value);

    /// <summary>
    /// 0-不支持来宾会前等待页能力（默认）、1-支持来宾会前等待页能力
    /// </summary>

    int32_t getGuestWaiting() const;
    bool guestWaitingIsSet() const;
    void unsetguestWaiting();
    void setGuestWaiting(int32_t value);

    /// <summary>
    /// 会议密码
    /// </summary>

    std::string getXPassword() const;
    bool xPasswordIsSet() const;
    void unsetxPassword();
    void setXPassword(const std::string& value);


protected:
    std::string confId_;
    bool confIdIsSet_;
    int32_t guestWaiting_;
    bool guestWaitingIsSet_;
    std::string xPassword_;
    bool xPasswordIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateAuthRandomRequest& dereference_from_shared_ptr(std::shared_ptr<CreateAuthRandomRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_CreateAuthRandomRequest_H_
