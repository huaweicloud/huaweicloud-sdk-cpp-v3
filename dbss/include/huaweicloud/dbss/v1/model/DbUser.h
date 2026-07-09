
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_DbUser_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_DbUser_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  DbUser
    : public ModelBase
{
public:
    DbUser();
    virtual ~DbUser();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DbUser members

    /// <summary>
    /// 用户名称
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// 用户权限
    /// </summary>

    std::string getUserPermission() const;
    bool userPermissionIsSet() const;
    void unsetuserPermission();
    void setUserPermission(const std::string& value);


protected:
    std::string userName_;
    bool userNameIsSet_;
    std::string userPermission_;
    bool userPermissionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_DbUser_H_
