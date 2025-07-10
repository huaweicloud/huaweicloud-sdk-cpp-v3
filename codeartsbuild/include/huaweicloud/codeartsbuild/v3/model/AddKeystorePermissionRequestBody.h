
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_AddKeystorePermissionRequestBody_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_AddKeystorePermissionRequestBody_H_


#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 执行任务接口请求体
/// </summary>
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  AddKeystorePermissionRequestBody
    : public ModelBase
{
public:
    AddKeystorePermissionRequestBody();
    virtual ~AddKeystorePermissionRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddKeystorePermissionRequestBody members

    /// <summary>
    /// 是否有删除权限
    /// </summary>

    bool isDelete() const;
    bool deleteIsSet() const;
    void unsetdelete();
    void setDelete(bool value);

    /// <summary>
    /// 文件密钥id
    /// </summary>

    std::string getKeystoreId() const;
    bool keystoreIdIsSet() const;
    void unsetkeystoreId();
    void setKeystoreId(const std::string& value);

    /// <summary>
    /// 是否有修改权限
    /// </summary>

    bool isModify() const;
    bool modifyIsSet() const;
    void unsetmodify();
    void setModify(bool value);

    /// <summary>
    /// 是否有使用权限
    /// </summary>

    bool isUsage() const;
    bool usageIsSet() const;
    void unsetusage();
    void setUsage(bool value);

    /// <summary>
    /// 用户名
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// 是否有设置权限
    /// </summary>

    bool isSetting() const;
    bool settingIsSet() const;
    void unsetsetting();
    void setSetting(bool value);

    /// <summary>
    /// 是否可编辑
    /// </summary>

    bool isCanAbsent() const;
    bool canAbsentIsSet() const;
    void unsetcanAbsent();
    void setCanAbsent(bool value);


protected:
    bool delete_;
    bool deleteIsSet_;
    std::string keystoreId_;
    bool keystoreIdIsSet_;
    bool modify_;
    bool modifyIsSet_;
    bool usage_;
    bool usageIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    bool setting_;
    bool settingIsSet_;
    bool canAbsent_;
    bool canAbsentIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_AddKeystorePermissionRequestBody_H_
