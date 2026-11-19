
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ComputeFlavorItemDetail_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ComputeFlavorItemDetail_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ComputeFlavorItemDetail
    : public ModelBase
{
public:
    ComputeFlavorItemDetail();
    virtual ~ComputeFlavorItemDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ComputeFlavorItemDetail members

    /// <summary>
    /// **参数解释**: 规格ID。 **取值范围**: 不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**: 规格编码。 **取值范围**: 不涉及。
    /// </summary>

    std::string getSpecCode() const;
    bool specCodeIsSet() const;
    void unsetspecCode();
    void setSpecCode(const std::string& value);

    /// <summary>
    /// **参数解释**: IaaS规格编码。 **取值范围**: 不涉及。
    /// </summary>

    std::string getIaasCode() const;
    bool iaasCodeIsSet() const;
    void unsetiaasCode();
    void setIaasCode(const std::string& value);

    /// <summary>
    /// **参数解释**: CPU核数。 **取值范围**: 不涉及。
    /// </summary>

    std::string getVcpus() const;
    bool vcpusIsSet() const;
    void unsetvcpus();
    void setVcpus(const std::string& value);

    /// <summary>
    /// **参数解释**: 内存大小，单位GB。 **取值范围**: 不涉及。
    /// </summary>

    std::string getRam() const;
    bool ramIsSet() const;
    void unsetram();
    void setRam(const std::string& value);

    /// <summary>
    /// **参数解释**: 是否支持IPv6。 **取值范围**: - true：支持 - false：不支持
    /// </summary>

    bool isSupportedIpv6() const;
    bool supportedIpv6IsSet() const;
    void unsetsupportedIpv6();
    void setSupportedIpv6(bool value);

    /// <summary>
    /// **参数解释**: 规格在各个可用区的状态。 **取值范围**: - normal：正常。 - sellout：已售罄。 - unknown：状态未知。 - unsupported：不支持。 - abandon：已废弃。
    /// </summary>

    std::map<std::string, std::string>& getAzStatus();
    bool azStatusIsSet() const;
    void unsetazStatus();
    void setAzStatus(const std::map<std::string, std::string>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string specCode_;
    bool specCodeIsSet_;
    std::string iaasCode_;
    bool iaasCodeIsSet_;
    std::string vcpus_;
    bool vcpusIsSet_;
    std::string ram_;
    bool ramIsSet_;
    bool supportedIpv6_;
    bool supportedIpv6IsSet_;
    std::map<std::string, std::string> azStatus_;
    bool azStatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ComputeFlavorItemDetail_H_
