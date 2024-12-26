
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_AllowDbRolePrivilegesRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_AllowDbRolePrivilegesRequestBody_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/GaussDBforOpenGaussRoleAttributes.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 授权数据库角色。
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  AllowDbRolePrivilegesRequestBody
    : public ModelBase
{
public:
    AllowDbRolePrivilegesRequestBody();
    virtual ~AllowDbRolePrivilegesRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AllowDbRolePrivilegesRequestBody members

    /// <summary>
    /// 数据库名称。 不能使用模板库，且是已存在的数据库名称。 模板库包括postgres， template0 ，template1，templatea，template_pdb，templatem。
    /// </summary>

    std::string getDbName() const;
    bool dbNameIsSet() const;
    void unsetdbName();
    void setDbName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    GaussDBforOpenGaussRoleAttributes getUser() const;
    bool userIsSet() const;
    void unsetuser();
    void setUser(const GaussDBforOpenGaussRoleAttributes& value);


protected:
    std::string dbName_;
    bool dbNameIsSet_;
    GaussDBforOpenGaussRoleAttributes user_;
    bool userIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_AllowDbRolePrivilegesRequestBody_H_
