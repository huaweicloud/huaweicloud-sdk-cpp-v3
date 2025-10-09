
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_GetCustomizeTagsResponse_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_GetCustomizeTagsResponse_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/cce/v3/model/CustomizeResourceTag.h>

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
class HUAWEICLOUD_CCE_V3_EXPORT  GetCustomizeTagsResponse
    : public ModelBase, public HttpResponse
{
public:
    GetCustomizeTagsResponse();
    virtual ~GetCustomizeTagsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GetCustomizeTagsResponse members

    /// <summary>
    /// **参数解释**： 自定义标签 **约束限制**： 不涉及 
    /// </summary>

    std::vector<CustomizeResourceTag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<CustomizeResourceTag>& value);


protected:
    std::vector<CustomizeResourceTag> tags_;
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

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_GetCustomizeTagsResponse_H_
