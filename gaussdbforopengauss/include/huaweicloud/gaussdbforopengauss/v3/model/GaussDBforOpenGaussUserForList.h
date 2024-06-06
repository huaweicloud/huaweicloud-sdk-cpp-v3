
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_GaussDBforOpenGaussUserForList_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_GaussDBforOpenGaussUserForList_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/GaussDBforOpenGaussUserForList_attribute.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 数据库用户信息。
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  GaussDBforOpenGaussUserForList
    : public ModelBase
{
public:
    GaussDBforOpenGaussUserForList();
    virtual ~GaussDBforOpenGaussUserForList();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GaussDBforOpenGaussUserForList members

    /// <summary>
    /// 帐号名。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    GaussDBforOpenGaussUserForList_attribute getAttribute() const;
    bool attributeIsSet() const;
    void unsetattribute();
    void setAttribute(const GaussDBforOpenGaussUserForList_attribute& value);

    /// <summary>
    /// 用户的默认权限。
    /// </summary>

    std::string getMemberof() const;
    bool memberofIsSet() const;
    void unsetmemberof();
    void setMemberof(const std::string& value);

    /// <summary>
    /// 用户是否被锁，取值为“true”或“false”。
    /// </summary>

    bool isLockStatus() const;
    bool lockStatusIsSet() const;
    void unsetlockStatus();
    void setLockStatus(bool value);


protected:
    std::string name_;
    bool nameIsSet_;
    GaussDBforOpenGaussUserForList_attribute attribute_;
    bool attributeIsSet_;
    std::string memberof_;
    bool memberofIsSet_;
    bool lockStatus_;
    bool lockStatusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_GaussDBforOpenGaussUserForList_H_
