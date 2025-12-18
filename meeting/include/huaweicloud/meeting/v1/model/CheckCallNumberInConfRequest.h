
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_CheckCallNumberInConfRequest_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_CheckCallNumberInConfRequest_H_


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
class HUAWEICLOUD_MEETING_V1_EXPORT  CheckCallNumberInConfRequest
    : public ModelBase
{
public:
    CheckCallNumberInConfRequest();
    virtual ~CheckCallNumberInConfRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CheckCallNumberInConfRequest members

    /// <summary>
    /// 呼叫号码
    /// </summary>

    std::string getCallNumber() const;
    bool callNumberIsSet() const;
    void unsetcallNumber();
    void setCallNumber(const std::string& value);


protected:
    std::string callNumber_;
    bool callNumberIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CheckCallNumberInConfRequest& dereference_from_shared_ptr(std::shared_ptr<CheckCallNumberInConfRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_CheckCallNumberInConfRequest_H_
