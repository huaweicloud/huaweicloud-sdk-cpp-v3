
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_KerberosVO_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_KerberosVO_H_

#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// kerberos认证需要的信息
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  KerberosVO
    : public ModelBase
{
public:
    KerberosVO();
    virtual ~KerberosVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// KerberosVO members

    /// <summary>
    /// krb5配置文件
    /// </summary>

    std::string getKrb5ConfFile() const;
    bool krb5ConfFileIsSet() const;
    void unsetkrb5ConfFile();
    void setKrb5ConfFile(const std::string& value);

    /// <summary>
    /// key文件
    /// </summary>

    std::string getKeyTabFile() const;
    bool keyTabFileIsSet() const;
    void unsetkeyTabFile();
    void setKeyTabFile(const std::string& value);

    /// <summary>
    /// 域名
    /// </summary>

    std::string getDomainName() const;
    bool domainNameIsSet() const;
    void unsetdomainName();
    void setDomainName(const std::string& value);

    /// <summary>
    /// Kerberos用户对象
    /// </summary>

    std::string getUserPrincipal() const;
    bool userPrincipalIsSet() const;
    void unsetuserPrincipal();
    void setUserPrincipal(const std::string& value);


protected:
    std::string krb5ConfFile_;
    bool krb5ConfFileIsSet_;
    std::string keyTabFile_;
    bool keyTabFileIsSet_;
    std::string domainName_;
    bool domainNameIsSet_;
    std::string userPrincipal_;
    bool userPrincipalIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_KerberosVO_H_
