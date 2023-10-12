
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_CheckPasswordRequestBody_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_CheckPasswordRequestBody_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  CheckPasswordRequestBody
    : public ModelBase
{
public:
    CheckPasswordRequestBody();
    virtual ~CheckPasswordRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CheckPasswordRequestBody members

    /// <summary>
    /// 数据库密码。取值范围：长度为8~32位，必须是大写字母（A~Z）、小写字母（a~z）、数字（0~9）、特殊字符~!@#%^*-_&#x3D;+?的组合。
    /// </summary>

    std::string getUserPwd() const;
    bool userPwdIsSet() const;
    void unsetuserPwd();
    void setUserPwd(const std::string& value);

    /// <summary>
    /// 数据库用户名称，默认为“rwuser”。取值范围：长度为1~64位，可以包含大写字母（A~Z）、小写字母（a~z）、数字（0~9）、中划线、下划线和点。
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// 用户所在的数据库，默认为“admin”。取值范围：长度为1~64位，可以包含大写字母（A~Z）、小写字母（a~z）、数字（0~9）、下划线。
    /// </summary>

    std::string getDbName() const;
    bool dbNameIsSet() const;
    void unsetdbName();
    void setDbName(const std::string& value);


protected:
    std::string userPwd_;
    bool userPwdIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    std::string dbName_;
    bool dbNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_CheckPasswordRequestBody_H_
