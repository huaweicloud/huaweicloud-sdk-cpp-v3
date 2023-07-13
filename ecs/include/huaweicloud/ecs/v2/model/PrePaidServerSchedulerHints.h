
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_PrePaidServerSchedulerHints_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_PrePaidServerSchedulerHints_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  PrePaidServerSchedulerHints
    : public ModelBase
{
public:
    PrePaidServerSchedulerHints();
    virtual ~PrePaidServerSchedulerHints();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// PrePaidServerSchedulerHints members

    /// <summary>
    /// 云服务器组ID，UUID格式。  云服务器组的ID可以从控制台或者参考[查询云服务器组列表](https://support.huaweicloud.com/api-ecs/ecs_03_1402.html)获取。
    /// </summary>

    std::string getGroup() const;
    bool groupIsSet() const;
    void unsetgroup();
    void setGroup(const std::string& value);

    /// <summary>
    /// 在指定的专属主机或者共享主机上创建弹性云服务器。参数值为shared或者dedicated。
    /// </summary>

    std::string getTenancy() const;
    bool tenancyIsSet() const;
    void unsettenancy();
    void setTenancy(const std::string& value);

    /// <summary>
    /// 专属主机的ID。
    /// </summary>

    std::string getDedicatedHostId() const;
    bool dedicatedHostIdIsSet() const;
    void unsetdedicatedHostId();
    void setDedicatedHostId(const std::string& value);


protected:
    std::string group_;
    bool groupIsSet_;
    std::string tenancy_;
    bool tenancyIsSet_;
    std::string dedicatedHostId_;
    bool dedicatedHostIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_PrePaidServerSchedulerHints_H_
