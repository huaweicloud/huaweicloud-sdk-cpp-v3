
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_JobNodeVpcInfo_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_JobNodeVpcInfo_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
/// 任务实例VPC信息体。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  JobNodeVpcInfo
    : public ModelBase
{
public:
    JobNodeVpcInfo();
    virtual ~JobNodeVpcInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// JobNodeVpcInfo members

    /// <summary>
    /// 任务实例所在虚拟私有云ID。
    /// </summary>

    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);

    /// <summary>
    /// 任务实例所在子网ID。
    /// </summary>

    std::string getSubnetId() const;
    bool subnetIdIsSet() const;
    void unsetsubnetId();
    void setSubnetId(const std::string& value);

    /// <summary>
    /// 指定创建任务实例IP地址，多个IP端口之间请用“,”英文逗号分隔，目前仅支持设置IPv4地址，获取方法如下： - 方法1：登录虚拟私有云服务的控制台界面，单击VPC下的子网，进入子网详情页面，查找子网的网段，选择未被占用的IP 。 - 方法2：通过虚拟私有云服务的API接口查询，具体操作可参考查询私有IP列表，选择“device_owner”为空的私有IP。
    /// </summary>

    std::string getCustomNodeIp() const;
    bool customNodeIpIsSet() const;
    void unsetcustomNodeIp();
    void setCustomNodeIp(const std::string& value);

    /// <summary>
    /// 任务实例所在的安全组ID。
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
    std::string customNodeIp_;
    bool customNodeIpIsSet_;
    std::string securityGroupId_;
    bool securityGroupIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_JobNodeVpcInfo_H_
