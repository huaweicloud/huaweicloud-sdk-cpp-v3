
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_CertInfoResp_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_CertInfoResp_H_


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
/// 
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  CertInfoResp
    : public ModelBase
{
public:
    CertInfoResp();
    virtual ~CertInfoResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CertInfoResp members

    /// <summary>
    /// 播放域名
    /// </summary>

    std::string getPlayDomain() const;
    bool playDomainIsSet() const;
    void unsetplayDomain();
    void setPlayDomain(const std::string& value);

    /// <summary>
    /// 租户ID
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 租户名
    /// </summary>

    std::string getTenantName() const;
    bool tenantNameIsSet() const;
    void unsettenantName();
    void setTenantName(const std::string& value);

    /// <summary>
    /// 证书开始时间，格式：YYYY-MM-DDTHH:mm:ssZ，UTC时间
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 证书过期时间，格式：YYYY-MM-DDTHH:mm:ssZ，UTC时间
    /// </summary>

    std::string getExpireTime() const;
    bool expireTimeIsSet() const;
    void unsetexpireTime();
    void setExpireTime(const std::string& value);

    /// <summary>
    /// 证书类型, 1：国密证书， 0:默认，标准国际证书
    /// </summary>

    int32_t getCertType() const;
    bool certTypeIsSet() const;
    void unsetcertType();
    void setCertType(int32_t value);

    /// <summary>
    /// 国密证书类型, 1：签名证书， 2:加密证书
    /// </summary>

    int32_t getGmCertType() const;
    bool gmCertTypeIsSet() const;
    void unsetgmCertType();
    void setGmCertType(int32_t value);

    /// <summary>
    /// 证书来源。 - scm：云证书与管理服务CCM。 - user：自有证书。
    /// </summary>

    std::string getSource() const;
    bool sourceIsSet() const;
    void unsetsource();
    void setSource(const std::string& value);

    /// <summary>
    /// scm来源的证书名, 自有证书为空
    /// </summary>

    std::string getCertName() const;
    bool certNameIsSet() const;
    void unsetcertName();
    void setCertName(const std::string& value);

    /// <summary>
    /// scm来源的证书ID, 自有证书为空
    /// </summary>

    std::string getCertId() const;
    bool certIdIsSet() const;
    void unsetcertId();
    void setCertId(const std::string& value);


protected:
    std::string playDomain_;
    bool playDomainIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string tenantName_;
    bool tenantNameIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string expireTime_;
    bool expireTimeIsSet_;
    int32_t certType_;
    bool certTypeIsSet_;
    int32_t gmCertType_;
    bool gmCertTypeIsSet_;
    std::string source_;
    bool sourceIsSet_;
    std::string certName_;
    bool certNameIsSet_;
    std::string certId_;
    bool certIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_CertInfoResp_H_
