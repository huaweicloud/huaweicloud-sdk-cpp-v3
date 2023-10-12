
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_DomainHttpsCertInfo_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_DomainHttpsCertInfo_H_


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
class HUAWEICLOUD_LIVE_V1_EXPORT  DomainHttpsCertInfo
    : public ModelBase
{
public:
    DomainHttpsCertInfo();
    virtual ~DomainHttpsCertInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DomainHttpsCertInfo members

    /// <summary>
    /// 证书格式，默认为PEM，当前只支持PEM格式
    /// </summary>

    std::string getCertificateFormat() const;
    bool certificateFormatIsSet() const;
    void unsetcertificateFormat();
    void setCertificateFormat(const std::string& value);

    /// <summary>
    /// 证书内容
    /// </summary>

    std::string getCertificate() const;
    bool certificateIsSet() const;
    void unsetcertificate();
    void setCertificate(const std::string& value);

    /// <summary>
    /// 私钥内容
    /// </summary>

    std::string getCertificateKey() const;
    bool certificateKeyIsSet() const;
    void unsetcertificateKey();
    void setCertificateKey(const std::string& value);

    /// <summary>
    /// 是否开启重定向，默认false
    /// </summary>

    bool isForceRedirect() const;
    bool forceRedirectIsSet() const;
    void unsetforceRedirect();
    void setForceRedirect(bool value);


protected:
    std::string certificateFormat_;
    bool certificateFormatIsSet_;
    std::string certificate_;
    bool certificateIsSet_;
    std::string certificateKey_;
    bool certificateKeyIsSet_;
    bool forceRedirect_;
    bool forceRedirectIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_DomainHttpsCertInfo_H_
