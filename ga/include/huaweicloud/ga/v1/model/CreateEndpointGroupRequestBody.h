
#ifndef HUAWEICLOUD_SDK_GA_V1_MODEL_CreateEndpointGroupRequestBody_H_
#define HUAWEICLOUD_SDK_GA_V1_MODEL_CreateEndpointGroupRequestBody_H_


#include <huaweicloud/ga/v1/GaExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ga/v1/model/CreateEndpointGroupOption.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// create Endpoint Group request
/// </summary>
class HUAWEICLOUD_GA_V1_EXPORT  CreateEndpointGroupRequestBody
    : public ModelBase
{
public:
    CreateEndpointGroupRequestBody();
    virtual ~CreateEndpointGroupRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateEndpointGroupRequestBody members

    /// <summary>
    /// 
    /// </summary>

    CreateEndpointGroupOption getEndpointGroup() const;
    bool endpointGroupIsSet() const;
    void unsetendpointGroup();
    void setEndpointGroup(const CreateEndpointGroupOption& value);


protected:
    CreateEndpointGroupOption endpointGroup_;
    bool endpointGroupIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GA_V1_MODEL_CreateEndpointGroupRequestBody_H_
