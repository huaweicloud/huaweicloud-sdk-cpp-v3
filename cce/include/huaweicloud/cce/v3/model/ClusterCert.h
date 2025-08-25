
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_ClusterCert_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_ClusterCert_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  ClusterCert
    : public ModelBase
{
public:
    ClusterCert();
    virtual ~ClusterCert();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ClusterCert members

    /// <summary>
    /// 服务器地址。
    /// </summary>

    std::string getServer() const;
    bool serverIsSet() const;
    void unsetserver();
    void setServer(const std::string& value);

    /// <summary>
    /// 证书授权数据。
    /// </summary>

    std::string getCertificateAuthorityData() const;
    bool certificateAuthorityDataIsSet() const;
    void unsetcertificateAuthorityData();
    void setCertificateAuthorityData(const std::string& value);

    /// <summary>
    /// 不校验服务端证书，在 cluster 类型为 externalCluster 时，该值为 true。
    /// </summary>

    bool isInsecureSkipTlsVerify() const;
    bool insecureSkipTlsVerifyIsSet() const;
    void unsetinsecureSkipTlsVerify();
    void setInsecureSkipTlsVerify(bool value);


protected:
    std::string server_;
    bool serverIsSet_;
    std::string certificateAuthorityData_;
    bool certificateAuthorityDataIsSet_;
    bool insecureSkipTlsVerify_;
    bool insecureSkipTlsVerifyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_ClusterCert_H_
