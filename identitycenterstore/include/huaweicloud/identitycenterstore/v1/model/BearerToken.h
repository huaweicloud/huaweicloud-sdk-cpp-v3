
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_BearerToken_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_BearerToken_H_


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
class HUAWEICLOUD_IDENTITYCENTERSTORE_V1_EXPORT  BearerToken
    : public ModelBase
{
public:
    BearerToken();
    virtual ~BearerToken();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BearerToken members

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
    /// 访问令牌全局唯一标识（ID）
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
    std::string tokenId_;
    bool tokenIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_BearerToken_H_
