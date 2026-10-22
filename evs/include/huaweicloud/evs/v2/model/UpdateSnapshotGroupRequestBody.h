
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_UpdateSnapshotGroupRequestBody_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_UpdateSnapshotGroupRequestBody_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/evs/v2/model/UpdateSnapshotGroupResponseBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  UpdateSnapshotGroupRequestBody
    : public ModelBase
{
public:
    UpdateSnapshotGroupRequestBody();
    virtual ~UpdateSnapshotGroupRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateSnapshotGroupRequestBody members

    /// <summary>
    /// 
    /// </summary>

    UpdateSnapshotGroupResponseBody getSnapshotGroup() const;
    bool snapshotGroupIsSet() const;
    void unsetsnapshotGroup();
    void setSnapshotGroup(const UpdateSnapshotGroupResponseBody& value);


protected:
    UpdateSnapshotGroupResponseBody snapshotGroup_;
    bool snapshotGroupIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_UpdateSnapshotGroupRequestBody_H_
