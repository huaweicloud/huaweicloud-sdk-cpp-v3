
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_BatchUpdatePermissionLevelRequestBody_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_BatchUpdatePermissionLevelRequestBody_H_


#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 批量配置应用下鉴权级别请求体
/// </summary>
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  BatchUpdatePermissionLevelRequestBody
    : public ModelBase
{
public:
    BatchUpdatePermissionLevelRequestBody();
    virtual ~BatchUpdatePermissionLevelRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchUpdatePermissionLevelRequestBody members

    /// <summary>
    /// 项目id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 应用鉴权级别，instance：实例级；project：项目级
    /// </summary>

    std::string getPermissionLevel() const;
    bool permissionLevelIsSet() const;
    void unsetpermissionLevel();
    void setPermissionLevel(const std::string& value);

    /// <summary>
    /// 应用id列表
    /// </summary>

    std::vector<std::string>& getApplicationIds();
    bool applicationIdsIsSet() const;
    void unsetapplicationIds();
    void setApplicationIds(const std::vector<std::string>& value);


protected:
    std::string projectId_;
    bool projectIdIsSet_;
    std::string permissionLevel_;
    bool permissionLevelIsSet_;
    std::vector<std::string> applicationIds_;
    bool applicationIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_BatchUpdatePermissionLevelRequestBody_H_
