
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_DeleteTranscodingTaskResponse_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_DeleteTranscodingTaskResponse_H_

#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MPC_V1_EXPORT  DeleteTranscodingTaskResponse
    : public ModelBase, public HttpResponse
{
public:
    DeleteTranscodingTaskResponse();
    virtual ~DeleteTranscodingTaskResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DeleteTranscodingTaskResponse members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_DeleteTranscodingTaskResponse_H_
