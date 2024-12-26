
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_GaussDBListDatabaseRoles_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_GaussDBListDatabaseRoles_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/GaussDBListDatabaseRolesPriv.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  GaussDBListDatabaseRoles
    : public ModelBase
{
public:
    GaussDBListDatabaseRoles();
    virtual ~GaussDBListDatabaseRoles();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GaussDBListDatabaseRoles members

    /// <summary>
    /// 数据库用户/角色名。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 用户/角色的默认权限。
    /// </summary>

    std::string getMemberof() const;
    bool memberofIsSet() const;
    void unsetmemberof();
    void setMemberof(const std::string& value);

    /// <summary>
    /// 用户/角色是否被锁。
    /// </summary>

    bool isLockStatus() const;
    bool lockStatusIsSet() const;
    void unsetlockStatus();
    void setLockStatus(bool value);

    /// <summary>
    /// 
    /// </summary>

    GaussDBListDatabaseRolesPriv getAttribute() const;
    bool attributeIsSet() const;
    void unsetattribute();
    void setAttribute(const GaussDBListDatabaseRolesPriv& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string memberof_;
    bool memberofIsSet_;
    bool lockStatus_;
    bool lockStatusIsSet_;
    GaussDBListDatabaseRolesPriv attribute_;
    bool attributeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_GaussDBListDatabaseRoles_H_
