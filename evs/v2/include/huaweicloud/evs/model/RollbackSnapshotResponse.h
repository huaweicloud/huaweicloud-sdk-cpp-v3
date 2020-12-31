
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_RollbackSnapshotResponse_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_RollbackSnapshotResponse_H_

#include <huaweicloud/evs/EvsExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include "huaweicloud/evs/model/RollbackInfo.h"

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
class HUAWEICLOUD_EVS_EXPORT  RollbackSnapshotResponse
    : public ModelBase, public HttpResponse
{
public:
    RollbackSnapshotResponse();
    virtual ~RollbackSnapshotResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// RollbackSnapshotResponse members

    /// <summary>
    /// 
    /// </summary>

    RollbackInfo getRollback() const;
    bool rollbackIsSet() const;
    void unsetrollback();
    void setRollback(const RollbackInfo& value);


protected:
    RollbackInfo rollback_;
    bool rollbackIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_RollbackSnapshotResponse_H_
