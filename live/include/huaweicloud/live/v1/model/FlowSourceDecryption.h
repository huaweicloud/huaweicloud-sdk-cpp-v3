
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_FlowSourceDecryption_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_FlowSourceDecryption_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// StreamConnect flow解密信息
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  FlowSourceDecryption
    : public ModelBase
{
public:
    FlowSourceDecryption();
    virtual ~FlowSourceDecryption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FlowSourceDecryption members

    /// <summary>
    /// 加密算法，aes128: 加密算法为aes-128，aes192:加密算法为aes-192，aes256: 加密算法为AES-256
    /// </summary>

    std::string getAlgorithm() const;
    bool algorithmIsSet() const;
    void unsetalgorithm();
    void setAlgorithm(const std::string& value);

    /// <summary>
    /// 秘钥类型,speke:使用speke协议获取秘钥,static-key:静态秘钥,srt-password:SRT协议秘钥 目前仅支持srt-password类型，其他类型暂不支持
    /// </summary>

    std::string getKeyType() const;
    bool keyTypeIsSet() const;
    void unsetkeyType();
    void setKeyType(const std::string& value);

    /// <summary>
    /// srt解密秘钥，用于flow对srt流进行解密
    /// </summary>

    std::string getPassphrase() const;
    bool passphraseIsSet() const;
    void unsetpassphrase();
    void setPassphrase(const std::string& value);


protected:
    std::string algorithm_;
    bool algorithmIsSet_;
    std::string keyType_;
    bool keyTypeIsSet_;
    std::string passphrase_;
    bool passphraseIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_FlowSourceDecryption_H_
