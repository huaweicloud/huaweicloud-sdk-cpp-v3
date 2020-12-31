
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_CreateSnapshotResponse_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_CreateSnapshotResponse_H_

#include <huaweicloud/evs/EvsExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include "huaweicloud/evs/model/SnapshotDetails.h"

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
class HUAWEICLOUD_EVS_EXPORT  CreateSnapshotResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateSnapshotResponse();
    virtual ~CreateSnapshotResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateSnapshotResponse members

    /// <summary>
    /// 
    /// </summary>

    SnapshotDetails getSnapshot() const;
    bool snapshotIsSet() const;
    void unsetsnapshot();
    void setSnapshot(const SnapshotDetails& value);


protected:
    SnapshotDetails snapshot_;
    bool snapshotIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_CreateSnapshotResponse_H_
