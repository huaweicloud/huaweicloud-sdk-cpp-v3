
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_RollbackSnapshotRequestBodyV5_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_RollbackSnapshotRequestBodyV5_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/evs/v2/model/RollbackSnapshotRequestBodyNew.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 回滚快照请求体。
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  RollbackSnapshotRequestBodyV5
    : public ModelBase
{
public:
    RollbackSnapshotRequestBodyV5();
    virtual ~RollbackSnapshotRequestBodyV5();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RollbackSnapshotRequestBodyV5 members

    /// <summary>
    /// 
    /// </summary>

    RollbackSnapshotRequestBodyNew getRollback() const;
    bool rollbackIsSet() const;
    void unsetrollback();
    void setRollback(const RollbackSnapshotRequestBodyNew& value);


protected:
    RollbackSnapshotRequestBodyNew rollback_;
    bool rollbackIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_RollbackSnapshotRequestBodyV5_H_
