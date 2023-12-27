
#ifndef HUAWEICLOUD_SDK_AAD_V1_MODEL_DeleteBlackWhiteIpListResponse_H_
#define HUAWEICLOUD_SDK_AAD_V1_MODEL_DeleteBlackWhiteIpListResponse_H_


#include <huaweicloud/aad/v1/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_AAD_V1_EXPORT  DeleteBlackWhiteIpListResponse
    : public ModelBase, public HttpResponse
{
public:
    DeleteBlackWhiteIpListResponse();
    virtual ~DeleteBlackWhiteIpListResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteBlackWhiteIpListResponse members


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

#endif // HUAWEICLOUD_SDK_AAD_V1_MODEL_DeleteBlackWhiteIpListResponse_H_
