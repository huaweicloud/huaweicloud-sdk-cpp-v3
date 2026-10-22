
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_CreateStandardSnapshotRequestBody_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_CreateStandardSnapshotRequestBody_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/evs/v2/model/CreateStandardSnapshot.h>

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
class HUAWEICLOUD_EVS_V2_EXPORT  CreateStandardSnapshotRequestBody
    : public ModelBase
{
public:
    CreateStandardSnapshotRequestBody();
    virtual ~CreateStandardSnapshotRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateStandardSnapshotRequestBody members

    /// <summary>
    /// 
    /// </summary>

    CreateStandardSnapshot getSnapshot() const;
    bool snapshotIsSet() const;
    void unsetsnapshot();
    void setSnapshot(const CreateStandardSnapshot& value);


protected:
    CreateStandardSnapshot snapshot_;
    bool snapshotIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_CreateStandardSnapshotRequestBody_H_
