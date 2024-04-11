
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_Sni_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_Sni_H_


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
/// 回源SNI。
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  Sni
    : public ModelBase
{
public:
    Sni();
    virtual ~Sni();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Sni members

    /// <summary>
    /// 是否开启回源SNI，on：打开，off：关闭。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// CDN节点回源需要访问的源站域名。如test.example.com。   &gt; 1. 开启回源SNI时必填。   &gt; 2. 不支持泛域名，仅支持输入数字、“-”、“.”、英文大小写字符。
    /// </summary>

    std::string getServerName() const;
    bool serverNameIsSet() const;
    void unsetserverName();
    void setServerName(const std::string& value);


protected:
    std::string status_;
    bool statusIsSet_;
    std::string serverName_;
    bool serverNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_Sni_H_
