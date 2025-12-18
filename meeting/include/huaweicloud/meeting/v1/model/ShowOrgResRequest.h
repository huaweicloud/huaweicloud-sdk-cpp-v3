
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowOrgResRequest_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowOrgResRequest_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


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
class HUAWEICLOUD_MEETING_V1_EXPORT  ShowOrgResRequest
    : public ModelBase
{
public:
    ShowOrgResRequest();
    virtual ~ShowOrgResRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowOrgResRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowOrgResRequest& dereference_from_shared_ptr(std::shared_ptr<ShowOrgResRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowOrgResRequest_H_
