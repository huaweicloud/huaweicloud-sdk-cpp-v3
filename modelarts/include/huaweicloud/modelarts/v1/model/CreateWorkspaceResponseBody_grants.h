
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateWorkspaceResponseBody_grants_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateWorkspaceResponseBody_grants_H_


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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  CreateWorkspaceResponseBody_grants
    : public ModelBase
{
public:
    CreateWorkspaceResponseBody_grants();
    virtual ~CreateWorkspaceResponseBody_grants();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateWorkspaceResponseBody_grants members

    /// <summary>
    /// 用户ID,此参数与user_name必填一个。两者都填优先使用user_id。
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


protected:
    std::string userId_;
    bool userIdIsSet_;
    std::string userName_;
    bool userNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateWorkspaceResponseBody_grants_H_
