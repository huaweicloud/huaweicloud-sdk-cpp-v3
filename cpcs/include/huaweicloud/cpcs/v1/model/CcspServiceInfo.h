
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_CcspServiceInfo_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_CcspServiceInfo_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cpcs/v1/model/InstanceDistribution.h>

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
class HUAWEICLOUD_CPCS_V1_EXPORT  CcspServiceInfo
    : public ModelBase
{
public:
    CcspServiceInfo();
    virtual ~CcspServiceInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CcspServiceInfo members

    /// <summary>
    /// 当前租户拥有的密码服务集群数量
    /// </summary>

    int32_t getClusterNum() const;
    bool clusterNumIsSet() const;
    void unsetclusterNum();
    void setClusterNum(int32_t value);

    /// <summary>
    /// 当前租户拥有的密码服务实例数量
    /// </summary>

    int32_t getInstanceNum() const;
    bool instanceNumIsSet() const;
    void unsetinstanceNum();
    void setInstanceNum(int32_t value);

    /// <summary>
    /// 当前租户的可创建的密码服务实例配额数
    /// </summary>

    int32_t getInstanceQuota() const;
    bool instanceQuotaIsSet() const;
    void unsetinstanceQuota();
    void setInstanceQuota(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    InstanceDistribution getInstanceDistribution() const;
    bool instanceDistributionIsSet() const;
    void unsetinstanceDistribution();
    void setInstanceDistribution(const InstanceDistribution& value);


protected:
    int32_t clusterNum_;
    bool clusterNumIsSet_;
    int32_t instanceNum_;
    bool instanceNumIsSet_;
    int32_t instanceQuota_;
    bool instanceQuotaIsSet_;
    InstanceDistribution instanceDistribution_;
    bool instanceDistributionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_CcspServiceInfo_H_
