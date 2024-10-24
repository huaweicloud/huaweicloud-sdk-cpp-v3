
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_Encryption_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_Encryption_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/live/v1/model/HttpHeader.h>
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
    /// 密钥缓存时间。如果密钥不变，默认缓存七天。  请注意：目前为保留字段，不支持配置。 
    /// </summary>

    int32_t getKeyRotationIntervalSeconds() const;
    bool keyRotationIntervalSecondsIsSet() const;
    void unsetkeyRotationIntervalSeconds();
    void setKeyRotationIntervalSeconds(int32_t value);

    /// <summary>
    /// 加密方式。  请注意：目前为保留字段，不支持配置。 
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

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);

    /// <summary>
    /// system_id枚举值。  取值如下： * HLS：FairPlay * DASH：Widevine、PlayReady * MSS：PlayReady 
    /// </summary>

    std::vector<std::string>& getSystemIds();
    bool systemIdsIsSet() const;
    void unsetsystemIds();
    void setSystemIds(const std::vector<std::string>& value);

    /// <summary>
    /// 获取密钥的DRM地址
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);

    /// <summary>
    /// drm speke 版本号 当前只支持1.0
    /// </summary>

    std::string getSpekeVersion() const;
    bool spekeVersionIsSet() const;
    void unsetspekeVersion();
    void setSpekeVersion(const std::string& value);

    /// <summary>
    /// 请求模式。  取值如下： * direct_http：HTTP(S)直接访问DRM。 * functiongraph_proxy：FunctionGraph代理访问DRM。 
    /// </summary>

    std::string getRequestMode() const;
    bool requestModeIsSet() const;
    void unsetrequestMode();
    void setRequestMode(const std::string& value);

    /// <summary>
    /// 需要添加在drm请求头中的鉴权信息。最多支持配置5个。  仅direct_http请求模式支持配置http_headers。 
    /// </summary>

    std::vector<HttpHeader>& getHttpHeaders();
    bool httpHeadersIsSet() const;
    void unsethttpHeaders();
    void setHttpHeaders(const std::vector<HttpHeader>& value);

    /// <summary>
    /// functiongraph_proxy请求模式需要提供functiongraph的urn。
    /// </summary>

    std::string getUrn() const;
    bool urnIsSet() const;
    void unseturn();
    void setUrn(const std::string& value);


protected:
    int32_t keyRotationIntervalSeconds_;
    bool keyRotationIntervalSecondsIsSet_;
    std::string encryptionMethod_;
    bool encryptionMethodIsSet_;
    std::string level_;
    bool levelIsSet_;
    std::string resourceId_;
    bool resourceIdIsSet_;
    std::vector<std::string> systemIds_;
    bool systemIdsIsSet_;
    std::string url_;
    bool urlIsSet_;
    std::string spekeVersion_;
    bool spekeVersionIsSet_;
    std::string requestMode_;
    bool requestModeIsSet_;
    std::vector<HttpHeader> httpHeaders_;
    bool httpHeadersIsSet_;
    std::string urn_;
    bool urnIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_Encryption_H_
