
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_CreateSecretVersionRequestBody_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_CreateSecretVersionRequestBody_H_

#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建凭据版本请求体。
/// </summary>
class HUAWEICLOUD_CSMS_V1_EXPORT  CreateSecretVersionRequestBody
    : public ModelBase
{
public:
    CreateSecretVersionRequestBody();
    virtual ~CreateSecretVersionRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateSecretVersionRequestBody members

    /// <summary>
    /// 新创建凭据的凭据值，将其加密后，存入初始版本中。  类型：base64编码的二进制数据对象。  约束：secret_binary和secret_string必须且只能设置一个，最大32K。 
    /// </summary>

    std::string getSecretBinary() const;
    bool secretBinaryIsSet() const;
    void unsetsecretBinary();
    void setSecretBinary(const std::string& value);

    /// <summary>
    /// 新创建凭据的凭据值，将其加密后，存入初始版本中。  约束：secret_binary和 secret_string必须且只能设置一个，最大32K。 
    /// </summary>

    std::string getSecretString() const;
    bool secretStringIsSet() const;
    void unsetsecretString();
    void setSecretString(const std::string& value);

    /// <summary>
    /// 凭据版本在存入时需要被同时标记的版本状态。如果您不指定此参数，凭据管家默认为新版本标记SYSCURRENT  约束：数组大小：最小1，最大12。stage长度：最小1字节，最大64字节。 
    /// </summary>

    std::vector<std::string>& getVersionStages();
    bool versionStagesIsSet() const;
    void unsetversionStages();
    void setVersionStages(const std::vector<std::string>& value);

    /// <summary>
    /// 凭据版本过期时间，时间戳，即从1970年1月1日至该时间的总秒数。默认为空，凭据订阅“版本过期”事件类型时，有效期判断所依据的值。 
    /// </summary>

    int64_t getExpireTime() const;
    bool expireTimeIsSet() const;
    void unsetexpireTime();
    void setExpireTime(int64_t value);


protected:
    std::string secretBinary_;
    bool secretBinaryIsSet_;
    std::string secretString_;
    bool secretStringIsSet_;
    std::vector<std::string> versionStages_;
    bool versionStagesIsSet_;
    int64_t expireTime_;
    bool expireTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_CreateSecretVersionRequestBody_H_
