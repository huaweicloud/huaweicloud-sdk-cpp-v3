
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateWorkspaceReq_grants_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateWorkspaceReq_grants_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  CreateWorkspaceReq_grants
    : public ModelBase
{
public:
    CreateWorkspaceReq_grants();
    virtual ~CreateWorkspaceReq_grants();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateWorkspaceReq_grants members

    /// <summary>
    /// IAM用户ID。此参数与user_name必填一个。两者都填优先使用user_id。
    /// </summary>

    std::string getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(const std::string& value);

    /// <summary>
    /// IAM用户名称。此参数与user_id必填一个。
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// 参数解释： 授权用户类型。 约束限制： 如果是联邦用户或者委托用户的话必填。 取值范围： IAM:IAM用户, FEDERATE：联邦用户, AGENCY：委托用户。 默认取值： IAM。
    /// </summary>

    std::string getUserType() const;
    bool userTypeIsSet() const;
    void unsetuserType();
    void setUserType(const std::string& value);


protected:
    std::string userId_;
    bool userIdIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    std::string userType_;
    bool userTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateWorkspaceReq_grants_H_
