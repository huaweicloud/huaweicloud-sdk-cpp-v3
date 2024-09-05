
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_TlsCertificateInfo_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_TlsCertificateInfo_H_


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
class HUAWEICLOUD_LIVE_V1_EXPORT  TlsCertificateInfo
    : public ModelBase
{
public:
    TlsCertificateInfo();
    virtual ~TlsCertificateInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TlsCertificateInfo members

    /// <summary>
    /// 证书来源， 可选,  scm: 云证书管理服务，user：默认，用户自有
    /// </summary>

    std::string getSource() const;
    bool sourceIsSet() const;
    void unsetsource();
    void setSource(const std::string& value);

    /// <summary>
    /// SCM证书名， 证书来源为scm时可选
    /// </summary>

    std::string getCertName() const;
    bool certNameIsSet() const;
    void unsetcertName();
    void setCertName(const std::string& value);

    /// <summary>
    /// SCM证书ID, 证书来源为scm时必选
    /// </summary>

    std::string getCertId() const;
    bool certIdIsSet() const;
    void unsetcertId();
    void setCertId(const std::string& value);

    /// <summary>
    /// 证书内容，证书来源为user时必选
    /// </summary>

    std::string getCertificate() const;
    bool certificateIsSet() const;
    void unsetcertificate();
    void setCertificate(const std::string& value);

    /// <summary>
    /// 私钥内容，证书来源为user时必选
    /// </summary>

    std::string getCertificateKey() const;
    bool certificateKeyIsSet() const;
    void unsetcertificateKey();
    void setCertificateKey(const std::string& value);


protected:
    std::string source_;
    bool sourceIsSet_;
    std::string certName_;
    bool certNameIsSet_;
    std::string certId_;
    bool certIdIsSet_;
    std::string certificate_;
    bool certificateIsSet_;
    std::string certificateKey_;
    bool certificateKeyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_TlsCertificateInfo_H_
