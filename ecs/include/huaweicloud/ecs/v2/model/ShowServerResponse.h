
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ShowServerResponse_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ShowServerResponse_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/ServerDetail.h>

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
class HUAWEICLOUD_ECS_V2_EXPORT  ShowServerResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowServerResponse();
    virtual ~ShowServerResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowServerResponse members

    /// <summary>
    /// 
    /// </summary>

    ServerDetail getServer() const;
    bool serverIsSet() const;
    void unsetserver();
    void setServer(const ServerDetail& value);


protected:
    ServerDetail server_;
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

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ShowServerResponse_H_
