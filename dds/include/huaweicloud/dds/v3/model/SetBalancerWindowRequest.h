
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_SetBalancerWindowRequest_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_SetBalancerWindowRequest_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/dds/v3/model/BalancerActiveWindow.h>

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
class HUAWEICLOUD_DDS_V3_EXPORT  SetBalancerWindowRequest
    : public ModelBase
{
public:
    SetBalancerWindowRequest();
    virtual ~SetBalancerWindowRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SetBalancerWindowRequest members

    /// <summary>
    /// 实例ID，可以调用“查询实例列表和详情”接口获取。如果未申请实例，可以调用“创建实例”接口创建。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    BalancerActiveWindow getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BalancerActiveWindow& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    BalancerActiveWindow body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    SetBalancerWindowRequest& dereference_from_shared_ptr(std::shared_ptr<SetBalancerWindowRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_SetBalancerWindowRequest_H_
