
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_HttpsTlsVersion_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_HttpsTlsVersion_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 配置TLS版本及加密套件，TLS版本需要匹配合适的加密套件使用，详情可参考CDN《用户指南》文档的“TLS版本与加密套件”章节。 **约束限制：** 不涉及
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  HttpsTlsVersion
    : public ModelBase
{
public:
    HttpsTlsVersion();
    virtual ~HttpsTlsVersion();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HttpsTlsVersion members

    /// <summary>
    /// **参数解释：** 传输层安全性协议，即TLS版本配置 **约束限制：** - 不可全部关闭 - 需开启连续或单个版本号，例：不可仅开启TLS1.0/1.2而关闭TLS1.1 - 多版本开启时，使用“,”拼接，例：TLSv1.1,TLSv1.2 - 配置TLS版本需要先开启HTTPS国际证书  **取值范围：** 目前支持TLSv1.0/1.1/1.2/1.3四个版本的协议  **默认取值：** 不涉及
    /// </summary>

    std::string getTlsVersion() const;
    bool tlsVersionIsSet() const;
    void unsettlsVersion();
    void setTlsVersion(const std::string& value);

    /// <summary>
    /// **参数解释：** 加密算法套件组 **约束限制：** TLS版本仅选择1.0和（或）1.1时，不支持选择强加密套件。 **取值范围：** - default: 默认加密套件 - general: 一般加密套件 - strict: 强加密套件 - custom: 自定义加密套件  **默认取值：** 不涉及
    /// </summary>

    std::string getCipherSuiteGroup() const;
    bool cipherSuiteGroupIsSet() const;
    void unsetcipherSuiteGroup();
    void setCipherSuiteGroup(const std::string& value);

    /// <summary>
    /// **参数解释：** 加密套件 **约束限制：** - 当选择自定义加密套件时，必传 - 选择多个加密套件是以“,”分隔  **取值范围：** - ECDHE-ECDSA-AES128-GCM-SHA256 - ECDHE-ECDSA-AES256-GCM-SHA384 - ECDHE-RSA-AES128-GCM-SHA256 - ECDHE-RSA-AES256-GCM-SHA384 - DHE-RSA-AES128-GCM-SHA256 - DHE-RSA-AES256-GCM-SHA384 - ECDHE-ECDSA-AES128-SHA256 - ECDHE-ECDSA-AES256-SHA384 - ECDHE-RSA-AES128-SHA - ECDHE-RSA-AES128-SHA256 - ECDHE-RSA-AES256-SHA - ECDHE-RSA-AES256-SHA384 - DHE-RSA-AES128-SHA - DHE-RSA-AES128-SHA256 - DHE-RSA-AES256-SHA - DHE-RSA-AES256-SHA256 - AES128-GCM-SHA256 - AES256-GCM-SHA384 - AES128-SHA256 - AES256-SHA256 - ECDHE-ECDSA-CHACHA20-POLY1305 - ECDHE-RSA-CHACHA20-POLY1305 - DHE-RSA-CHACHA20-POLY1305 - ECDHE-ECDSA-AES128-SHA - ECDHE-ECDSA-AES256-SHA - AES128-SHA - AES256-SHA - DES-CBC3-SHA - RC4-SHA  **默认取值：** 不涉及
    /// </summary>

    std::string getCipherSuite() const;
    bool cipherSuiteIsSet() const;
    void unsetcipherSuite();
    void setCipherSuite(const std::string& value);


protected:
    std::string tlsVersion_;
    bool tlsVersionIsSet_;
    std::string cipherSuiteGroup_;
    bool cipherSuiteGroupIsSet_;
    std::string cipherSuite_;
    bool cipherSuiteIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_HttpsTlsVersion_H_
