
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_BatchCreateSecurityGroupTagsRequest_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_BatchCreateSecurityGroupTagsRequest_H_


#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/BatchCreateSecurityGroupTagsRequestBody.h>
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
class HUAWEICLOUD_VPC_V2_EXPORT  BatchCreateSecurityGroupTagsRequest
    : public ModelBase
{
public:
    BatchCreateSecurityGroupTagsRequest();
    virtual ~BatchCreateSecurityGroupTagsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchCreateSecurityGroupTagsRequest members

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

    BatchCreateSecurityGroupTagsRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchCreateSecurityGroupTagsRequestBody& value);


protected:
    std::string securityGroupId_;
    bool securityGroupIdIsSet_;
    BatchCreateSecurityGroupTagsRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchCreateSecurityGroupTagsRequest& dereference_from_shared_ptr(std::shared_ptr<BatchCreateSecurityGroupTagsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_BatchCreateSecurityGroupTagsRequest_H_
