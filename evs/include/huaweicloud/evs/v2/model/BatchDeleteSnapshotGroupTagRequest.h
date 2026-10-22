
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_BatchDeleteSnapshotGroupTagRequest_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_BatchDeleteSnapshotGroupTagRequest_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/evs/v2/model/BatchDeleteResourceTagsRequestBody.h>

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
class HUAWEICLOUD_EVS_V2_EXPORT  BatchDeleteSnapshotGroupTagRequest
    : public ModelBase
{
public:
    BatchDeleteSnapshotGroupTagRequest();
    virtual ~BatchDeleteSnapshotGroupTagRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeleteSnapshotGroupTagRequest members

    /// <summary>
    /// **参数解释** 快照组ID。 **约束限制** 不涉及。 **取值范围** 不涉及。 **默认取值** 不涉及。
    /// </summary>

    std::string getSnapshotGroupId() const;
    bool snapshotGroupIdIsSet() const;
    void unsetsnapshotGroupId();
    void setSnapshotGroupId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    BatchDeleteResourceTagsRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchDeleteResourceTagsRequestBody& value);


protected:
    std::string snapshotGroupId_;
    bool snapshotGroupIdIsSet_;
    BatchDeleteResourceTagsRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchDeleteSnapshotGroupTagRequest& dereference_from_shared_ptr(std::shared_ptr<BatchDeleteSnapshotGroupTagRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_BatchDeleteSnapshotGroupTagRequest_H_
