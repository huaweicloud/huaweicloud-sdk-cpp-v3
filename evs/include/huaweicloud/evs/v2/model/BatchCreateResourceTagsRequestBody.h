
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_BatchCreateResourceTagsRequestBody_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_BatchCreateResourceTagsRequestBody_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/evs/v2/model/CreateResourceTag.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建资源标签的请求body体。
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  BatchCreateResourceTagsRequestBody
    : public ModelBase
{
public:
    BatchCreateResourceTagsRequestBody();
    virtual ~BatchCreateResourceTagsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchCreateResourceTagsRequestBody members

    /// <summary>
    /// **参数解释** 标签列表。 **约束限制** 不涉及。 **取值范围** 不涉及。 **默认取值** 不涉及。
    /// </summary>

    std::vector<CreateResourceTag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<CreateResourceTag>& value);


protected:
    std::vector<CreateResourceTag> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_BatchCreateResourceTagsRequestBody_H_
