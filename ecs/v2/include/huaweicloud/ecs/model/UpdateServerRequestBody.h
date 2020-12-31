
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateServerRequestBody_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateServerRequestBody_H_

#include <huaweicloud/ecs/EcsExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include "huaweicloud/ecs/model/UpdateServerOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// This is a auto create Body Object
/// </summary>
class HUAWEICLOUD_ECS_EXPORT  UpdateServerRequestBody
    : public ModelBase
{
public:
    UpdateServerRequestBody();
    virtual ~UpdateServerRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateServerRequestBody members

    /// <summary>
    /// 
    /// </summary>

    UpdateServerOption getServer() const;
    bool serverIsSet() const;
    void unsetserver();
    void setServer(const UpdateServerOption& value);


protected:
    UpdateServerOption server_;
    bool serverIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateServerRequestBody_H_
