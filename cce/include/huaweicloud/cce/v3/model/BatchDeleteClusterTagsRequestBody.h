
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_BatchDeleteClusterTagsRequestBody_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_BatchDeleteClusterTagsRequestBody_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/ResourceDeleteTag.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 批量删除指定集群资源标签的请求体
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  BatchDeleteClusterTagsRequestBody
    : public ModelBase
{
public:
    BatchDeleteClusterTagsRequestBody();
    virtual ~BatchDeleteClusterTagsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeleteClusterTagsRequestBody members

    /// <summary>
    /// 待删除的集群资源标签列表。
    /// </summary>

    std::vector<ResourceDeleteTag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<ResourceDeleteTag>& value);


protected:
    std::vector<ResourceDeleteTag> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_BatchDeleteClusterTagsRequestBody_H_
