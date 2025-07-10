
#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_UpdateKeystorePermissionRequestBody_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_UpdateKeystorePermissionRequestBody_H_


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
class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  UpdateKeystorePermissionRequestBody
    : public ModelBase
{
public:
    UpdateKeystorePermissionRequestBody();
    virtual ~UpdateKeystorePermissionRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateKeystorePermissionRequestBody members

    /// <summary>
    /// can_absent
    /// </summary>

    bool isCanAbsent() const;
    bool canAbsentIsSet() const;
    void unsetcanAbsent();
    void setCanAbsent(bool value);

    /// <summary>
    /// delete
    /// </summary>

    bool isDelete() const;
    bool deleteIsSet() const;
    void unsetdelete();
    void setDelete(bool value);

    /// <summary>
    /// id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// keystore_id
    /// </summary>

    std::string getKeystoreId() const;
    bool keystoreIdIsSet() const;
    void unsetkeystoreId();
    void setKeystoreId(const std::string& value);

    /// <summary>
    /// modify
    /// </summary>

    bool isModify() const;
    bool modifyIsSet() const;
    void unsetmodify();
    void setModify(bool value);

    /// <summary>
    /// usage
    /// </summary>

    bool isUsage() const;
    bool usageIsSet() const;
    void unsetusage();
    void setUsage(bool value);

    /// <summary>
    /// user_name
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);


protected:
    bool canAbsent_;
    bool canAbsentIsSet_;
    bool delete_;
    bool deleteIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string keystoreId_;
    bool keystoreIdIsSet_;
    bool modify_;
    bool modifyIsSet_;
    bool usage_;
    bool usageIsSet_;
    std::string userName_;
    bool userNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_MODEL_UpdateKeystorePermissionRequestBody_H_
