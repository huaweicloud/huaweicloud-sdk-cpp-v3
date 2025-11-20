
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_OpenAPIResponse_status_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_OpenAPIResponse_status_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释**： 状态信息 **约束限制**： 不涉及 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  OpenAPIResponse_status
    : public ModelBase
{
public:
    OpenAPIResponse_status();
    virtual ~OpenAPIResponse_status();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OpenAPIResponse_status members

    /// <summary>
    /// **参数解释**： 集群访问的PrivateIP(HA集群返回VIP) **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及 
    /// </summary>

    std::string getPrivateEndpoint() const;
    bool privateEndpointIsSet() const;
    void unsetprivateEndpoint();
    void setPrivateEndpoint(const std::string& value);

    /// <summary>
    /// **参数解释**： 集群访问的PrivateIP(HA集群返回VIP) **约束限制**： 不涉及 **取值范围**： 不涉及 **默认取值**： 不涉及 
    /// </summary>

    std::string getPublicEndpoint() const;
    bool publicEndpointIsSet() const;
    void unsetpublicEndpoint();
    void setPublicEndpoint(const std::string& value);


protected:
    std::string privateEndpoint_;
    bool privateEndpointIsSet_;
    std::string publicEndpoint_;
    bool publicEndpointIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_OpenAPIResponse_status_H_
