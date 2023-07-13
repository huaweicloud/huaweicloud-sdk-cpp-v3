
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_ShowVpcRequest_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_ShowVpcRequest_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_VPC_V2_EXPORT  ShowVpcRequest
    : public ModelBase
{
public:
    ShowVpcRequest();
    virtual ~ShowVpcRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowVpcRequest members

    /// <summary>
    /// 虚拟私有云ID
    /// </summary>

    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);


protected:
    std::string vpcId_;
    bool vpcIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowVpcRequest& dereference_from_shared_ptr(std::shared_ptr<ShowVpcRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_ShowVpcRequest_H_
