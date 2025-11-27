
#ifndef HUAWEICLOUD_SDK_GA_V1_MODEL_EndpointType_H_
#define HUAWEICLOUD_SDK_GA_V1_MODEL_EndpointType_H_


#include <huaweicloud/ga/v1/GaExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
class HUAWEICLOUD_GA_V1_EXPORT  EndpointType
: public ModelBase
{
public:
    EndpointType();
    virtual ~EndpointType();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    enum class eEndpointType 
    {
        EndpointType_EIP,
        EndpointType_ECS,
        EndpointType_ELB,
        EndpointType_CUSTOM_IP,
        EndpointType_CUSTOM_DOMAIN_NAME,
        EndpointType_CUSTOM_EIP,
    };

    eEndpointType getValue() const;
    void setValue(eEndpointType const value);

protected:
    eEndpointType value_;

};

}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GA_V1_MODEL_EndpointType_H_
