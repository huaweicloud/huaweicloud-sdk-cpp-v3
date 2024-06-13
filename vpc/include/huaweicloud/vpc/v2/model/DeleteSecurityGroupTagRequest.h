
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_DeleteSecurityGroupTagRequest_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_DeleteSecurityGroupTagRequest_H_


#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
class HUAWEICLOUD_VPC_V2_EXPORT  DeleteSecurityGroupTagRequest
    : public ModelBase
{
public:
    DeleteSecurityGroupTagRequest();
    virtual ~DeleteSecurityGroupTagRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteSecurityGroupTagRequest members

    /// <summary>
    /// 功能说明：键值
    /// </summary>

    std::string getKey() const;
    bool keyIsSet() const;
    void unsetkey();
    void setKey(const std::string& value);

    /// <summary>
    /// 安全组资源ID
    /// </summary>

    std::string getSecurityGroupId() const;
    bool securityGroupIdIsSet() const;
    void unsetsecurityGroupId();
    void setSecurityGroupId(const std::string& value);


protected:
    std::string key_;
    bool keyIsSet_;
    std::string securityGroupId_;
    bool securityGroupIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteSecurityGroupTagRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteSecurityGroupTagRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_DeleteSecurityGroupTagRequest_H_
