
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_GmCertificateInfo_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_GmCertificateInfo_H_


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
class HUAWEICLOUD_LIVE_V1_EXPORT  GmCertificateInfo
    : public ModelBase
{
public:
    GmCertificateInfo();
    virtual ~GmCertificateInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GmCertificateInfo members

    /// <summary>
    /// 证书来源， 可选,  scm: 云证书管理服务，user：默认，用户自有
    /// </summary>

    std::string getSource() const;
    bool sourceIsSet() const;
    void unsetsource();
    void setSource(const std::string& value);

    /// <summary>
    /// SCM证书名， 可选
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
    /// 国密签名证书内容
    /// </summary>

    std::string getSignCertificate() const;
    bool signCertificateIsSet() const;
    void unsetsignCertificate();
    void setSignCertificate(const std::string& value);

    /// <summary>
    /// 国密签名私钥内容
    /// </summary>

    std::string getSignCertificateKey() const;
    bool signCertificateKeyIsSet() const;
    void unsetsignCertificateKey();
    void setSignCertificateKey(const std::string& value);

    /// <summary>
    /// 国密加密证书内容
    /// </summary>

    std::string getEncCertificate() const;
    bool encCertificateIsSet() const;
    void unsetencCertificate();
    void setEncCertificate(const std::string& value);

    /// <summary>
    /// 国密加密私钥内容
    /// </summary>

    std::string getEncCertificateKey() const;
    bool encCertificateKeyIsSet() const;
    void unsetencCertificateKey();
    void setEncCertificateKey(const std::string& value);


protected:
    std::string source_;
    bool sourceIsSet_;
    std::string certName_;
    bool certNameIsSet_;
    std::string certId_;
    bool certIdIsSet_;
    std::string signCertificate_;
    bool signCertificateIsSet_;
    std::string signCertificateKey_;
    bool signCertificateKeyIsSet_;
    std::string encCertificate_;
    bool encCertificateIsSet_;
    std::string encCertificateKey_;
    bool encCertificateKeyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_GmCertificateInfo_H_
