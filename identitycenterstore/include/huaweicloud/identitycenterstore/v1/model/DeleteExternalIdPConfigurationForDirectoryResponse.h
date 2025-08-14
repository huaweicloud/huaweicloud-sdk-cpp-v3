
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_DeleteExternalIdPConfigurationForDirectoryResponse_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_DeleteExternalIdPConfigurationForDirectoryResponse_H_


#include <huaweicloud/identitycenterstore/v1/IdentityCenterStoreExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IDENTITYCENTERSTORE_V1_EXPORT  DeleteExternalIdPConfigurationForDirectoryResponse
    : public ModelBase, public HttpResponse
{
public:
    DeleteExternalIdPConfigurationForDirectoryResponse();
    virtual ~DeleteExternalIdPConfigurationForDirectoryResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteExternalIdPConfigurationForDirectoryResponse members


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

#endif // HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_DeleteExternalIdPConfigurationForDirectoryResponse_H_
