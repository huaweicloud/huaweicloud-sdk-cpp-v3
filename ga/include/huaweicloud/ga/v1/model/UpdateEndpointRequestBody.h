
#ifndef HUAWEICLOUD_SDK_GA_V1_MODEL_UpdateEndpointRequestBody_H_
#define HUAWEICLOUD_SDK_GA_V1_MODEL_UpdateEndpointRequestBody_H_


#include <huaweicloud/ga/v1/GaExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ga/v1/model/UpdateEndpointOption.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// update Endpoint request
/// </summary>
class HUAWEICLOUD_GA_V1_EXPORT  UpdateEndpointRequestBody
    : public ModelBase
{
public:
    UpdateEndpointRequestBody();
    virtual ~UpdateEndpointRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateEndpointRequestBody members

    /// <summary>
    /// 
    /// </summary>

    UpdateEndpointOption getEndpoint() const;
    bool endpointIsSet() const;
    void unsetendpoint();
    void setEndpoint(const UpdateEndpointOption& value);


protected:
    UpdateEndpointOption endpoint_;
    bool endpointIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GA_V1_MODEL_UpdateEndpointRequestBody_H_
