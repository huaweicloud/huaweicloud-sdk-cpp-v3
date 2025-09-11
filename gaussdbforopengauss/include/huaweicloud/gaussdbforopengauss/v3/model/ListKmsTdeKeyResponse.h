
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListKmsTdeKeyResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListKmsTdeKeyResponse_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/ListKmsTdeKeyResponseBody_key_details.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ListKmsTdeKeyResponse
    : public ModelBase, public HttpResponse
{
public:
    ListKmsTdeKeyResponse();
    virtual ~ListKmsTdeKeyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListKmsTdeKeyResponse members

    /// <summary>
    /// **参数解释**: kms秘钥列表。
    /// </summary>

    std::vector<ListKmsTdeKeyResponseBody_key_details>& getKeyDetails();
    bool keyDetailsIsSet() const;
    void unsetkeyDetails();
    void setKeyDetails(const std::vector<ListKmsTdeKeyResponseBody_key_details>& value);

    /// <summary>
    /// **参数解释**: 授权用户ID，在开启透明加密能力时，必须对当前用户ID进行授权。 授权操作参考创建授权接口 https://support.huaweicloud.com/api-dew/CreateGrant.html。 **取值范围**: 不涉及。
    /// </summary>

    std::string getAuthorizedId() const;
    bool authorizedIdIsSet() const;
    void unsetauthorizedId();
    void setAuthorizedId(const std::string& value);

    /// <summary>
    /// **参数解释**: 授权用户名称。 **取值范围**: 不涉及。
    /// </summary>

    std::string getAuthorizedName() const;
    bool authorizedNameIsSet() const;
    void unsetauthorizedName();
    void setAuthorizedName(const std::string& value);


protected:
    std::vector<ListKmsTdeKeyResponseBody_key_details> keyDetails_;
    bool keyDetailsIsSet_;
    std::string authorizedId_;
    bool authorizedIdIsSet_;
    std::string authorizedName_;
    bool authorizedNameIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ListKmsTdeKeyResponse_H_
