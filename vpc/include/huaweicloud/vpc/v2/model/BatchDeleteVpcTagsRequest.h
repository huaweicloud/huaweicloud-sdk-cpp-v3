
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_BatchDeleteVpcTagsRequest_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_BatchDeleteVpcTagsRequest_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/vpc/v2/model/BatchDeleteVpcTagsRequestBody.h>

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
class HUAWEICLOUD_VPC_V2_EXPORT  BatchDeleteVpcTagsRequest
    : public ModelBase
{
public:
    BatchDeleteVpcTagsRequest();
    virtual ~BatchDeleteVpcTagsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchDeleteVpcTagsRequest members

    /// <summary>
    /// 功能说明：虚拟私有云唯一标识 取值范围：合法UUID 约束：ID对应的VPC必须存在
    /// </summary>

    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    BatchDeleteVpcTagsRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchDeleteVpcTagsRequestBody& value);


protected:
    std::string vpcId_;
    bool vpcIdIsSet_;
    BatchDeleteVpcTagsRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchDeleteVpcTagsRequest& dereference_from_shared_ptr(std::shared_ptr<BatchDeleteVpcTagsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_BatchDeleteVpcTagsRequest_H_
