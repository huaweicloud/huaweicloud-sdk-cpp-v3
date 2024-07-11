
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_DeploymentGroupDetail_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_DeploymentGroupDetail_H_


#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartsdeploy/v2/model/PermissionGroupDetail.h>
#include <huaweicloud/codeartsdeploy/v2/model/UserInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 主机集群详情响应体
/// </summary>
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  DeploymentGroupDetail
    : public ModelBase
{
public:
    DeploymentGroupDetail();
    virtual ~DeploymentGroupDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeploymentGroupDetail members

    /// <summary>
    /// 主机集群id
    /// </summary>

    std::string getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    std::string getCreatedTime() const;
    bool createdTimeIsSet() const;
    void unsetcreatedTime();
    void setCreatedTime(const std::string& value);

    /// <summary>
    /// 修改时间
    /// </summary>

    std::string getUpdatedTime() const;
    bool updatedTimeIsSet() const;
    void unsetupdatedTime();
    void setUpdatedTime(const std::string& value);

    /// <summary>
    /// 集群内主机数量，一个主机集群内最多可添加200台主机
    /// </summary>

    int32_t getHostCount() const;
    bool hostCountIsSet() const;
    void unsethostCount();
    void setHostCount(int32_t value);

    /// <summary>
    /// 项目名称
    /// </summary>

    std::string getProjectName() const;
    bool projectNameIsSet() const;
    void unsetprojectName();
    void setProjectName(const std::string& value);

    /// <summary>
    /// 主机集群名
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 局点信息
    /// </summary>

    std::string getRegionName() const;
    bool regionNameIsSet() const;
    void unsetregionName();
    void setRegionName(const std::string& value);

    /// <summary>
    /// 项目id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 操作系统：windows|linux
    /// </summary>

    std::string getOs() const;
    bool osIsSet() const;
    void unsetos();
    void setOs(const std::string& value);

    /// <summary>
    /// 自动测试功能已下架，该字段已失效
    /// </summary>

    int32_t getAutoConnectionTestSwitch() const;
    bool autoConnectionTestSwitchIsSet() const;
    void unsetautoConnectionTestSwitch();
    void setAutoConnectionTestSwitch(int32_t value);

    /// <summary>
    /// slave集群id，默认为null时使用默认slave集群，用户自定义slave时为slave集群id
    /// </summary>

    std::string getSlaveClusterId() const;
    bool slaveClusterIdIsSet() const;
    void unsetslaveClusterId();
    void setSlaveClusterId(const std::string& value);

    /// <summary>
    /// 用户昵称
    /// </summary>

    std::string getNickName() const;
    bool nickNameIsSet() const;
    void unsetnickName();
    void setNickName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UserInfo getCreatedBy() const;
    bool createdByIsSet() const;
    void unsetcreatedBy();
    void setCreatedBy(const UserInfo& value);

    /// <summary>
    /// 
    /// </summary>

    UserInfo getUpdatedBy() const;
    bool updatedByIsSet() const;
    void unsetupdatedBy();
    void setUpdatedBy(const UserInfo& value);

    /// <summary>
    /// 描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PermissionGroupDetail getPermission() const;
    bool permissionIsSet() const;
    void unsetpermission();
    void setPermission(const PermissionGroupDetail& value);


protected:
    std::string groupId_;
    bool groupIdIsSet_;
    std::string createdTime_;
    bool createdTimeIsSet_;
    std::string updatedTime_;
    bool updatedTimeIsSet_;
    int32_t hostCount_;
    bool hostCountIsSet_;
    std::string projectName_;
    bool projectNameIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string regionName_;
    bool regionNameIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string os_;
    bool osIsSet_;
    int32_t autoConnectionTestSwitch_;
    bool autoConnectionTestSwitchIsSet_;
    std::string slaveClusterId_;
    bool slaveClusterIdIsSet_;
    std::string nickName_;
    bool nickNameIsSet_;
    UserInfo createdBy_;
    bool createdByIsSet_;
    UserInfo updatedBy_;
    bool updatedByIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    PermissionGroupDetail permission_;
    bool permissionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_DeploymentGroupDetail_H_
