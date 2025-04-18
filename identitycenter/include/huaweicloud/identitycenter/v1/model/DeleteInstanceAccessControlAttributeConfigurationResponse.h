
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_DeleteInstanceAccessControlAttributeConfigurationResponse_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_DeleteInstanceAccessControlAttributeConfigurationResponse_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  DeleteInstanceAccessControlAttributeConfigurationResponse
    : public ModelBase, public HttpResponse
{
public:
    DeleteInstanceAccessControlAttributeConfigurationResponse();
    virtual ~DeleteInstanceAccessControlAttributeConfigurationResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteInstanceAccessControlAttributeConfigurationResponse members


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

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_DeleteInstanceAccessControlAttributeConfigurationResponse_H_
