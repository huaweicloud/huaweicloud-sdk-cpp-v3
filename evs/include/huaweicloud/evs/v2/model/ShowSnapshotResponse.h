
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_ShowSnapshotResponse_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_ShowSnapshotResponse_H_

#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/evs/v2/model/SnapshotDetails.h>

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
class HUAWEICLOUD_EVS_V2_EXPORT  ShowSnapshotResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowSnapshotResponse();
    virtual ~ShowSnapshotResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowSnapshotResponse members

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

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_ShowSnapshotResponse_H_
