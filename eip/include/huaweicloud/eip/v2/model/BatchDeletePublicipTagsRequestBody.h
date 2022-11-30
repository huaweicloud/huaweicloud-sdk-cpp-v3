
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_BatchDeletePublicipTagsRequestBody_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_BatchDeletePublicipTagsRequestBody_H_

#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/eip/v2/model/ResourceTagOption.h>
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
class HUAWEICLOUD_EIP_V2_EXPORT  BatchDeletePublicipTagsRequestBody
    : public ModelBase
{
public:
    BatchDeletePublicipTagsRequestBody();
    virtual ~BatchDeletePublicipTagsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchDeletePublicipTagsRequestBody members

    /// <summary>
    /// 标签列表
    /// </summary>

    std::vector<ResourceTagOption>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<ResourceTagOption>& value);

    /// <summary>
    /// 操作标识  delete：删除  action为delete时，value可选
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

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_BatchDeletePublicipTagsRequestBody_H_
