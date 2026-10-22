
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_CreateSnapshotGroupRequest_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_CreateSnapshotGroupRequest_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/evs/v2/model/CreateSnapshotGroupRequestBody.h>

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
class HUAWEICLOUD_EVS_V2_EXPORT  CreateSnapshotGroupRequest
    : public ModelBase
{
public:
    CreateSnapshotGroupRequest();
    virtual ~CreateSnapshotGroupRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateSnapshotGroupRequest members

    /// <summary>
    /// 
    /// </summary>

    CreateSnapshotGroupRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateSnapshotGroupRequestBody& value);


protected:
    CreateSnapshotGroupRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateSnapshotGroupRequest& dereference_from_shared_ptr(std::shared_ptr<CreateSnapshotGroupRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_CreateSnapshotGroupRequest_H_
