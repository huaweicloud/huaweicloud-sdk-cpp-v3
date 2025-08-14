
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_CreateExternalIdPConfigurationForDirectoryResponse_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_CreateExternalIdPConfigurationForDirectoryResponse_H_


#include <huaweicloud/identitycenterstore/v1/IdentityCenterStoreExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/identitycenterstore/v1/model/SPSAMLConfig.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IDENTITYCENTERSTORE_V1_EXPORT  CreateExternalIdPConfigurationForDirectoryResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateExternalIdPConfigurationForDirectoryResponse();
    virtual ~CreateExternalIdPConfigurationForDirectoryResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateExternalIdPConfigurationForDirectoryResponse members

    /// <summary>
    /// 
    /// </summary>

    SPSAMLConfig getHwsSpSamlConfig() const;
    bool hwsSpSamlConfigIsSet() const;
    void unsethwsSpSamlConfig();
    void setHwsSpSamlConfig(const SPSAMLConfig& value);

    /// <summary>
    /// 身份提供商证书全局唯一标识符（ID)
    /// </summary>

    std::string getIdpCertificateId() const;
    bool idpCertificateIdIsSet() const;
    void unsetidpCertificateId();
    void setIdpCertificateId(const std::string& value);

    /// <summary>
    /// 身份提供商证书全局唯一标识符列表
    /// </summary>

    std::vector<std::string>& getIdpCertificateIds();
    bool idpCertificateIdsIsSet() const;
    void unsetidpCertificateIds();
    void setIdpCertificateIds(const std::vector<std::string>& value);

    /// <summary>
    /// 外部身份提供商的全局唯一标识符（ID）
    /// </summary>

    std::string getIdpId() const;
    bool idpIdIsSet() const;
    void unsetidpId();
    void setIdpId(const std::string& value);


protected:
    SPSAMLConfig hwsSpSamlConfig_;
    bool hwsSpSamlConfigIsSet_;
    std::string idpCertificateId_;
    bool idpCertificateIdIsSet_;
    std::vector<std::string> idpCertificateIds_;
    bool idpCertificateIdsIsSet_;
    std::string idpId_;
    bool idpIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_CreateExternalIdPConfigurationForDirectoryResponse_H_
