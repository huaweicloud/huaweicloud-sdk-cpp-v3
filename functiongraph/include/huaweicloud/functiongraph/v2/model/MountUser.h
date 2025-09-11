
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_MountUser_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_MountUser_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 挂载用户信息。
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  MountUser
    : public ModelBase
{
public:
    MountUser();
    virtual ~MountUser();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MountUser members

    /// <summary>
    /// 用户ID(-1~65534的非0整数)
    /// </summary>

    int32_t getUserId() const;
    bool userIdIsSet() const;
    void unsetuserId();
    void setUserId(int32_t value);

    /// <summary>
    /// 用户组ID(-1~65534的非0整数)
    /// </summary>

    int32_t getUserGroupId() const;
    bool userGroupIdIsSet() const;
    void unsetuserGroupId();
    void setUserGroupId(int32_t value);


protected:
    int32_t userId_;
    bool userIdIsSet_;
    int32_t userGroupId_;
    bool userGroupIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_MountUser_H_
