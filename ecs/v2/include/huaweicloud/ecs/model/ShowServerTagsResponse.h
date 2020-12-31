
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ShowServerTagsResponse_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ShowServerTagsResponse_H_

#include <huaweicloud/ecs/EcsExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include <vector>
#include "huaweicloud/ecs/model/ServerTag.h"

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
class HUAWEICLOUD_ECS_EXPORT  ShowServerTagsResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowServerTagsResponse();
    virtual ~ShowServerTagsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowServerTagsResponse members

    /// <summary>
    /// 标签列表
    /// </summary>

    std::vector<ServerTag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<ServerTag>& value);


protected:
    std::vector<ServerTag> tags_;
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

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ShowServerTagsResponse_H_
