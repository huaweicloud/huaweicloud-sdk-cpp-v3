
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_ListTenantVpcIgwsResponse_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_ListTenantVpcIgwsResponse_H_


#include <huaweicloud/eip/v3/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/eip/v3/model/VpcIgwsTenantResp.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_EIP_V3_EXPORT  ListTenantVpcIgwsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListTenantVpcIgwsResponse();
    virtual ~ListTenantVpcIgwsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTenantVpcIgwsResponse members

    /// <summary>
    /// 虚拟IGW列表对象
    /// </summary>

    std::vector<VpcIgwsTenantResp>& getVpcIgws();
    bool vpcIgwsIsSet() const;
    void unsetvpcIgws();
    void setVpcIgws(const std::vector<VpcIgwsTenantResp>& value);

    /// <summary>
    /// 本次请求编号
    /// </summary>

    std::string getRequestId() const;
    bool requestIdIsSet() const;
    void unsetrequestId();
    void setRequestId(const std::string& value);


protected:
    std::vector<VpcIgwsTenantResp> vpcIgws_;
    bool vpcIgwsIsSet_;
    std::string requestId_;
    bool requestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_ListTenantVpcIgwsResponse_H_
