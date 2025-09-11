
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_InstanceActivateInfo_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_InstanceActivateInfo_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 实例激活信息
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  InstanceActivateInfo
    : public ModelBase
{
public:
    InstanceActivateInfo();
    virtual ~InstanceActivateInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InstanceActivateInfo members

    /// <summary>
    /// 代理DOMAIN名称
    /// </summary>

    std::string getDscProxyDomainName() const;
    bool dscProxyDomainNameIsSet() const;
    void unsetdscProxyDomainName();
    void setDscProxyDomainName(const std::string& value);

    /// <summary>
    /// 代理IP
    /// </summary>

    std::string getDscProxyIp() const;
    bool dscProxyIpIsSet() const;
    void unsetdscProxyIp();
    void setDscProxyIp(const std::string& value);

    /// <summary>
    /// 代理端口
    /// </summary>

    int32_t getDscProxyPort() const;
    bool dscProxyPortIsSet() const;
    void unsetdscProxyPort();
    void setDscProxyPort(int32_t value);

    /// <summary>
    /// 主节点ID
    /// </summary>

    std::string getMasterNodeId() const;
    bool masterNodeIdIsSet() const;
    void unsetmasterNodeId();
    void setMasterNodeId(const std::string& value);

    /// <summary>
    /// 备节点ID
    /// </summary>

    std::string getSlaveNodeId() const;
    bool slaveNodeIdIsSet() const;
    void unsetslaveNodeId();
    void setSlaveNodeId(const std::string& value);


protected:
    std::string dscProxyDomainName_;
    bool dscProxyDomainNameIsSet_;
    std::string dscProxyIp_;
    bool dscProxyIpIsSet_;
    int32_t dscProxyPort_;
    bool dscProxyPortIsSet_;
    std::string masterNodeId_;
    bool masterNodeIdIsSet_;
    std::string slaveNodeId_;
    bool slaveNodeIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_InstanceActivateInfo_H_
