
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListGroupAddableMembersResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListGroupAddableMembersResponse_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v4/model/GroupBatchAddMemberDto.h>
#include <vector>

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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ListGroupAddableMembersResponse
    : public ModelBase, public HttpResponse
{
public:
    ListGroupAddableMembersResponse();
    virtual ~ListGroupAddableMembersResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListGroupAddableMembersResponse members

    /// <summary>
    /// **参数解释：** 成员列表。
    /// </summary>

    std::vector<GroupBatchAddMemberDto>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<GroupBatchAddMemberDto>& value);


protected:
    std::vector<GroupBatchAddMemberDto> body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListGroupAddableMembersResponse_H_
