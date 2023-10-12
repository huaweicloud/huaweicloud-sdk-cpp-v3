
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ADDomainInfo_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ADDomainInfo_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 域信息，加域实例单转主备时必填，非加域实例不需要填写
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ADDomainInfo
    : public ModelBase
{
public:
    ADDomainInfo();
    virtual ~ADDomainInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ADDomainInfo members

    /// <summary>
    /// 域管理员账号名
    /// </summary>

    std::string getDomainAdminAccountName() const;
    bool domainAdminAccountNameIsSet() const;
    void unsetdomainAdminAccountName();
    void setDomainAdminAccountName(const std::string& value);

    /// <summary>
    /// 域管理员密码
    /// </summary>

    std::string getDomainAdminPwd() const;
    bool domainAdminPwdIsSet() const;
    void unsetdomainAdminPwd();
    void setDomainAdminPwd(const std::string& value);


protected:
    std::string domainAdminAccountName_;
    bool domainAdminAccountNameIsSet_;
    std::string domainAdminPwd_;
    bool domainAdminPwdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ADDomainInfo_H_
