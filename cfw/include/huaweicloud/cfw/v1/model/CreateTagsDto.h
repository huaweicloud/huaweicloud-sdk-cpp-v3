
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_CreateTagsDto_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_CreateTagsDto_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cfw/v1/model/CreateTag.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  CreateTagsDto
    : public ModelBase
{
public:
    CreateTagsDto();
    virtual ~CreateTagsDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateTagsDto members

    /// <summary>
    /// 创建防火墙标签列表
    /// </summary>

    std::vector<CreateTag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<CreateTag>& value);


protected:
    std::vector<CreateTag> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_CreateTagsDto_H_
