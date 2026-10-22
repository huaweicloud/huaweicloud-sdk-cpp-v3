
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_ShowSnapshotGroupResponse_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_ShowSnapshotGroupResponse_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/evs/v2/model/SnapshotGroupDetail.h>

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
class HUAWEICLOUD_EVS_V2_EXPORT  ShowSnapshotGroupResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowSnapshotGroupResponse();
    virtual ~ShowSnapshotGroupResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowSnapshotGroupResponse members

    /// <summary>
    /// 
    /// </summary>

    SnapshotGroupDetail getSnapshotGroup() const;
    bool snapshotGroupIsSet() const;
    void unsetsnapshotGroup();
    void setSnapshotGroup(const SnapshotGroupDetail& value);


protected:
    SnapshotGroupDetail snapshotGroup_;
    bool snapshotGroupIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_ShowSnapshotGroupResponse_H_
