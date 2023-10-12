
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_HostClusterInfoDetail_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_HostClusterInfoDetail_H_


#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsdeploy/v2/model/PermissionClusterDetail.h>
#include <string>
#include <huaweicloud/codeartsdeploy/v2/model/UserInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 主机集群信息
/// </summary>
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  HostClusterInfoDetail
    : public ModelBase
{
public:
    HostClusterInfoDetail();
    virtual ~HostClusterInfoDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HostClusterInfoDetail members

    /// <summary>
    /// 主机集群id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 主机集群名
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 操作系统：windows|linux
    /// </summary>

    std::string getOs() const;
    bool osIsSet() const;
    void unsetos();
    void setOs(const std::string& value);

    /// <summary>
    /// slave集群id，默认为null时使用默认slave集群，用户自定义slave时为slave集群id
    /// </summary>

    std::string getSlaveClusterId() const;
    bool slaveClusterIdIsSet() const;
    void unsetslaveClusterId();
    void setSlaveClusterId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UserInfo getCreatedBy() const;
    bool createdByIsSet() const;
    void unsetcreatedBy();
    void setCreatedBy(const UserInfo& value);

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

    PermissionClusterDetail getPermission() const;
    bool permissionIsSet() const;
    void unsetpermission();
    void setPermission(const PermissionClusterDetail& value);

    /// <summary>
    /// 创建人名称
    /// </summary>

    std::string getNickName() const;
    bool nickNameIsSet() const;
    void unsetnickName();
    void setNickName(const std::string& value);

    /// <summary>
    /// 是否是代理模式
    /// </summary>

    int32_t getIsProxyMode() const;
    bool isProxyModeIsSet() const;
    void unsetisProxyMode();
    void setIsProxyMode(int32_t value);

    /// <summary>
    /// 创建时间
    /// </summary>

    std::string getCreatedTime() const;
    bool createdTimeIsSet() const;
    void unsetcreatedTime();
    void setCreatedTime(const std::string& value);

    /// <summary>
    /// 更新时间
    /// </summary>

    std::string getUpdatedTime() const;
    bool updatedTimeIsSet() const;
    void unsetupdatedTime();
    void setUpdatedTime(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string os_;
    bool osIsSet_;
    std::string slaveClusterId_;
    bool slaveClusterIdIsSet_;
    UserInfo createdBy_;
    bool createdByIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    PermissionClusterDetail permission_;
    bool permissionIsSet_;
    std::string nickName_;
    bool nickNameIsSet_;
    int32_t isProxyMode_;
    bool isProxyModeIsSet_;
    std::string createdTime_;
    bool createdTimeIsSet_;
    std::string updatedTime_;
    bool updatedTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_HostClusterInfoDetail_H_
