
#ifndef HUAWEICLOUD_SDK_GA_V1_MODEL_CreateEndpointRequestBody_H_
#define HUAWEICLOUD_SDK_GA_V1_MODEL_CreateEndpointRequestBody_H_


#include <huaweicloud/ga/v1/GaExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ga/v1/model/CreateEndpointOption.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// create Endpoint request
/// </summary>
class HUAWEICLOUD_GA_V1_EXPORT  CreateEndpointRequestBody
    : public ModelBase
{
public:
    CreateEndpointRequestBody();
    virtual ~CreateEndpointRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateEndpointRequestBody members

    /// <summary>
    /// 
    /// </summary>

    CreateEndpointOption getEndpoint() const;
    bool endpointIsSet() const;
    void unsetendpoint();
    void setEndpoint(const CreateEndpointOption& value);


protected:
    CreateEndpointOption endpoint_;
    bool endpointIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GA_V1_MODEL_CreateEndpointRequestBody_H_
