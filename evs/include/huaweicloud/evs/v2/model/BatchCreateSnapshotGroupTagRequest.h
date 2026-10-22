
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_BatchCreateSnapshotGroupTagRequest_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_BatchCreateSnapshotGroupTagRequest_H_


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
class HUAWEICLOUD_EVS_V2_EXPORT  BatchCreateSnapshotGroupTagRequest
    : public ModelBase
{
public:
    BatchCreateSnapshotGroupTagRequest();
    virtual ~BatchCreateSnapshotGroupTagRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchCreateSnapshotGroupTagRequest members

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

    BatchCreateResourceTagsRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchCreateResourceTagsRequestBody& value);


protected:
    std::string snapshotGroupId_;
    bool snapshotGroupIdIsSet_;
    BatchCreateResourceTagsRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchCreateSnapshotGroupTagRequest& dereference_from_shared_ptr(std::shared_ptr<BatchCreateSnapshotGroupTagRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_BatchCreateSnapshotGroupTagRequest_H_
