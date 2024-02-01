
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_QueryProxyResponseV3_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_QueryProxyResponseV3_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/InstanceInfo.h>
#include <huaweicloud/rds/v3/model/ProxyInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 查询数据库代理详情信息返回体。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  QueryProxyResponseV3
    : public ModelBase
{
public:
    QueryProxyResponseV3();
    virtual ~QueryProxyResponseV3();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryProxyResponseV3 members

    /// <summary>
    /// 
    /// </summary>

    ProxyInfo getProxy() const;
    bool proxyIsSet() const;
    void unsetproxy();
    void setProxy(const ProxyInfo& value);

    /// <summary>
    /// 
    /// </summary>

    InstanceInfo getMasterInstance() const;
    bool masterInstanceIsSet() const;
    void unsetmasterInstance();
    void setMasterInstance(const InstanceInfo& value);

    /// <summary>
    /// 数据库只读实例信息。
    /// </summary>

    std::vector<InstanceInfo>& getReadonlyInstances();
    bool readonlyInstancesIsSet() const;
    void unsetreadonlyInstances();
    void setReadonlyInstances(const std::vector<InstanceInfo>& value);

    /// <summary>
    /// 安全组是否放通该数据库代理到数据库的网络地址。
    /// </summary>

    bool isProxySecurityGroupCheckResult() const;
    bool proxySecurityGroupCheckResultIsSet() const;
    void unsetproxySecurityGroupCheckResult();
    void setProxySecurityGroupCheckResult(bool value);


protected:
    ProxyInfo proxy_;
    bool proxyIsSet_;
    InstanceInfo masterInstance_;
    bool masterInstanceIsSet_;
    std::vector<InstanceInfo> readonlyInstances_;
    bool readonlyInstancesIsSet_;
    bool proxySecurityGroupCheckResult_;
    bool proxySecurityGroupCheckResultIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_QueryProxyResponseV3_H_
