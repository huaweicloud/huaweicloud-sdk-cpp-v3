
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_KeystoreDetails_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_KeystoreDetails_H_

#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 密钥库详情
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  KeystoreDetails
    : public ModelBase
{
public:
    KeystoreDetails();
    virtual ~KeystoreDetails();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// KeystoreDetails members

    /// <summary>
    /// 密钥库ID
    /// </summary>

    std::string getKeystoreId() const;
    bool keystoreIdIsSet() const;
    void unsetkeystoreId();
    void setKeystoreId(const std::string& value);

    /// <summary>
    /// 用户域ID
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);

    /// <summary>
    /// 密钥库别名
    /// </summary>

    std::string getKeystoreAlias() const;
    bool keystoreAliasIsSet() const;
    void unsetkeystoreAlias();
    void setKeystoreAlias(const std::string& value);

    /// <summary>
    /// 密钥库类型
    /// </summary>

    std::string getKeystoreType() const;
    bool keystoreTypeIsSet() const;
    void unsetkeystoreType();
    void setKeystoreType(const std::string& value);

    /// <summary>
    /// DHSM集群id，要求集群当前未创建专属密钥库
    /// </summary>

    std::string getHsmClusterId() const;
    bool hsmClusterIdIsSet() const;
    void unsethsmClusterId();
    void setHsmClusterId(const std::string& value);

    /// <summary>
    /// 密钥库创建时间，UTC时间戳。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);


protected:
    std::string keystoreId_;
    bool keystoreIdIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;
    std::string keystoreAlias_;
    bool keystoreAliasIsSet_;
    std::string keystoreType_;
    bool keystoreTypeIsSet_;
    std::string hsmClusterId_;
    bool hsmClusterIdIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_KeystoreDetails_H_
