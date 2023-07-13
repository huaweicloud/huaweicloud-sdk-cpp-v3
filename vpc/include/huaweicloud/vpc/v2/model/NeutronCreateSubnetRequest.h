
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronCreateSubnetRequest_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronCreateSubnetRequest_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/NeutronCreateSubnetRequestBody.h>

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
class HUAWEICLOUD_VPC_V2_EXPORT  NeutronCreateSubnetRequest
    : public ModelBase
{
public:
    NeutronCreateSubnetRequest();
    virtual ~NeutronCreateSubnetRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NeutronCreateSubnetRequest members

    /// <summary>
    /// 
    /// </summary>

    NeutronCreateSubnetRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const NeutronCreateSubnetRequestBody& value);


protected:
    NeutronCreateSubnetRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    NeutronCreateSubnetRequest& dereference_from_shared_ptr(std::shared_ptr<NeutronCreateSubnetRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronCreateSubnetRequest_H_
