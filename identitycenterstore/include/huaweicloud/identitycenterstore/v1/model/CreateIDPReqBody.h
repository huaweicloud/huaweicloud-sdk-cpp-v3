
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_CreateIDPReqBody_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_CreateIDPReqBody_H_


#include <huaweicloud/identitycenterstore/v1/IdentityCenterStoreExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <string>

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
class HUAWEICLOUD_IDENTITYCENTERSTORE_V1_EXPORT  CreateIDPReqBody
    : public ModelBase
{
public:
    CreateIDPReqBody();
    virtual ~CreateIDPReqBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateIDPReqBody members

    /// <summary>
    /// 身份提供商SAML元数据，与身份提供商SAML配置二选一
    /// </summary>

    std::string getIdpSamlMetadata() const;
    bool idpSamlMetadataIsSet() const;
    void unsetidpSamlMetadata();
    void setIdpSamlMetadata(const std::string& value);

    /// <summary>
    /// 身份提供商证书，与身份提供商SAML配置联合使用
    /// </summary>

    std::string getIdpCertificate() const;
    bool idpCertificateIsSet() const;
    void unsetidpCertificate();
    void setIdpCertificate(const std::string& value);

    /// <summary>
    /// 身份提供商SAML配置信息，与身份提供商SAML元数据二选一
    /// </summary>

    Object getIdpSamlConfig() const;
    bool idpSamlConfigIsSet() const;
    void unsetidpSamlConfig();
    void setIdpSamlConfig(const Object& value);


protected:
    std::string idpSamlMetadata_;
    bool idpSamlMetadataIsSet_;
    std::string idpCertificate_;
    bool idpCertificateIsSet_;
    Object idpSamlConfig_;
    bool idpSamlConfigIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_CreateIDPReqBody_H_
