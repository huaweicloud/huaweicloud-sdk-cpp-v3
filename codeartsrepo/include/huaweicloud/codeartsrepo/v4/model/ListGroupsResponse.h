
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListGroupsResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListGroupsResponse_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/codeartsrepo/v4/model/GroupBaseDto.h>

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
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ListGroupsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListGroupsResponse();
    virtual ~ListGroupsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListGroupsResponse members

    /// <summary>
    /// **参数解释：** 代码组列表。
    /// </summary>

    std::vector<GroupBaseDto>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<GroupBaseDto>& value);


protected:
    std::vector<GroupBaseDto> body_;
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

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ListGroupsResponse_H_
