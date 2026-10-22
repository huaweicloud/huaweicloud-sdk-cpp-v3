
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_CreateAutoSnapshotPolicyResponse_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_CreateAutoSnapshotPolicyResponse_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/evs/v2/model/GetSnapshotPolicy.h>

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
class HUAWEICLOUD_EVS_V2_EXPORT  CreateAutoSnapshotPolicyResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateAutoSnapshotPolicyResponse();
    virtual ~CreateAutoSnapshotPolicyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateAutoSnapshotPolicyResponse members

    /// <summary>
    /// 
    /// </summary>

    GetSnapshotPolicy getSnapshotPolicy() const;
    bool snapshotPolicyIsSet() const;
    void unsetsnapshotPolicy();
    void setSnapshotPolicy(const GetSnapshotPolicy& value);


protected:
    GetSnapshotPolicy snapshotPolicy_;
    bool snapshotPolicyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_CreateAutoSnapshotPolicyResponse_H_
