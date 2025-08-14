
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_CreateApplicationInstanceResponse_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_CreateApplicationInstanceResponse_H_


#include <huaweicloud/identitycenter/v1/IdentityCenterExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/identitycenter/v1/model/ApplicationInstanceDto.h>

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
class HUAWEICLOUD_IDENTITYCENTER_V1_EXPORT  CreateApplicationInstanceResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateApplicationInstanceResponse();
    virtual ~CreateApplicationInstanceResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateApplicationInstanceResponse members

    /// <summary>
    /// 
    /// </summary>

    ApplicationInstanceDto getApplicationInstance() const;
    bool applicationInstanceIsSet() const;
    void unsetapplicationInstance();
    void setApplicationInstance(const ApplicationInstanceDto& value);


protected:
    ApplicationInstanceDto applicationInstance_;
    bool applicationInstanceIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTER_V1_MODEL_CreateApplicationInstanceResponse_H_
