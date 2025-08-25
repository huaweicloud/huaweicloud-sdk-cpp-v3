
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_AssociationInfo_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_AssociationInfo_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CPCS_V1_EXPORT  AssociationInfo
    : public ModelBase
{
public:
    AssociationInfo();
    virtual ~AssociationInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AssociationInfo members

    /// <summary>
    /// 绑定关系ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 集群ID
    /// </summary>

    std::string getClusterId() const;
    bool clusterIdIsSet() const;
    void unsetclusterId();
    void setClusterId(const std::string& value);

    /// <summary>
    /// 集群名称
    /// </summary>

    std::string getClusterName() const;
    bool clusterNameIsSet() const;
    void unsetclusterName();
    void setClusterName(const std::string& value);

    /// <summary>
    /// 应用ID
    /// </summary>

    std::string getAppId() const;
    bool appIdIsSet() const;
    void unsetappId();
    void setAppId(const std::string& value);

    /// <summary>
    /// 应用名称
    /// </summary>

    std::string getAppName() const;
    bool appNameIsSet() const;
    void unsetappName();
    void setAppName(const std::string& value);

    /// <summary>
    /// 应用所属的VPC名称
    /// </summary>

    std::string getVpcName() const;
    bool vpcNameIsSet() const;
    void unsetvpcName();
    void setVpcName(const std::string& value);

    /// <summary>
    /// 应用所属的VPC的子网
    /// </summary>

    std::string getSubnetName() const;
    bool subnetNameIsSet() const;
    void unsetsubnetName();
    void setSubnetName(const std::string& value);

    /// <summary>
    /// 集群所属的服务
    /// </summary>

    std::string getClusterServerType() const;
    bool clusterServerTypeIsSet() const;
    void unsetclusterServerType();
    void setClusterServerType(const std::string& value);

    /// <summary>
    /// 访问地址
    /// </summary>

    std::string getVpcepAddress() const;
    bool vpcepAddressIsSet() const;
    void unsetvpcepAddress();
    void setVpcepAddress(const std::string& value);

    /// <summary>
    /// 绑定关系的最新更改时间，UNIX时间戳，单位毫秒
    /// </summary>

    int64_t getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(int64_t value);

    /// <summary>
    /// 绑定关系的创建时间，UNIX时间戳，单位毫秒
    /// </summary>

    int64_t getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(int64_t value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string clusterId_;
    bool clusterIdIsSet_;
    std::string clusterName_;
    bool clusterNameIsSet_;
    std::string appId_;
    bool appIdIsSet_;
    std::string appName_;
    bool appNameIsSet_;
    std::string vpcName_;
    bool vpcNameIsSet_;
    std::string subnetName_;
    bool subnetNameIsSet_;
    std::string clusterServerType_;
    bool clusterServerTypeIsSet_;
    std::string vpcepAddress_;
    bool vpcepAddressIsSet_;
    int64_t updateTime_;
    bool updateTimeIsSet_;
    int64_t createTime_;
    bool createTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_AssociationInfo_H_
