
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_BatchDeleteResourceTagsRequestBody_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_BatchDeleteResourceTagsRequestBody_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/evs/v2/model/DeleteResourceTag.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 删除标签的请求body体。
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  BatchDeleteResourceTagsRequestBody
    : public ModelBase
{
public:
    BatchDeleteResourceTagsRequestBody();
    virtual ~BatchDeleteResourceTagsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeleteResourceTagsRequestBody members

    /// <summary>
    /// **参数解释** 标签列表。 **约束限制** 不涉及。 **取值范围** 不涉及。 **默认取值** 不涉及。
    /// </summary>

    std::vector<DeleteResourceTag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<DeleteResourceTag>& value);


protected:
    std::vector<DeleteResourceTag> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_BatchDeleteResourceTagsRequestBody_H_
