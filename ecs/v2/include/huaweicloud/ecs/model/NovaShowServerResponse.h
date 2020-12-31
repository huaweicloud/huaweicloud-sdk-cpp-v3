
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaShowServerResponse_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaShowServerResponse_H_

#include <huaweicloud/ecs/EcsExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include "huaweicloud/ecs/model/NovaServer.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_ECS_EXPORT  NovaShowServerResponse
    : public ModelBase, public HttpResponse
{
public:
    NovaShowServerResponse();
    virtual ~NovaShowServerResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NovaShowServerResponse members

    /// <summary>
    /// 
    /// </summary>

    NovaServer getServer() const;
    bool serverIsSet() const;
    void unsetserver();
    void setServer(const NovaServer& value);


protected:
    NovaServer server_;
    bool serverIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaShowServerResponse_H_
