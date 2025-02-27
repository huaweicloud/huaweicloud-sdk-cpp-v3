
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_CreateScheduleRecordTasksRequest_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_CreateScheduleRecordTasksRequest_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/live/v1/model/ScheduleRecordTasksReq.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  CreateScheduleRecordTasksRequest
    : public ModelBase
{
public:
    CreateScheduleRecordTasksRequest();
    virtual ~CreateScheduleRecordTasksRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateScheduleRecordTasksRequest members

    /// <summary>
    /// 
    /// </summary>

    ScheduleRecordTasksReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ScheduleRecordTasksReq& value);


protected:
    ScheduleRecordTasksReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateScheduleRecordTasksRequest& dereference_from_shared_ptr(std::shared_ptr<CreateScheduleRecordTasksRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_CreateScheduleRecordTasksRequest_H_
