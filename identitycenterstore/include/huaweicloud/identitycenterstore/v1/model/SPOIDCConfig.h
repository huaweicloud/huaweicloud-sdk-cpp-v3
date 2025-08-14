
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_SPOIDCConfig_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_SPOIDCConfig_H_


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
class HUAWEICLOUD_IDENTITYCENTERSTORE_V1_EXPORT  SPOIDCConfig
    : public ModelBase
{
public:
    SPOIDCConfig();
    virtual ~SPOIDCConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SPOIDCConfig members

    /// <summary>
    /// 重定向地址
    /// </summary>

    std::string getRedirectUrl() const;
    bool redirectUrlIsSet() const;
    void unsetredirectUrl();
    void setRedirectUrl(const std::string& value);


protected:
    std::string redirectUrl_;
    bool redirectUrlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_SPOIDCConfig_H_
