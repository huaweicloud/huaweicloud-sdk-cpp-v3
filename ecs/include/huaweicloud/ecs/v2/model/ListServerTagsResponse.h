
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ListServerTagsResponse_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ListServerTagsResponse_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/ecs/v2/model/ProjectTag.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  ListServerTagsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListServerTagsResponse();
    virtual ~ListServerTagsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListServerTagsResponse members

    /// <summary>
    /// 标签列表
    /// </summary>

    std::vector<ProjectTag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<ProjectTag>& value);


protected:
    std::vector<ProjectTag> tags_;
    bool tagsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ListServerTagsResponse_H_
