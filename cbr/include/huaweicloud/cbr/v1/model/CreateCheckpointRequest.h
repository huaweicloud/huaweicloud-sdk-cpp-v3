
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_CreateCheckpointRequest_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_CreateCheckpointRequest_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/VaultBackupReq.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  CreateCheckpointRequest
    : public ModelBase
{
public:
    CreateCheckpointRequest();
    virtual ~CreateCheckpointRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateCheckpointRequest members

    /// <summary>
    /// 
    /// </summary>

    VaultBackupReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const VaultBackupReq& value);


protected:
    VaultBackupReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateCheckpointRequest& dereference_from_shared_ptr(std::shared_ptr<CreateCheckpointRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_CreateCheckpointRequest_H_
