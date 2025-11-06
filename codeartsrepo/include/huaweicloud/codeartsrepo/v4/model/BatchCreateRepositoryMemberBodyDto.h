
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_BatchCreateRepositoryMemberBodyDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_BatchCreateRepositoryMemberBodyDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v4/model/CreateRepositoryMemberDto.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 批量添加成员
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  BatchCreateRepositoryMemberBodyDto
    : public ModelBase
{
public:
    BatchCreateRepositoryMemberBodyDto();
    virtual ~BatchCreateRepositoryMemberBodyDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchCreateRepositoryMemberBodyDto members

    /// <summary>
    /// **参数解释：** 成员信息列表。
    /// </summary>

    std::vector<CreateRepositoryMemberDto>& getUsers();
    bool usersIsSet() const;
    void unsetusers();
    void setUsers(const std::vector<CreateRepositoryMemberDto>& value);


protected:
    std::vector<CreateRepositoryMemberDto> users_;
    bool usersIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_BatchCreateRepositoryMemberBodyDto_H_
