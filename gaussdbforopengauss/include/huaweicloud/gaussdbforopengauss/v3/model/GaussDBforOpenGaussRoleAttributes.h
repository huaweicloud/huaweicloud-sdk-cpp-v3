
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_GaussDBforOpenGaussRoleAttributes_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_GaussDBforOpenGaussRoleAttributes_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 用户的权限属性。
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  GaussDBforOpenGaussRoleAttributes
    : public ModelBase
{
public:
    GaussDBforOpenGaussRoleAttributes();
    virtual ~GaussDBforOpenGaussRoleAttributes();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GaussDBforOpenGaussRoleAttributes members

    /// <summary>
    /// 数据库角色名称。 不能使用系统用户或角色，且名称必须存在。 系统用户/角色包括“rdsAdmin”,“rdsMetric”, “rdsBackup”, “rdsRepl”, “root”。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// SCHEMA名称。 不能和模板库以及系统内schema重名，且schema名称必须存在。 模板库包括postgres， template0 ，template1, 系统内schema包括public，information_schema。
    /// </summary>

    std::string getSchema() const;
    bool schemaIsSet() const;
    void unsetschema();
    void setSchema(const std::string& value);

    /// <summary>
    /// 数据库角色权限。 - true：只读。 - false：可读可写。
    /// </summary>

    bool isReadonly() const;
    bool readonlyIsSet() const;
    void unsetreadonly();
    void setReadonly(bool value);

    /// <summary>
    /// 数据库用户/角色名称。 该字段的含义是将此用户/角色的权限授予给name字段指定的角色，通过readonly字段判断是否授予只读权限。 不能和系统用户/角色名称相同，且用户/角色名称必须存在，系统用户/角色包括“rdsAdmin”,“ rdsMetric”, “rdsBackup”, “rdsRepl”, “root”。
    /// </summary>

    std::string getDefaultPrivilegeGrantee() const;
    bool defaultPrivilegeGranteeIsSet() const;
    void unsetdefaultPrivilegeGrantee();
    void setDefaultPrivilegeGrantee(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string schema_;
    bool schemaIsSet_;
    bool readonly_;
    bool readonlyIsSet_;
    std::string defaultPrivilegeGrantee_;
    bool defaultPrivilegeGranteeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_GaussDBforOpenGaussRoleAttributes_H_
