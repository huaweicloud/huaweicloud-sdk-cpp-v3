
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_CreateSnapshotPolicyRequestBody_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_CreateSnapshotPolicyRequestBody_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/evs/v2/model/CreateSnapshotPolicy.h>

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
class HUAWEICLOUD_EVS_V2_EXPORT  CreateSnapshotPolicyRequestBody
    : public ModelBase
{
public:
    CreateSnapshotPolicyRequestBody();
    virtual ~CreateSnapshotPolicyRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateSnapshotPolicyRequestBody members

    /// <summary>
    /// 
    /// </summary>

    CreateSnapshotPolicy getSnapshotPolicy() const;
    bool snapshotPolicyIsSet() const;
    void unsetsnapshotPolicy();
    void setSnapshotPolicy(const CreateSnapshotPolicy& value);


protected:
    CreateSnapshotPolicy snapshotPolicy_;
    bool snapshotPolicyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_CreateSnapshotPolicyRequestBody_H_
