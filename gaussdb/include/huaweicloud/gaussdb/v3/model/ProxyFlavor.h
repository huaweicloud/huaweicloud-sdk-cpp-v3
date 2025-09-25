
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ProxyFlavor_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ProxyFlavor_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>

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
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ProxyFlavor
    : public ModelBase
{
public:
    ProxyFlavor();
    virtual ~ProxyFlavor();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProxyFlavor members

    /// <summary>
    /// **参数解释**：  规格码。  **取值范围**：  不涉及。
    /// </summary>

    std::string getSpecCode() const;
    bool specCodeIsSet() const;
    void unsetspecCode();
    void setSpecCode(const std::string& value);

    /// <summary>
    /// **参数解释**：  cpu核数。  **取值范围**：  不涉及。
    /// </summary>

    std::string getVcpus() const;
    bool vcpusIsSet() const;
    void unsetvcpus();
    void setVcpus(const std::string& value);

    /// <summary>
    /// **参数解释**：  内存。  **取值范围**：  不涉及。
    /// </summary>

    std::string getRam() const;
    bool ramIsSet() const;
    void unsetram();
    void setRam(const std::string& value);

    /// <summary>
    /// **参数解释**：  数据库类型。  **取值范围**：  不涉及。
    /// </summary>

    std::string getDbType() const;
    bool dbTypeIsSet() const;
    void unsetdbType();
    void setDbType(const std::string& value);

    /// <summary>
    /// **参数解释**：  az状态。
    /// </summary>

    Object getAzStatus() const;
    bool azStatusIsSet() const;
    void unsetazStatus();
    void setAzStatus(const Object& value);

    /// <summary>
    /// **参数解释**：  是否支持ipv6。  **取值范围**：  - true: 支持ipv6。 - false: 不支持ipv6。
    /// </summary>

    bool isSupportedIpv6() const;
    bool supportedIpv6IsSet() const;
    void unsetsupportedIpv6();
    void setSupportedIpv6(bool value);


protected:
    std::string specCode_;
    bool specCodeIsSet_;
    std::string vcpus_;
    bool vcpusIsSet_;
    std::string ram_;
    bool ramIsSet_;
    std::string dbType_;
    bool dbTypeIsSet_;
    Object azStatus_;
    bool azStatusIsSet_;
    bool supportedIpv6_;
    bool supportedIpv6IsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ProxyFlavor_H_
