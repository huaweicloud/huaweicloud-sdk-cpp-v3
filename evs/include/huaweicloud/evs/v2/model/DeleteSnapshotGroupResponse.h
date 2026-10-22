
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_DeleteSnapshotGroupResponse_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_DeleteSnapshotGroupResponse_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  DeleteSnapshotGroupResponse
    : public ModelBase, public HttpResponse
{
public:
    DeleteSnapshotGroupResponse();
    virtual ~DeleteSnapshotGroupResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteSnapshotGroupResponse members

    /// <summary>
    /// **参数解释** 任务ID。 如果需要查询job的状态，请参考：[\&quot;[查询job的状态](https://support.huaweicloud.com/api-evs/evs_04_0054.html)\&quot;](tag:hws)[\&quot;[查询job的状态](https://support.huaweicloud.com/intl/zh-cn/api-evs/evs_04_0054.html)\&quot;](tag:hws_hk)。  **取值范围**  不涉及。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_DeleteSnapshotGroupResponse_H_
