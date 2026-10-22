
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_UpdateSnapshotRequestBodyV5_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_UpdateSnapshotRequestBodyV5_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/evs/v2/model/CinderUpdateSnapshotOptionV5.h>

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
class HUAWEICLOUD_EVS_V2_EXPORT  UpdateSnapshotRequestBodyV5
    : public ModelBase
{
public:
    UpdateSnapshotRequestBodyV5();
    virtual ~UpdateSnapshotRequestBodyV5();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateSnapshotRequestBodyV5 members

    /// <summary>
    /// 
    /// </summary>

    CinderUpdateSnapshotOptionV5 getSnapshot() const;
    bool snapshotIsSet() const;
    void unsetsnapshot();
    void setSnapshot(const CinderUpdateSnapshotOptionV5& value);


protected:
    CinderUpdateSnapshotOptionV5 snapshot_;
    bool snapshotIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_UpdateSnapshotRequestBodyV5_H_
