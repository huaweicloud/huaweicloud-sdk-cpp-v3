
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_CreateRepoMemberRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_CreateRepoMemberRequest_H_


#include <huaweicloud/codeartsrepo/v3/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v3/model/RepoMemberInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V3_EXPORT  CreateRepoMemberRequest
    : public ModelBase
{
public:
    CreateRepoMemberRequest();
    virtual ~CreateRepoMemberRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateRepoMemberRequest members

    /// <summary>
    /// 添加用户的信息列表
    /// </summary>

    std::vector<RepoMemberInfo>& getUsers();
    bool usersIsSet() const;
    void unsetusers();
    void setUsers(const std::vector<RepoMemberInfo>& value);


protected:
    std::vector<RepoMemberInfo> users_;
    bool usersIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_CreateRepoMemberRequest_H_
