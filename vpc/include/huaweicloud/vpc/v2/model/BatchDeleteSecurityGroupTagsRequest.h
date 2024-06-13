
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_BatchDeleteSecurityGroupTagsRequest_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_BatchDeleteSecurityGroupTagsRequest_H_


#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/BatchDeleteSecurityGroupTagsRequestBody.h>
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
class HUAWEICLOUD_VPC_V2_EXPORT  BatchDeleteSecurityGroupTagsRequest
    : public ModelBase
{
public:
    BatchDeleteSecurityGroupTagsRequest();
    virtual ~BatchDeleteSecurityGroupTagsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeleteSecurityGroupTagsRequest members

    /// <summary>
    /// 安全组资源ID
    /// </summary>

    std::string getSecurityGroupId() const;
    bool securityGroupIdIsSet() const;
    void unsetsecurityGroupId();
    void setSecurityGroupId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    BatchDeleteSecurityGroupTagsRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchDeleteSecurityGroupTagsRequestBody& value);


protected:
    std::string securityGroupId_;
    bool securityGroupIdIsSet_;
    BatchDeleteSecurityGroupTagsRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchDeleteSecurityGroupTagsRequest& dereference_from_shared_ptr(std::shared_ptr<BatchDeleteSecurityGroupTagsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_BatchDeleteSecurityGroupTagsRequest_H_
