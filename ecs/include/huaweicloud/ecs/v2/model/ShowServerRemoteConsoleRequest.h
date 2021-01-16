
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ShowServerRemoteConsoleRequest_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ShowServerRemoteConsoleRequest_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/ecs/v2/model/ShowServerRemoteConsoleRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  ShowServerRemoteConsoleRequest
    : public ModelBase
{
public:
    ShowServerRemoteConsoleRequest();
    virtual ~ShowServerRemoteConsoleRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowServerRemoteConsoleRequest members

    /// <summary>
    /// 
    /// </summary>

    std::string getServerId() const;
    bool serverIdIsSet() const;
    void unsetserverId();
    void setServerId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ShowServerRemoteConsoleRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ShowServerRemoteConsoleRequestBody& value);


protected:
    std::string serverId_;
    bool serverIdIsSet_;
    ShowServerRemoteConsoleRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowServerRemoteConsoleRequest& dereference_from_shared_ptr(std::shared_ptr<ShowServerRemoteConsoleRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ShowServerRemoteConsoleRequest_H_
