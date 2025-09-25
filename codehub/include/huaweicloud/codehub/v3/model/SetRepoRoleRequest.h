
#ifndef HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_SetRepoRoleRequest_H_
#define HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_SetRepoRoleRequest_H_


#include <huaweicloud/codehub/v3/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v3/model/SetRepoRoleRequestBody.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEHUB_V3_EXPORT  SetRepoRoleRequest
    : public ModelBase
{
public:
    SetRepoRoleRequest();
    virtual ~SetRepoRoleRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SetRepoRoleRequest members

    /// <summary>
    /// 用户id
    /// </summary>

    std::string getMemberId() const;
    bool memberIdIsSet() const;
    void unsetmemberId();
    void setMemberId(const std::string& value);

    /// <summary>
    /// 仓库uuid(由CreateRepository接口返回)
    /// </summary>

    std::string getRepositoryUuid() const;
    bool repositoryUuidIsSet() const;
    void unsetrepositoryUuid();
    void setRepositoryUuid(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    SetRepoRoleRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const SetRepoRoleRequestBody& value);


protected:
    std::string memberId_;
    bool memberIdIsSet_;
    std::string repositoryUuid_;
    bool repositoryUuidIsSet_;
    SetRepoRoleRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    SetRepoRoleRequest& dereference_from_shared_ptr(std::shared_ptr<SetRepoRoleRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_SetRepoRoleRequest_H_
