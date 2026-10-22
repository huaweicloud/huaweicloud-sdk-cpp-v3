
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_CreateSnapshotGroupRequestBody_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_CreateSnapshotGroupRequestBody_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/evs/v2/model/SnapshotGroup.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建快照一致性组的请求体。
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  CreateSnapshotGroupRequestBody
    : public ModelBase
{
public:
    CreateSnapshotGroupRequestBody();
    virtual ~CreateSnapshotGroupRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateSnapshotGroupRequestBody members

    /// <summary>
    /// 
    /// </summary>

    SnapshotGroup getSnapshotGroup() const;
    bool snapshotGroupIsSet() const;
    void unsetsnapshotGroup();
    void setSnapshotGroup(const SnapshotGroup& value);


protected:
    SnapshotGroup snapshotGroup_;
    bool snapshotGroupIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_CreateSnapshotGroupRequestBody_H_
