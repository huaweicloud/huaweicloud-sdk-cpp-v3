
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_BatchCreateSnapshotTagsRequest_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_BatchCreateSnapshotTagsRequest_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/evs/v2/model/BatchCreateResourceTagsRequestBody.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  BatchCreateSnapshotTagsRequest
    : public ModelBase
{
public:
    BatchCreateSnapshotTagsRequest();
    virtual ~BatchCreateSnapshotTagsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchCreateSnapshotTagsRequest members

    /// <summary>
    /// **参数解释** 快照ID。 **约束限制** 不涉及。 **取值范围** 不涉及。 **默认取值** 不涉及。
    /// </summary>

    std::string getSnapshotId() const;
    bool snapshotIdIsSet() const;
    void unsetsnapshotId();
    void setSnapshotId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    BatchCreateResourceTagsRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchCreateResourceTagsRequestBody& value);


protected:
    std::string snapshotId_;
    bool snapshotIdIsSet_;
    BatchCreateResourceTagsRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchCreateSnapshotTagsRequest& dereference_from_shared_ptr(std::shared_ptr<BatchCreateSnapshotTagsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_BatchCreateSnapshotTagsRequest_H_
