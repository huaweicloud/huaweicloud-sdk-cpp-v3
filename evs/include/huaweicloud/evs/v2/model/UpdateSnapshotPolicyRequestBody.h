
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_UpdateSnapshotPolicyRequestBody_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_UpdateSnapshotPolicyRequestBody_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/evs/v2/model/UpdateSnapshotPolicy.h>

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
class HUAWEICLOUD_EVS_V2_EXPORT  UpdateSnapshotPolicyRequestBody
    : public ModelBase
{
public:
    UpdateSnapshotPolicyRequestBody();
    virtual ~UpdateSnapshotPolicyRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateSnapshotPolicyRequestBody members

    /// <summary>
    /// 
    /// </summary>

    UpdateSnapshotPolicy getSnapshotPolicy() const;
    bool snapshotPolicyIsSet() const;
    void unsetsnapshotPolicy();
    void setSnapshotPolicy(const UpdateSnapshotPolicy& value);


protected:
    UpdateSnapshotPolicy snapshotPolicy_;
    bool snapshotPolicyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_UpdateSnapshotPolicyRequestBody_H_
