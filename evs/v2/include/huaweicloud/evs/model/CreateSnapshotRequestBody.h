
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_CreateSnapshotRequestBody_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_CreateSnapshotRequestBody_H_

#include <huaweicloud/evs/EvsExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include "huaweicloud/evs/model/CreateSnapshotOption.h"

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
class HUAWEICLOUD_EVS_EXPORT  CreateSnapshotRequestBody
    : public ModelBase
{
public:
    CreateSnapshotRequestBody();
    virtual ~CreateSnapshotRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateSnapshotRequestBody members

    /// <summary>
    /// 
    /// </summary>

    CreateSnapshotOption getSnapshot() const;
    bool snapshotIsSet() const;
    void unsetsnapshot();
    void setSnapshot(const CreateSnapshotOption& value);


protected:
    CreateSnapshotOption snapshot_;
    bool snapshotIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_CreateSnapshotRequestBody_H_
