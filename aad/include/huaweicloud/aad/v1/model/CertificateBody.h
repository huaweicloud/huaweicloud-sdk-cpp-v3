
#ifndef HUAWEICLOUD_SDK_AAD_V1_MODEL_CertificateBody_H_
#define HUAWEICLOUD_SDK_AAD_V1_MODEL_CertificateBody_H_


#include <huaweicloud/aad/v1/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_AAD_V1_EXPORT  CertificateBody
    : public ModelBase
{
public:
    CertificateBody();
    virtual ~CertificateBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CertificateBody members

    /// <summary>
    /// 操作类型。0 - 上传， 1 - 更换
    /// </summary>

    int32_t getOpType() const;
    bool opTypeIsSet() const;
    void unsetopType();
    void setOpType(int32_t value);

    /// <summary>
    /// 证书名称
    /// </summary>

    std::string getCertName() const;
    bool certNameIsSet() const;
    void unsetcertName();
    void setCertName(const std::string& value);

    /// <summary>
    /// 证书文件。上传新证书(op_type为0)时必填，更换为已有证书(op_type为1)时置空
    /// </summary>

    std::string getCertFile() const;
    bool certFileIsSet() const;
    void unsetcertFile();
    void setCertFile(const std::string& value);

    /// <summary>
    /// 私钥文件。上传新证书(op_type为0)时必填，更换为已有证书(op_type为1)时置空
    /// </summary>

    std::string getCertKeyFile() const;
    bool certKeyFileIsSet() const;
    void unsetcertKeyFile();
    void setCertKeyFile(const std::string& value);

    /// <summary>
    /// 域名id
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);


protected:
    int32_t opType_;
    bool opTypeIsSet_;
    std::string certName_;
    bool certNameIsSet_;
    std::string certFile_;
    bool certFileIsSet_;
    std::string certKeyFile_;
    bool certKeyFileIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V1_MODEL_CertificateBody_H_
