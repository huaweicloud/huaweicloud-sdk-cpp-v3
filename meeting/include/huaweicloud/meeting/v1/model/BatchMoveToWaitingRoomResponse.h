
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_BatchMoveToWaitingRoomResponse_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_BatchMoveToWaitingRoomResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  BatchMoveToWaitingRoomResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchMoveToWaitingRoomResponse();
    virtual ~BatchMoveToWaitingRoomResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchMoveToWaitingRoomResponse members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_BatchMoveToWaitingRoomResponse_H_
