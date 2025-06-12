
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ListRecycleBinServersResponse_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ListRecycleBinServersResponse_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/ServerDetail.h>
#include <vector>

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
class HUAWEICLOUD_ECS_V2_EXPORT  ListRecycleBinServersResponse
    : public ModelBase, public HttpResponse
{
public:
    ListRecycleBinServersResponse();
    virtual ~ListRecycleBinServersResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListRecycleBinServersResponse members

    /// <summary>
    /// 
    /// </summary>

    std::vector<ServerDetail>& getServers();
    bool serversIsSet() const;
    void unsetservers();
    void setServers(const std::vector<ServerDetail>& value);


protected:
    std::vector<ServerDetail> servers_;
    bool serversIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ListRecycleBinServersResponse_H_
