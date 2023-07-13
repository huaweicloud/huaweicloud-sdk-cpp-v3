
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_CloudVpcInfo_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_CloudVpcInfo_H_

#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 数据库实例所在VPC，子网，安全组等信息，当数据库实例类型为ecs（华为云ECS自建数据库），cloud（华为云数据库）时为必填项。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  CloudVpcInfo
    : public ModelBase
{
public:
    CloudVpcInfo();
    virtual ~CloudVpcInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CloudVpcInfo members

    /// <summary>
    /// 数据库实例所在的虚拟私有云ID，获取方法如下： 方法1：登录虚拟私有云服务的控制台界面，在虚拟私有云的详情页面查找VPC ID。 方法2：通过虚拟私有云服务的API接口查询，具体操作可参考查询VPC列表。
    /// </summary>

    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);

    /// <summary>
    /// 数据库实例所在子网ID，获取方法如下： 方法1：登录虚拟私有云服务的控制台界面，单击VPC下的子网，进入子网详情页面，查找网络ID。 方法2：通过虚拟私有云服务的API接口查询，具体操作可参考查询子网列表。
    /// </summary>

    std::string getSubnetId() const;
    bool subnetIdIsSet() const;
    void unsetsubnetId();
    void setSubnetId(const std::string& value);

    /// <summary>
    /// 数据库实例所在的安全组ID，获取方法如下： 方法1：登录虚拟私有云服务的控制台界面，在安全组的详情页面查找安全组ID。 方法2：通过虚拟私有云服务的API接口查询，具体操作可参考查询安全组列表。
    /// </summary>

    std::string getSecurityGroupId() const;
    bool securityGroupIdIsSet() const;
    void unsetsecurityGroupId();
    void setSecurityGroupId(const std::string& value);


protected:
    std::string vpcId_;
    bool vpcIdIsSet_;
    std::string subnetId_;
    bool subnetIdIsSet_;
    std::string securityGroupId_;
    bool securityGroupIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_CloudVpcInfo_H_
