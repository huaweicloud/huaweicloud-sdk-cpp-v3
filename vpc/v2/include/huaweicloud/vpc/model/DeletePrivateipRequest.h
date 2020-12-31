
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_DeletePrivateipRequest_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_DeletePrivateipRequest_H_

#include <huaweicloud/vpc/VpcExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_VPC_EXPORT  DeletePrivateipRequest
    : public ModelBase
{
public:
    DeletePrivateipRequest();
    virtual ~DeletePrivateipRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DeletePrivateipRequest members

    /// <summary>
    /// 
    /// </summary>

    std::string getPrivateipId() const;
    bool privateipIdIsSet() const;
    void unsetprivateipId();
    void setPrivateipId(const std::string& value);


protected:
    std::string privateipId_;
    bool privateipIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeletePrivateipRequest& dereference_from_shared_ptr(std::shared_ptr<DeletePrivateipRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_DeletePrivateipRequest_H_
