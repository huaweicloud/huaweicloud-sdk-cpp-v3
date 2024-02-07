
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_ShowInternalVpcIgwResponse_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_ShowInternalVpcIgwResponse_H_


#include <huaweicloud/eip/v3/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/eip/v3/model/VpcIgwsTenantResp.h>

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
class HUAWEICLOUD_EIP_V3_EXPORT  ShowInternalVpcIgwResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowInternalVpcIgwResponse();
    virtual ~ShowInternalVpcIgwResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowInternalVpcIgwResponse members

    /// <summary>
    /// 
    /// </summary>

    VpcIgwsTenantResp getVpcIgw() const;
    bool vpcIgwIsSet() const;
    void unsetvpcIgw();
    void setVpcIgw(const VpcIgwsTenantResp& value);

    /// <summary>
    /// 本次请求编号
    /// </summary>

    std::string getRequestId() const;
    bool requestIdIsSet() const;
    void unsetrequestId();
    void setRequestId(const std::string& value);


protected:
    VpcIgwsTenantResp vpcIgw_;
    bool vpcIgwIsSet_;
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

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_ShowInternalVpcIgwResponse_H_
