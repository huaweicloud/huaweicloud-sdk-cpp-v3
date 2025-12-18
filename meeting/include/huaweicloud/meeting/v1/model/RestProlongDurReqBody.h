
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestProlongDurReqBody_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestProlongDurReqBody_H_


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
/// 延长会议请求。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  RestProlongDurReqBody
    : public ModelBase
{
public:
    RestProlongDurReqBody();
    virtual ~RestProlongDurReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RestProlongDurReqBody members

    /// <summary>
    /// - 0: 手动延长 - 1: 自动延长（未携带延长时间时，默认每次延长15分钟）
    /// </summary>

    int32_t getAuto() const;
    bool autoIsSet() const;
    void unsetauto();
    void setAuto(int32_t value);

    /// <summary>
    /// 延长时间，单位为分钟。 默认值：15
    /// </summary>

    int32_t getDuration() const;
    bool durationIsSet() const;
    void unsetduration();
    void setDuration(int32_t value);


protected:
    int32_t auto_;
    bool autoIsSet_;
    int32_t duration_;
    bool durationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_RestProlongDurReqBody_H_
