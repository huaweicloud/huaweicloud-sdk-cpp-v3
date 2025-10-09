
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_GetResourceTagsResponse_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_GetResourceTagsResponse_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/ResourceTag.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  GetResourceTagsResponse
    : public ModelBase, public HttpResponse
{
public:
    GetResourceTagsResponse();
    virtual ~GetResourceTagsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GetResourceTagsResponse members

    /// <summary>
    /// **参数解释**： 自定义标签 **约束限制**： 不涉及 
    /// </summary>

    std::vector<ResourceTag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<ResourceTag>& value);

    /// <summary>
    /// **参数解释**： 系统标签 **约束限制**： 不涉及 
    /// </summary>

    std::vector<ResourceTag>& getSysTags();
    bool sysTagsIsSet() const;
    void unsetsysTags();
    void setSysTags(const std::vector<ResourceTag>& value);


protected:
    std::vector<ResourceTag> tags_;
    bool tagsIsSet_;
    std::vector<ResourceTag> sysTags_;
    bool sysTagsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_GetResourceTagsResponse_H_
