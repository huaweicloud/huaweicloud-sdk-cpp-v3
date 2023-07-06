
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_WebSocketSeek_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_WebSocketSeek_H_

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
/// webSocket配置。  &gt; 只有全站加速的域名支持该配置。
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  WebSocketSeek
    : public ModelBase
{
public:
    WebSocketSeek();
    virtual ~WebSocketSeek();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// WebSocketSeek members

    /// <summary>
    /// 开关， on 开启，off 关闭。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 请求建立连接后，会话的保持时间：范围：1-300，单位：秒。
    /// </summary>

    int32_t getTimeout() const;
    bool timeoutIsSet() const;
    void unsettimeout();
    void setTimeout(int32_t value);


protected:
    std::string status_;
    bool statusIsSet_;
    int32_t timeout_;
    bool timeoutIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_WebSocketSeek_H_
