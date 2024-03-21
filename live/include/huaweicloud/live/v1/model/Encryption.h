
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_Encryption_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_Encryption_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 加密信息
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  Encryption
    : public ModelBase
{
public:
    Encryption();
    virtual ~Encryption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Encryption members

    /// <summary>
    /// 密钥缓存时间。如果密钥不变，默认缓存七天
    /// </summary>

    int32_t getKeyRotationIntervalSeconds() const;
    bool keyRotationIntervalSecondsIsSet() const;
    void unsetkeyRotationIntervalSeconds();
    void setKeyRotationIntervalSeconds(int32_t value);

    /// <summary>
    /// 加密方式
    /// </summary>

    std::string getEncryptionMethod() const;
    bool encryptionMethodIsSet() const;
    void unsetencryptionMethod();
    void setEncryptionMethod(const std::string& value);

    /// <summary>
    /// 取值如下： - content：一个频道对应一个密钥 - profile：一个码率对应一个密钥  默认值：content
    /// </summary>

    std::string getLevel() const;
    bool levelIsSet() const;
    void unsetlevel();
    void setLevel(const std::string& value);

    /// <summary>
    /// 客户生成的DRM内容ID
    /// </summary>

    std::string getDrmContentId() const;
    bool drmContentIdIsSet() const;
    void unsetdrmContentId();
    void setDrmContentId(const std::string& value);

    /// <summary>
    /// system_id枚举值
    /// </summary>

    std::vector<std::string>& getSystemIds();
    bool systemIdsIsSet() const;
    void unsetsystemIds();
    void setSystemIds(const std::vector<std::string>& value);

    /// <summary>
    /// 增加到请求消息体header中的鉴权信息
    /// </summary>

    std::string getAuthInfo() const;
    bool authInfoIsSet() const;
    void unsetauthInfo();
    void setAuthInfo(const std::string& value);

    /// <summary>
    /// 获取密钥的DRM地址
    /// </summary>

    std::string getKmUrl() const;
    bool kmUrlIsSet() const;
    void unsetkmUrl();
    void setKmUrl(const std::string& value);


protected:
    int32_t keyRotationIntervalSeconds_;
    bool keyRotationIntervalSecondsIsSet_;
    std::string encryptionMethod_;
    bool encryptionMethodIsSet_;
    std::string level_;
    bool levelIsSet_;
    std::string drmContentId_;
    bool drmContentIdIsSet_;
    std::vector<std::string> systemIds_;
    bool systemIdsIsSet_;
    std::string authInfo_;
    bool authInfoIsSet_;
    std::string kmUrl_;
    bool kmUrlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_Encryption_H_
