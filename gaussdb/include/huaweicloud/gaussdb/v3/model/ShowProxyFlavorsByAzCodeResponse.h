
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowProxyFlavorsByAzCodeResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowProxyFlavorsByAzCodeResponse_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdb/v3/model/ProxyFlavorGroup.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ShowProxyFlavorsByAzCodeResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowProxyFlavorsByAzCodeResponse();
    virtual ~ShowProxyFlavorsByAzCodeResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowProxyFlavorsByAzCodeResponse members

    /// <summary>
    /// **参数解释**：  代理规格分组信息。
    /// </summary>

    std::vector<ProxyFlavorGroup>& getProxyFlavorGroups();
    bool proxyFlavorGroupsIsSet() const;
    void unsetproxyFlavorGroups();
    void setProxyFlavorGroups(const std::vector<ProxyFlavorGroup>& value);


protected:
    std::vector<ProxyFlavorGroup> proxyFlavorGroups_;
    bool proxyFlavorGroupsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ShowProxyFlavorsByAzCodeResponse_H_
