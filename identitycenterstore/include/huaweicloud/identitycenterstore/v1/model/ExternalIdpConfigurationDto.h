
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_ExternalIdpConfigurationDto_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_ExternalIdpConfigurationDto_H_


#include <huaweicloud/identitycenterstore/v1/IdentityCenterStoreExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/identitycenterstore/v1/model/IdpSAMLConfig.h>
#include <vector>
#include <huaweicloud/identitycenterstore/v1/model/IdpCertificateBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_IDENTITYCENTERSTORE_V1_EXPORT  ExternalIdpConfigurationDto
    : public ModelBase
{
public:
    ExternalIdpConfigurationDto();
    virtual ~ExternalIdpConfigurationDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExternalIdpConfigurationDto members

    /// <summary>
    /// 身份提供商证书对应的全局唯一标识符列表
    /// </summary>

    std::vector<IdpCertificateBody>& getIdpCertificateIds();
    bool idpCertificateIdsIsSet() const;
    void unsetidpCertificateIds();
    void setIdpCertificateIds(const std::vector<IdpCertificateBody>& value);

    /// <summary>
    /// 身份提供商对应的全局唯一标识符（ID）
    /// </summary>

    std::string getIdpId() const;
    bool idpIdIsSet() const;
    void unsetidpId();
    void setIdpId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    IdpSAMLConfig getIdpSamlConfig() const;
    bool idpSamlConfigIsSet() const;
    void unsetidpSamlConfig();
    void setIdpSamlConfig(const IdpSAMLConfig& value);

    /// <summary>
    /// 是否启用身份提供商
    /// </summary>

    bool isIsEnabled() const;
    bool isEnabledIsSet() const;
    void unsetisEnabled();
    void setIsEnabled(bool value);


protected:
    std::vector<IdpCertificateBody> idpCertificateIds_;
    bool idpCertificateIdsIsSet_;
    std::string idpId_;
    bool idpIdIsSet_;
    IdpSAMLConfig idpSamlConfig_;
    bool idpSamlConfigIsSet_;
    bool isEnabled_;
    bool isEnabledIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_ExternalIdpConfigurationDto_H_
