
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowRecordInfoRequest_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowRecordInfoRequest_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/meeting/v1/model/RecordInfoReq.h>

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
class HUAWEICLOUD_MEETING_V1_EXPORT  ShowRecordInfoRequest
    : public ModelBase
{
public:
    ShowRecordInfoRequest();
    virtual ~ShowRecordInfoRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowRecordInfoRequest members

    /// <summary>
    /// 
    /// </summary>

    RecordInfoReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const RecordInfoReq& value);


protected:
    RecordInfoReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowRecordInfoRequest& dereference_from_shared_ptr(std::shared_ptr<ShowRecordInfoRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowRecordInfoRequest_H_
