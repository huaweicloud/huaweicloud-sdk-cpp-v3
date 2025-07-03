
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_TemplateTagOptions_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_TemplateTagOptions_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ecs/v2/model/TemplateTag.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 标签
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  TemplateTagOptions
    : public ModelBase
{
public:
    TemplateTagOptions();
    virtual ~TemplateTagOptions();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TemplateTagOptions members

    /// <summary>
    /// 标签列表
    /// </summary>

    std::vector<TemplateTag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<TemplateTag>& value);


protected:
    std::vector<TemplateTag> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_TemplateTagOptions_H_
