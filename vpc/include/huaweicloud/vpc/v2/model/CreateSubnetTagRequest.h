
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateSubnetTagRequest_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateSubnetTagRequest_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/vpc/v2/model/CreateSubnetTagRequestBody.h>

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
class HUAWEICLOUD_VPC_V2_EXPORT  CreateSubnetTagRequest
    : public ModelBase
{
public:
    CreateSubnetTagRequest();
    virtual ~CreateSubnetTagRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateSubnetTagRequest members

    /// <summary>
    /// 子网ID
    /// </summary>

    std::string getSubnetId() const;
    bool subnetIdIsSet() const;
    void unsetsubnetId();
    void setSubnetId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CreateSubnetTagRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateSubnetTagRequestBody& value);


protected:
    std::string subnetId_;
    bool subnetIdIsSet_;
    CreateSubnetTagRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateSubnetTagRequest& dereference_from_shared_ptr(std::shared_ptr<CreateSubnetTagRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_CreateSubnetTagRequest_H_
