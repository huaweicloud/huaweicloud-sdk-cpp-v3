
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_ShowVerifyDomainOwnerInfoResponse_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_ShowVerifyDomainOwnerInfoResponse_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  ShowVerifyDomainOwnerInfoResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowVerifyDomainOwnerInfoResponse();
    virtual ~ShowVerifyDomainOwnerInfoResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowVerifyDomainOwnerInfoResponse members

    /// <summary>
    /// DNS解析类型。取值意义： - TXT：TXT记录
    /// </summary>

    std::string getDnsVerifyType() const;
    bool dnsVerifyTypeIsSet() const;
    void unsetdnsVerifyType();
    void setDnsVerifyType(const std::string& value);

    /// <summary>
    /// DNS解析主机记录名称。
    /// </summary>

    std::string getDnsVerifyName() const;
    bool dnsVerifyNameIsSet() const;
    void unsetdnsVerifyName();
    void setDnsVerifyName(const std::string& value);

    /// <summary>
    /// 文件校验URL地址。
    /// </summary>

    std::string getFileVerifyUrl() const;
    bool fileVerifyUrlIsSet() const;
    void unsetfileVerifyUrl();
    void setFileVerifyUrl(const std::string& value);

    /// <summary>
    /// 加速域名。
    /// </summary>

    std::string getDomainName() const;
    bool domainNameIsSet() const;
    void unsetdomainName();
    void setDomainName(const std::string& value);

    /// <summary>
    /// 校验域名。
    /// </summary>

    std::string getVerifyDomainName() const;
    bool verifyDomainNameIsSet() const;
    void unsetverifyDomainName();
    void setVerifyDomainName(const std::string& value);

    /// <summary>
    /// 文件校验的校验文件名。
    /// </summary>

    std::string getFileVerifyFilename() const;
    bool fileVerifyFilenameIsSet() const;
    void unsetfileVerifyFilename();
    void setFileVerifyFilename(const std::string& value);

    /// <summary>
    /// 校验值，解析值或者文件内容。
    /// </summary>

    std::string getVerifyContent() const;
    bool verifyContentIsSet() const;
    void unsetverifyContent();
    void setVerifyContent(const std::string& value);

    /// <summary>
    /// 文件校验域名列表。
    /// </summary>

    std::vector<std::string>& getFileVerifyDomains();
    bool fileVerifyDomainsIsSet() const;
    void unsetfileVerifyDomains();
    void setFileVerifyDomains(const std::vector<std::string>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::string dnsVerifyType_;
    bool dnsVerifyTypeIsSet_;
    std::string dnsVerifyName_;
    bool dnsVerifyNameIsSet_;
    std::string fileVerifyUrl_;
    bool fileVerifyUrlIsSet_;
    std::string domainName_;
    bool domainNameIsSet_;
    std::string verifyDomainName_;
    bool verifyDomainNameIsSet_;
    std::string fileVerifyFilename_;
    bool fileVerifyFilenameIsSet_;
    std::string verifyContent_;
    bool verifyContentIsSet_;
    std::vector<std::string> fileVerifyDomains_;
    bool fileVerifyDomainsIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_ShowVerifyDomainOwnerInfoResponse_H_
