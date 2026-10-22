
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_CreateStandardSnapshotRequest_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_CreateStandardSnapshotRequest_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/evs/v2/model/CreateStandardSnapshotRequestBody.h>

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
class HUAWEICLOUD_EVS_V2_EXPORT  CreateStandardSnapshotRequest
    : public ModelBase
{
public:
    CreateStandardSnapshotRequest();
    virtual ~CreateStandardSnapshotRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateStandardSnapshotRequest members

    /// <summary>
    /// 
    /// </summary>

    CreateStandardSnapshotRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateStandardSnapshotRequestBody& value);


protected:
    CreateStandardSnapshotRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateStandardSnapshotRequest& dereference_from_shared_ptr(std::shared_ptr<CreateStandardSnapshotRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_CreateStandardSnapshotRequest_H_
