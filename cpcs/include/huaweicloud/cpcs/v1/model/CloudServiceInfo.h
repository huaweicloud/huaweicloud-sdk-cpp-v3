
#ifndef HUAWEICLOUD_SDK_CPCS_V1_MODEL_CloudServiceInfo_H_
#define HUAWEICLOUD_SDK_CPCS_V1_MODEL_CloudServiceInfo_H_


#include <huaweicloud/cpcs/v1/CpcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cpcs/v1/model/ResourceDistribution.h>

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
class HUAWEICLOUD_CPCS_V1_EXPORT  CloudServiceInfo
    : public ModelBase
{
public:
    CloudServiceInfo();
    virtual ~CloudServiceInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CloudServiceInfo members

    /// <summary>
    /// 当前租户开通的云原生密码服务数量（只统计白名单服务情况）
    /// </summary>

    int32_t getServiceNum() const;
    bool serviceNumIsSet() const;
    void unsetserviceNum();
    void setServiceNum(int32_t value);

    /// <summary>
    /// 当前租户云原生密码服务的资源实例总和
    /// </summary>

    int32_t getResourceNum() const;
    bool resourceNumIsSet() const;
    void unsetresourceNum();
    void setResourceNum(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    ResourceDistribution getResourceDistribution() const;
    bool resourceDistributionIsSet() const;
    void unsetresourceDistribution();
    void setResourceDistribution(const ResourceDistribution& value);


protected:
    int32_t serviceNum_;
    bool serviceNumIsSet_;
    int32_t resourceNum_;
    bool resourceNumIsSet_;
    ResourceDistribution resourceDistribution_;
    bool resourceDistributionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CPCS_V1_MODEL_CloudServiceInfo_H_
