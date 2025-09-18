
#ifndef HUAWEICLOUD_SDK_GA_V1_MODEL_UpdateEndpointGroupRequestBody_H_
#define HUAWEICLOUD_SDK_GA_V1_MODEL_UpdateEndpointGroupRequestBody_H_


#include <huaweicloud/ga/v1/GaExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ga/v1/model/UpdateEndpointGroupOption.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// update Endpoint Group request
/// </summary>
class HUAWEICLOUD_GA_V1_EXPORT  UpdateEndpointGroupRequestBody
    : public ModelBase
{
public:
    UpdateEndpointGroupRequestBody();
    virtual ~UpdateEndpointGroupRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateEndpointGroupRequestBody members

    /// <summary>
    /// 
    /// </summary>

    UpdateEndpointGroupOption getEndpointGroup() const;
    bool endpointGroupIsSet() const;
    void unsetendpointGroup();
    void setEndpointGroup(const UpdateEndpointGroupOption& value);


protected:
    UpdateEndpointGroupOption endpointGroup_;
    bool endpointGroupIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GA_V1_MODEL_UpdateEndpointGroupRequestBody_H_
