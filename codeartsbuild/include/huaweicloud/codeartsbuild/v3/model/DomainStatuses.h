
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_DomainStatuses_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_DomainStatuses_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  DomainStatuses
    : public ModelBase
{
public:
    DomainStatuses();
    virtual ~DomainStatuses();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DomainStatuses members

    /// <summary>
    /// **参数解释**： 服务名。 **约束限制**： 不涉及。 **取值范围**： 默认CodeCI。
    /// </summary>

    std::string getServiceName() const;
    bool serviceNameIsSet() const;
    void unsetserviceName();
    void setServiceName(const std::string& value);

    /// <summary>
    /// **参数解释**： 租户id。 **约束限制**： 不涉及。 **取值范围**： 不涉及。
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// **参数解释**： 租户名称。 **约束限制**： 不涉及。 **取值范围**： 不涉及。
    /// </summary>

    std::string getDomainName() const;
    bool domainNameIsSet() const;
    void unsetdomainName();
    void setDomainName(const std::string& value);

    /// <summary>
    /// **参数解释**： freeQuota。 **约束限制**： 不涉及。 **取值范围**： true或false。
    /// </summary>

    bool isFreeQuota() const;
    bool freeQuotaIsSet() const;
    void unsetfreeQuota();
    void setFreeQuota(bool value);

    /// <summary>
    /// **参数解释**： freePackageQuota。 **约束限制**： 不涉及。 **取值范围**： true或false。
    /// </summary>

    bool isFreePackageQuota() const;
    bool freePackageQuotaIsSet() const;
    void unsetfreePackageQuota();
    void setFreePackageQuota(bool value);

    /// <summary>
    /// **参数解释**： 状态。 **约束限制**： 不涉及。 **取值范围**： 不涉及。
    /// </summary>

    int32_t getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(int32_t value);

    /// <summary>
    /// **参数解释**： isFederation。 **约束限制**： 不涉及。 **取值范围**： 不涉及。
    /// </summary>

    int32_t getIsFederation() const;
    bool isFederationIsSet() const;
    void unsetisFederation();
    void setIsFederation(int32_t value);

    /// <summary>
    /// **参数解释**： 白名单标识。 **约束限制**： 不涉及。 **取值范围**： 不涉及。
    /// </summary>

    int32_t getIsWhitelist() const;
    bool isWhitelistIsSet() const;
    void unsetisWhitelist();
    void setIsWhitelist(int32_t value);

    /// <summary>
    /// **参数解释**： 地区。 **约束限制**： 不涉及。 **取值范围**： 不涉及。
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// **参数解释**： 包类型。 **约束限制**： 不涉及。 **取值范围**： 不涉及。
    /// </summary>

    std::string getPackageType() const;
    bool packageTypeIsSet() const;
    void unsetpackageType();
    void setPackageType(const std::string& value);

    /// <summary>
    /// **参数解释**： 租户类型。 **约束限制**： 不涉及。 **取值范围**： 不涉及。
    /// </summary>

    int32_t getDomainType() const;
    bool domainTypeIsSet() const;
    void unsetdomainType();
    void setDomainType(int32_t value);

    /// <summary>
    /// **参数解释**： 租户业务类型。 **约束限制**： 不涉及。 **取值范围**： 不涉及。
    /// </summary>

    std::string getDomainBusinessType() const;
    bool domainBusinessTypeIsSet() const;
    void unsetdomainBusinessType();
    void setDomainBusinessType(const std::string& value);

    /// <summary>
    /// **参数解释**： domainMaliciousDockerArgs。 **约束限制**： 不涉及。 **取值范围**： 不涉及。
    /// </summary>

    std::string getDomainMaliciousDockerArgs() const;
    bool domainMaliciousDockerArgsIsSet() const;
    void unsetdomainMaliciousDockerArgs();
    void setDomainMaliciousDockerArgs(const std::string& value);

    /// <summary>
    /// **参数解释**： 允许自定义环境数。 **约束限制**： 不涉及。 **取值范围**： 不涉及。
    /// </summary>

    int32_t getAllowCustomEnv() const;
    bool allowCustomEnvIsSet() const;
    void unsetallowCustomEnv();
    void setAllowCustomEnv(int32_t value);

    /// <summary>
    /// **参数解释**： 默认的加速阈值注入。 **约束限制**： 不涉及。 **取值范围**： 不涉及。
    /// </summary>

    std::string getSpecThreshold() const;
    bool specThresholdIsSet() const;
    void unsetspecThreshold();
    void setSpecThreshold(const std::string& value);


protected:
    std::string serviceName_;
    bool serviceNameIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    std::string domainName_;
    bool domainNameIsSet_;
    bool freeQuota_;
    bool freeQuotaIsSet_;
    bool freePackageQuota_;
    bool freePackageQuotaIsSet_;
    int32_t status_;
    bool statusIsSet_;
    int32_t isFederation_;
    bool isFederationIsSet_;
    int32_t isWhitelist_;
    bool isWhitelistIsSet_;
    std::string region_;
    bool regionIsSet_;
    std::string packageType_;
    bool packageTypeIsSet_;
    int32_t domainType_;
    bool domainTypeIsSet_;
    std::string domainBusinessType_;
    bool domainBusinessTypeIsSet_;
    std::string domainMaliciousDockerArgs_;
    bool domainMaliciousDockerArgsIsSet_;
    int32_t allowCustomEnv_;
    bool allowCustomEnvIsSet_;
    std::string specThreshold_;
    bool specThresholdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_DomainStatuses_H_
