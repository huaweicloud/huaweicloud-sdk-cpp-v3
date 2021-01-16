
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_RollbackSnapshotRequestBody_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_RollbackSnapshotRequestBody_H_

#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/evs/v2/model/RollbackSnapshotOption.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// This is a auto create Body Object
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  RollbackSnapshotRequestBody
    : public ModelBase
{
public:
    RollbackSnapshotRequestBody();
    virtual ~RollbackSnapshotRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// RollbackSnapshotRequestBody members

    /// <summary>
    /// 
    /// </summary>

    RollbackSnapshotOption getRollback() const;
    bool rollbackIsSet() const;
    void unsetrollback();
    void setRollback(const RollbackSnapshotOption& value);


protected:
    RollbackSnapshotOption rollback_;
    bool rollbackIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_RollbackSnapshotRequestBody_H_
