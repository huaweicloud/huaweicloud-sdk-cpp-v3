
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_GetSpConfigurationForDirectoryResponse_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_GetSpConfigurationForDirectoryResponse_H_


#include <huaweicloud/identitycenterstore/v1/IdentityCenterStoreExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/identitycenterstore/v1/model/SPSAMLConfig.h>
#include <huaweicloud/identitycenterstore/v1/model/SPOIDCConfig.h>

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
class HUAWEICLOUD_IDENTITYCENTERSTORE_V1_EXPORT  GetSpConfigurationForDirectoryResponse
    : public ModelBase, public HttpResponse
{
public:
    GetSpConfigurationForDirectoryResponse();
    virtual ~GetSpConfigurationForDirectoryResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GetSpConfigurationForDirectoryResponse members

    /// <summary>
    /// 
    /// </summary>

    SPOIDCConfig getSpOidcConfig() const;
    bool spOidcConfigIsSet() const;
    void unsetspOidcConfig();
    void setSpOidcConfig(const SPOIDCConfig& value);

    /// <summary>
    /// 
    /// </summary>

    SPSAMLConfig getSpSamlConfig() const;
    bool spSamlConfigIsSet() const;
    void unsetspSamlConfig();
    void setSpSamlConfig(const SPSAMLConfig& value);


protected:
    SPOIDCConfig spOidcConfig_;
    bool spOidcConfigIsSet_;
    SPSAMLConfig spSamlConfig_;
    bool spSamlConfigIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_GetSpConfigurationForDirectoryResponse_H_
