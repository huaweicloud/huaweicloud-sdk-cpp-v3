
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_SPSAMLConfig_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_SPSAMLConfig_H_


#include <huaweicloud/identitycenterstore/v1/IdentityCenterStoreExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
class HUAWEICLOUD_IDENTITYCENTERSTORE_V1_EXPORT  SPSAMLConfig
    : public ModelBase
{
public:
    SPSAMLConfig();
    virtual ~SPSAMLConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SPSAMLConfig members

    /// <summary>
    /// 服务提供商断言响应地址
    /// </summary>

    std::string getAcsUrl() const;
    bool acsUrlIsSet() const;
    void unsetacsUrl();
    void setAcsUrl(const std::string& value);

    /// <summary>
    /// 服务提供商签发者
    /// </summary>

    std::string getIssuer() const;
    bool issuerIsSet() const;
    void unsetissuer();
    void setIssuer(const std::string& value);

    /// <summary>
    /// 服务提供商元数据
    /// </summary>

    std::string getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const std::string& value);


protected:
    std::string acsUrl_;
    bool acsUrlIsSet_;
    std::string issuer_;
    bool issuerIsSet_;
    std::string metadata_;
    bool metadataIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_SPSAMLConfig_H_
