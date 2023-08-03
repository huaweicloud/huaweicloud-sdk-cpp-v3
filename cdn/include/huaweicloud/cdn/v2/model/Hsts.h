
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_Hsts_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_Hsts_H_

#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
/// HSTS：配置HSTS后，将强制客户端（如浏览器）使用 HTTPS 协议访问服务器，提升访问安全性。
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  Hsts
    : public ModelBase
{
public:
    Hsts();
    virtual ~Hsts();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// Hsts members

    /// <summary>
    /// 状态，on：打开，off：关闭。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 过期时间,即：响应头“Strict-Transport-Security”在客户端的缓存时间。单位:秒,取值范围:0~63072000。  &gt; status参数为on时，必传。
    /// </summary>

    int32_t getMaxAge() const;
    bool maxAgeIsSet() const;
    void unsetmaxAge();
    void setMaxAge(int32_t value);

    /// <summary>
    /// 包含子域名，on：包含，off：不包含。   &gt; status参数为on时，必传。
    /// </summary>

    std::string getIncludeSubdomains() const;
    bool includeSubdomainsIsSet() const;
    void unsetincludeSubdomains();
    void setIncludeSubdomains(const std::string& value);


protected:
    std::string status_;
    bool statusIsSet_;
    int32_t maxAge_;
    bool maxAgeIsSet_;
    std::string includeSubdomains_;
    bool includeSubdomainsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_Hsts_H_
