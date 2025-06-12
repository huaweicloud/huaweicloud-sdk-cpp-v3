
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ReportLiveEventReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ReportLiveEventReq_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/LiveEvent.h>
#include <huaweicloud/metastudio/v1/model/ReviewConfig.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ReportLiveEventReq
    : public ModelBase
{
public:
    ReportLiveEventReq();
    virtual ~ReportLiveEventReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReportLiveEventReq members

    /// <summary>
    /// **参数解释**： 事件条目数。
    /// </summary>

    int32_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int32_t value);

    /// <summary>
    /// 事件内容。
    /// </summary>

    std::vector<LiveEvent>& getEvents();
    bool eventsIsSet() const;
    void unsetevents();
    void setEvents(const std::vector<LiveEvent>& value);

    /// <summary>
    /// 
    /// </summary>

    ReviewConfig getReviewConfig() const;
    bool reviewConfigIsSet() const;
    void unsetreviewConfig();
    void setReviewConfig(const ReviewConfig& value);


protected:
    int32_t total_;
    bool totalIsSet_;
    std::vector<LiveEvent> events_;
    bool eventsIsSet_;
    ReviewConfig reviewConfig_;
    bool reviewConfigIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ReportLiveEventReq_H_
