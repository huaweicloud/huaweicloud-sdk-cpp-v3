
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ShowSerialConsoleActionsResponse_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ShowSerialConsoleActionsResponse_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/ShowSerialConsoleActionsOption.h>

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
class HUAWEICLOUD_ECS_V2_EXPORT  ShowSerialConsoleActionsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowSerialConsoleActionsResponse();
    virtual ~ShowSerialConsoleActionsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowSerialConsoleActionsResponse members

    /// <summary>
    /// 
    /// </summary>

    ShowSerialConsoleActionsOption getSerialConsole() const;
    bool serialConsoleIsSet() const;
    void unsetserialConsole();
    void setSerialConsole(const ShowSerialConsoleActionsOption& value);


protected:
    ShowSerialConsoleActionsOption serialConsole_;
    bool serialConsoleIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ShowSerialConsoleActionsResponse_H_
