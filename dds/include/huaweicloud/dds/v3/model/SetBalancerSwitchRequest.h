
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_SetBalancerSwitchRequest_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_SetBalancerSwitchRequest_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  SetBalancerSwitchRequest
    : public ModelBase
{
public:
    SetBalancerSwitchRequest();
    virtual ~SetBalancerSwitchRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SetBalancerSwitchRequest members

    /// <summary>
    /// 实例ID，可以调用“查询实例列表和详情”接口获取。如果未申请实例，可以调用“创建实例”接口创建。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 开启或关闭集群均衡。
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string action_;
    bool actionIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    SetBalancerSwitchRequest& dereference_from_shared_ptr(std::shared_ptr<SetBalancerSwitchRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_SetBalancerSwitchRequest_H_
