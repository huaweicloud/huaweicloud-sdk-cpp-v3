
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_CreateBearerTokenResponse_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_CreateBearerTokenResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_IDENTITYCENTERSTORE_V1_EXPORT  CreateBearerTokenResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateBearerTokenResponse();
    virtual ~CreateBearerTokenResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateBearerTokenResponse members

    /// <summary>
    /// 创建时间
    /// </summary>

    double getCreationTime() const;
    bool creationTimeIsSet() const;
    void unsetcreationTime();
    void setCreationTime(double value);

    /// <summary>
    /// 过期时间
    /// </summary>

    double getExpirationTime() const;
    bool expirationTimeIsSet() const;
    void unsetexpirationTime();
    void setExpirationTime(double value);

    /// <summary>
    /// 访问令牌
    /// </summary>

    std::string getToken() const;
    bool tokenIsSet() const;
    void unsettoken();
    void setToken(const std::string& value);

    /// <summary>
    /// 访问令牌的全局唯一标识符（ID）
    /// </summary>

    std::string getTokenId() const;
    bool tokenIdIsSet() const;
    void unsettokenId();
    void setTokenId(const std::string& value);


protected:
    double creationTime_;
    bool creationTimeIsSet_;
    double expirationTime_;
    bool expirationTimeIsSet_;
    std::string token_;
    bool tokenIsSet_;
    std::string tokenId_;
    bool tokenIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_CreateBearerTokenResponse_H_
