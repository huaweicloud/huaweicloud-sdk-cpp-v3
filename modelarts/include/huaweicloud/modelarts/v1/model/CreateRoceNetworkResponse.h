
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateRoceNetworkResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateRoceNetworkResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/ServerRoceNetwork.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  CreateRoceNetworkResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateRoceNetworkResponse();
    virtual ~CreateRoceNetworkResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateRoceNetworkResponse members

    /// <summary>
    /// 
    /// </summary>

    ServerRoceNetwork getNetwork() const;
    bool networkIsSet() const;
    void unsetnetwork();
    void setNetwork(const ServerRoceNetwork& value);


protected:
    ServerRoceNetwork network_;
    bool networkIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateRoceNetworkResponse_H_
