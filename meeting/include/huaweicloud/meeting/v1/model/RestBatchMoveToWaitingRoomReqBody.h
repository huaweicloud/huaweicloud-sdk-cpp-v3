
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestBatchMoveToWaitingRoomReqBody_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestBatchMoveToWaitingRoomReqBody_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 移动到等候室请求类
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  RestBatchMoveToWaitingRoomReqBody
    : public ModelBase
{
public:
    RestBatchMoveToWaitingRoomReqBody();
    virtual ~RestBatchMoveToWaitingRoomReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RestBatchMoveToWaitingRoomReqBody members

    /// <summary>
    /// 需要移入等候室的全部与会者pid
    /// </summary>

    std::vector<std::string>& getBatchParticipants();
    bool batchParticipantsIsSet() const;
    void unsetbatchParticipants();
    void setBatchParticipants(const std::vector<std::string>& value);


protected:
    std::vector<std::string> batchParticipants_;
    bool batchParticipantsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestBatchMoveToWaitingRoomReqBody_H_
