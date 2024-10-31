
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_CreateFirewallResponse_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_CreateFirewallResponse_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cfw/v1/model/CreateFirewallReq.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  CreateFirewallResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateFirewallResponse();
    virtual ~CreateFirewallResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateFirewallResponse members

    /// <summary>
    /// 实例创建的任务id。仅创建按需实例时会返回该参数。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 订单号，创建包年包月时返回该参数。
    /// </summary>

    std::string getOrderId() const;
    bool orderIdIsSet() const;
    void unsetorderId();
    void setOrderId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CreateFirewallReq getData() const;
    bool dataIsSet() const;
    void unsetdata();
    void setData(const CreateFirewallReq& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string orderId_;
    bool orderIdIsSet_;
    CreateFirewallReq data_;
    bool dataIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_CreateFirewallResponse_H_
