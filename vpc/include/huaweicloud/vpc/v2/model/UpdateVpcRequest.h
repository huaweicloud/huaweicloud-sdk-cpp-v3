
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_UpdateVpcRequest_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_UpdateVpcRequest_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/UpdateVpcRequestBody.h>
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
class HUAWEICLOUD_VPC_V2_EXPORT  UpdateVpcRequest
    : public ModelBase
{
public:
    UpdateVpcRequest();
    virtual ~UpdateVpcRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateVpcRequest members

    /// <summary>
    /// 
    /// </summary>

    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateVpcRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateVpcRequestBody& value);


protected:
    std::string vpcId_;
    bool vpcIdIsSet_;
    UpdateVpcRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateVpcRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateVpcRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_UpdateVpcRequest_H_
