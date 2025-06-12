
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CallBackConfig_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CallBackConfig_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  CallBackConfig
    : public ModelBase
{
public:
    CallBackConfig();
    virtual ~CallBackConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CallBackConfig members

    /// <summary>
    /// 回调URL。  回调请求body为json格式，带参数如下：  result: SUCCEED或FAILED  asset_id: 资产ID  job_id: 任务
    /// </summary>

    std::string getCallbackUrl() const;
    bool callbackUrlIsSet() const;
    void unsetcallbackUrl();
    void setCallbackUrl(const std::string& value);

    /// <summary>
    /// 认证类型。 * NONE。URL中自带认证。 * MSS_A。HMACSHA256签名模式，在URL中追加参数:secret,time_stamp。取值方式：secret&#x3D;hmac_sha256(key, URI（callback_url）+ time_stamp)&amp;time_stamp&#x3D;hex(timestamp)
    /// </summary>

    std::string getAuthType() const;
    bool authTypeIsSet() const;
    void unsetauthType();
    void setAuthType(const std::string& value);

    /// <summary>
    /// 密钥Key
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);


protected:
    std::string callbackUrl_;
    bool callbackUrlIsSet_;
    std::string authType_;
    bool authTypeIsSet_;
    std::string key_;
    bool keyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CallBackConfig_H_
