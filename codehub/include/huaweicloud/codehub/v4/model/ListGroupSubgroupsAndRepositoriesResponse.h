
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListGroupSubgroupsAndRepositoriesResponse_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListGroupSubgroupsAndRepositoriesResponse_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codehub/v4/model/SubgroupAndProjectBaseDto.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  ListGroupSubgroupsAndRepositoriesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListGroupSubgroupsAndRepositoriesResponse();
    virtual ~ListGroupSubgroupsAndRepositoriesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListGroupSubgroupsAndRepositoriesResponse members

    /// <summary>
    /// **参数解释：** 项目下代码组和仓库列表。
    /// </summary>

    std::vector<SubgroupAndProjectBaseDto>& getBody();
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const std::vector<SubgroupAndProjectBaseDto>& value);


protected:
    std::vector<SubgroupAndProjectBaseDto> body_;
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

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ListGroupSubgroupsAndRepositoriesResponse_H_
