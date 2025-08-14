
#ifndef HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_IdpCertificateBody_H_
#define HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_IdpCertificateBody_H_


#include <huaweicloud/identitycenterstore/v1/IdentityCenterStoreExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_IDENTITYCENTERSTORE_V1_EXPORT  IdpCertificateBody
    : public ModelBase
{
public:
    IdpCertificateBody();
    virtual ~IdpCertificateBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IdpCertificateBody members

    /// <summary>
    /// 证书全局唯一标识符（ID）
    /// </summary>

    std::string getCertificateId() const;
    bool certificateIdIsSet() const;
    void unsetcertificateId();
    void setCertificateId(const std::string& value);

    /// <summary>
    /// 证书状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    std::string certificateId_;
    bool certificateIdIsSet_;
    std::string status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IDENTITYCENTERSTORE_V1_MODEL_IdpCertificateBody_H_
