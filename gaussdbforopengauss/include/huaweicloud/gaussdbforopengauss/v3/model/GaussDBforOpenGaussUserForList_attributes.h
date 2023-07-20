
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_GaussDBforOpenGaussUserForList_attributes_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_GaussDBforOpenGaussUserForList_attributes_H_

#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


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
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  GaussDBforOpenGaussUserForList_attributes
    : public ModelBase
{
public:
    GaussDBforOpenGaussUserForList_attributes();
    virtual ~GaussDBforOpenGaussUserForList_attributes();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// GaussDBforOpenGaussUserForList_attributes members

    /// <summary>
    /// 用户是否具有超级用户权限，取值为“true”或“false”。
    /// </summary>

    bool isRolsuper() const;
    bool rolsuperIsSet() const;
    void unsetrolsuper();
    void setRolsuper(bool value);

    /// <summary>
    /// 用户是否自动继承其所属角色的权限，取值为“true”或“false”。
    /// </summary>

    bool isRolinherit() const;
    bool rolinheritIsSet() const;
    void unsetrolinherit();
    void setRolinherit(bool value);

    /// <summary>
    /// 用户是否支持创建其他子用户，取值为“true”或“false”。
    /// </summary>

    bool isRolcreaterole() const;
    bool rolcreateroleIsSet() const;
    void unsetrolcreaterole();
    void setRolcreaterole(bool value);

    /// <summary>
    /// 用户是否可以创建数据库，取值为“true”或“false”。
    /// </summary>

    bool isRolcreatedb() const;
    bool rolcreatedbIsSet() const;
    void unsetrolcreatedb();
    void setRolcreatedb(bool value);

    /// <summary>
    /// 用户是否可以登录数据库，取值为“true”或“false”。
    /// </summary>

    bool isRolcanlogin() const;
    bool rolcanloginIsSet() const;
    void unsetrolcanlogin();
    void setRolcanlogin(bool value);

    /// <summary>
    /// 用户连接实例的最大并发连接数。-1表示没有限制。
    /// </summary>

    int32_t getRolconnlimit() const;
    bool rolconnlimitIsSet() const;
    void unsetrolconnlimit();
    void setRolconnlimit(int32_t value);

    /// <summary>
    /// 用户是否属于复制角色，取值为“true”或“false”。
    /// </summary>

    bool isRolreplication() const;
    bool rolreplicationIsSet() const;
    void unsetrolreplication();
    void setRolreplication(bool value);

    /// <summary>
    /// 用户是否绕过每个行级安全策略，取值为“true”或“false”。
    /// </summary>

    bool isRolbypassrls() const;
    bool rolbypassrlsIsSet() const;
    void unsetrolbypassrls();
    void setRolbypassrls(bool value);


protected:
    bool rolsuper_;
    bool rolsuperIsSet_;
    bool rolinherit_;
    bool rolinheritIsSet_;
    bool rolcreaterole_;
    bool rolcreateroleIsSet_;
    bool rolcreatedb_;
    bool rolcreatedbIsSet_;
    bool rolcanlogin_;
    bool rolcanloginIsSet_;
    int32_t rolconnlimit_;
    bool rolconnlimitIsSet_;
    bool rolreplication_;
    bool rolreplicationIsSet_;
    bool rolbypassrls_;
    bool rolbypassrlsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_GaussDBforOpenGaussUserForList_attributes_H_
