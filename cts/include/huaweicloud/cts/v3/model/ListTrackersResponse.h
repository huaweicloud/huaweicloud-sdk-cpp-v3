
#ifndef HUAWEICLOUD_SDK_CTS_V3_MODEL_ListTrackersResponse_H_
#define HUAWEICLOUD_SDK_CTS_V3_MODEL_ListTrackersResponse_H_


#include <huaweicloud/cts/v3/CtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cts/v3/model/TrackerResponseBody.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CTS_V3_EXPORT  ListTrackersResponse
    : public ModelBase, public HttpResponse
{
public:
    ListTrackersResponse();
    virtual ~ListTrackersResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTrackersResponse members

    /// <summary>
    /// 本次查询追踪器列表返回的追踪器数组。
    /// </summary>

    std::vector<TrackerResponseBody>& getTrackers();
    bool trackersIsSet() const;
    void unsettrackers();
    void setTrackers(const std::vector<TrackerResponseBody>& value);


protected:
    std::vector<TrackerResponseBody> trackers_;
    bool trackersIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CTS_V3_MODEL_ListTrackersResponse_H_
