
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ProxyFlavorGroup_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ProxyFlavorGroup_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/gaussdb/v3/model/ProxyFlavor.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ProxyFlavorGroup
    : public ModelBase
{
public:
    ProxyFlavorGroup();
    virtual ~ProxyFlavorGroup();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProxyFlavorGroup members

    /// <summary>
    /// **参数解释**：  规格分组类型。  **取值范围**：  不涉及。
    /// </summary>

    std::string getGroupType() const;
    bool groupTypeIsSet() const;
    void unsetgroupType();
    void setGroupType(const std::string& value);

    /// <summary>
    /// **参数解释**：  规格列表。
    /// </summary>

    std::vector<ProxyFlavor>& getProxyFlavors();
    bool proxyFlavorsIsSet() const;
    void unsetproxyFlavors();
    void setProxyFlavors(const std::vector<ProxyFlavor>& value);


protected:
    std::string groupType_;
    bool groupTypeIsSet_;
    std::vector<ProxyFlavor> proxyFlavors_;
    bool proxyFlavorsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ProxyFlavorGroup_H_
