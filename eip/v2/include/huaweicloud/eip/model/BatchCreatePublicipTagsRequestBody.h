
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_BatchCreatePublicipTagsRequestBody_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_BatchCreatePublicipTagsRequestBody_H_

#include <huaweicloud/eip/EipExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include "huaweicloud/eip/model/ResourceTagOption.h"
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 批量操作资源标签的请求体
/// </summary>
class HUAWEICLOUD_EIP_EXPORT  BatchCreatePublicipTagsRequestBody
    : public ModelBase
{
public:
    BatchCreatePublicipTagsRequestBody();
    virtual ~BatchCreatePublicipTagsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchCreatePublicipTagsRequestBody members

    /// <summary>
    /// 标签列表
    /// </summary>

    std::vector<ResourceTagOption>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<ResourceTagOption>& value);

    /// <summary>
    /// 操作标识  create：创建  action为create时，tag的value必选
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);


protected:
    std::vector<ResourceTagOption> tags_;
    bool tagsIsSet_;
    std::string action_;
    bool actionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_BatchCreatePublicipTagsRequestBody_H_
