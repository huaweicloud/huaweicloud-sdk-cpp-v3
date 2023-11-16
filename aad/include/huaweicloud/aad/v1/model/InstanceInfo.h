
#ifndef HUAWEICLOUD_SDK_AAD_V1_MODEL_InstanceInfo_H_
#define HUAWEICLOUD_SDK_AAD_V1_MODEL_InstanceInfo_H_


#include <huaweicloud/aad/v1/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/aad/v1/model/InstanceIpInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_AAD_V1_EXPORT  InstanceInfo
    : public ModelBase
{
public:
    InstanceInfo();
    virtual ~InstanceInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InstanceInfo members

    /// <summary>
    /// 实例ID
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 实例名
    /// </summary>

    std::string getInstanceName() const;
    bool instanceNameIsSet() const;
    void unsetinstanceName();
    void setInstanceName(const std::string& value);

    /// <summary>
    /// 实例IP
    /// </summary>

    std::vector<InstanceIpInfo>& getIps();
    bool ipsIsSet() const;
    void unsetips();
    void setIps(const std::vector<InstanceIpInfo>& value);

    /// <summary>
    /// 实例过期时间
    /// </summary>

    int64_t getExpireTime() const;
    bool expireTimeIsSet() const;
    void unsetexpireTime();
    void setExpireTime(int64_t value);

    /// <summary>
    /// 业务带宽
    /// </summary>

    int32_t getServiceBandwidth() const;
    bool serviceBandwidthIsSet() const;
    void unsetserviceBandwidth();
    void setServiceBandwidth(int32_t value);

    /// <summary>
    /// 实例状态
    /// </summary>

    int32_t getInstanceStatus() const;
    bool instanceStatusIsSet() const;
    void unsetinstanceStatus();
    void setInstanceStatus(int32_t value);

    /// <summary>
    /// 企业项目ID
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string instanceName_;
    bool instanceNameIsSet_;
    std::vector<InstanceIpInfo> ips_;
    bool ipsIsSet_;
    int64_t expireTime_;
    bool expireTimeIsSet_;
    int32_t serviceBandwidth_;
    bool serviceBandwidthIsSet_;
    int32_t instanceStatus_;
    bool instanceStatusIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V1_MODEL_InstanceInfo_H_
