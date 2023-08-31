
#ifndef HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_EnvironmentDetail_H_
#define HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_EnvironmentDetail_H_

#include <huaweicloud/codeartsdeploy/v2/CodeArtsDeployExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsdeploy/v2/model/EnvironmentPermissionDetail.h>
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
/// 环境详情
/// </summary>
class HUAWEICLOUD_CODEARTSDEPLOY_V2_EXPORT  EnvironmentDetail
    : public ModelBase
{
public:
    EnvironmentDetail();
    virtual ~EnvironmentDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// EnvironmentDetail members

    /// <summary>
    /// 环境id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 环境名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 环境描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 操作系统
    /// </summary>

    std::string getOs() const;
    bool osIsSet() const;
    void unsetos();
    void setOs(const std::string& value);

    /// <summary>
    /// 用户昵称
    /// </summary>

    std::string getNickName() const;
    bool nickNameIsSet() const;
    void unsetnickName();
    void setNickName(const std::string& value);

    /// <summary>
    /// 部署类型：0表示主机, 1表示kubernetes
    /// </summary>

    int32_t getDeployType() const;
    bool deployTypeIsSet() const;
    void unsetdeployType();
    void setDeployType(int32_t value);

    /// <summary>
    /// 创建时间
    /// </summary>

    std::string getCreatedTime() const;
    bool createdTimeIsSet() const;
    void unsetcreatedTime();
    void setCreatedTime(const std::string& value);

    /// <summary>
    /// 环境下主机实例数量
    /// </summary>

    int32_t getInstanceCount() const;
    bool instanceCountIsSet() const;
    void unsetinstanceCount();
    void setInstanceCount(int32_t value);

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

    EnvironmentPermissionDetail getPermission() const;
    bool permissionIsSet() const;
    void unsetpermission();
    void setPermission(const EnvironmentPermissionDetail& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string os_;
    bool osIsSet_;
    std::string nickName_;
    bool nickNameIsSet_;
    int32_t deployType_;
    bool deployTypeIsSet_;
    std::string createdTime_;
    bool createdTimeIsSet_;
    int32_t instanceCount_;
    bool instanceCountIsSet_;
    UserInfo createdBy_;
    bool createdByIsSet_;
    EnvironmentPermissionDetail permission_;
    bool permissionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSDEPLOY_V2_MODEL_EnvironmentDetail_H_
