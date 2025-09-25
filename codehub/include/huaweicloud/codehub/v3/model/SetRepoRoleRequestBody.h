
#ifndef HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_SetRepoRoleRequestBody_H_
#define HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_SetRepoRoleRequestBody_H_


#include <huaweicloud/codehub/v3/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEHUB_V3_EXPORT  SetRepoRoleRequestBody
    : public ModelBase
{
public:
    SetRepoRoleRequestBody();
    virtual ~SetRepoRoleRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SetRepoRoleRequestBody members

    /// <summary>
    /// 设置仓库的成员权限，取值范围：20 -&gt; 只读成员 30-&gt;普通成员，40-&gt;管理员
    /// </summary>

    int32_t getRole() const;
    bool roleIsSet() const;
    void unsetrole();
    void setRole(int32_t value);


protected:
    int32_t role_;
    bool roleIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_SetRepoRoleRequestBody_H_
