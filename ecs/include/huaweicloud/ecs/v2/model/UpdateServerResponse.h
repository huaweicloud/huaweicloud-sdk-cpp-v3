
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateServerResponse_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateServerResponse_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/UpdateServerResult.h>

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
class HUAWEICLOUD_ECS_V2_EXPORT  UpdateServerResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdateServerResponse();
    virtual ~UpdateServerResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateServerResponse members

    /// <summary>
    /// 
    /// </summary>

    UpdateServerResult getServer() const;
    bool serverIsSet() const;
    void unsetserver();
    void setServer(const UpdateServerResult& value);


protected:
    UpdateServerResult server_;
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

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_UpdateServerResponse_H_
