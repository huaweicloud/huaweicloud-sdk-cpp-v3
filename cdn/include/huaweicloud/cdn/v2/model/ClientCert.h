
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_ClientCert_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_ClientCert_H_


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
/// 客户端证书配置
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  ClientCert
    : public ModelBase
{
public:
    ClientCert();
    virtual ~ClientCert();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ClientCert members

    /// <summary>
    /// 客户端证书配置开关，on：打开；off：关闭。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 客户端CA证书的内容，仅支持PEM格式。
    /// </summary>

    std::string getTrustedCert() const;
    bool trustedCertIsSet() const;
    void unsettrustedCert();
    void setTrustedCert(const std::string& value);

    /// <summary>
    /// 客户端CA证书指定的域名。   &gt; 1. 如果不配置域名，则CDN会放行所有持有该CA证书的客户端请求。   &gt; 2. 最多可配置100个域名，多个域名用“,”或“|”分隔。
    /// </summary>

    std::string getHosts() const;
    bool hostsIsSet() const;
    void unsethosts();
    void setHosts(const std::string& value);


protected:
    std::string status_;
    bool statusIsSet_;
    std::string trustedCert_;
    bool trustedCertIsSet_;
    std::string hosts_;
    bool hostsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_ClientCert_H_
