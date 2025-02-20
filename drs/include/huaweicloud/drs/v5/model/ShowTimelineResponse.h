
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowTimelineResponse_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowTimelineResponse_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/TimelineInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ShowTimelineResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowTimelineResponse();
    virtual ~ShowTimelineResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowTimelineResponse members

    /// <summary>
    /// 总数。
    /// </summary>

    int64_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int64_t value);

    /// <summary>
    /// 时间轴列表。
    /// </summary>

    std::vector<TimelineInfo>& getTimelines();
    bool timelinesIsSet() const;
    void unsettimelines();
    void setTimelines(const std::vector<TimelineInfo>& value);


protected:
    int64_t count_;
    bool countIsSet_;
    std::vector<TimelineInfo> timelines_;
    bool timelinesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowTimelineResponse_H_
