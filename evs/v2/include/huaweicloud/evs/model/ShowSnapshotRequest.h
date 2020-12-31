
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_ShowSnapshotRequest_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_ShowSnapshotRequest_H_

#include <huaweicloud/evs/EvsExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_EVS_EXPORT  ShowSnapshotRequest
    : public ModelBase
{
public:
    ShowSnapshotRequest();
    virtual ~ShowSnapshotRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowSnapshotRequest members

    /// <summary>
    /// 
    /// </summary>

    std::string getSnapshotId() const;
    bool snapshotIdIsSet() const;
    void unsetsnapshotId();
    void setSnapshotId(const std::string& value);


protected:
    std::string snapshotId_;
    bool snapshotIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowSnapshotRequest& dereference_from_shared_ptr(std::shared_ptr<ShowSnapshotRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_ShowSnapshotRequest_H_
