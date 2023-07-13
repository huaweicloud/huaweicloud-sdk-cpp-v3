
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ShowServerLimitsResponse_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ShowServerLimitsResponse_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/ServerLimits.h>

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
class HUAWEICLOUD_ECS_V2_EXPORT  ShowServerLimitsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowServerLimitsResponse();
    virtual ~ShowServerLimitsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowServerLimitsResponse members

    /// <summary>
    /// 
    /// </summary>

    ServerLimits getAbsolute() const;
    bool absoluteIsSet() const;
    void unsetabsolute();
    void setAbsolute(const ServerLimits& value);


protected:
    ServerLimits absolute_;
    bool absoluteIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ShowServerLimitsResponse_H_
