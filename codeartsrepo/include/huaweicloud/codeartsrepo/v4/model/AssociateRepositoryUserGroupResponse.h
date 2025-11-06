
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_AssociateRepositoryUserGroupResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_AssociateRepositoryUserGroupResponse_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  AssociateRepositoryUserGroupResponse
    : public ModelBase, public HttpResponse
{
public:
    AssociateRepositoryUserGroupResponse();
    virtual ~AssociateRepositoryUserGroupResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AssociateRepositoryUserGroupResponse members

    /// <summary>
    /// **参数解释：** 关联结果。 **取值范围：** - success，关联成功。 - error,关联失败。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    std::string status_;
    bool statusIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_AssociateRepositoryUserGroupResponse_H_
