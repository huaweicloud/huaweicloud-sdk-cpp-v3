
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_BatchCreateClusterTagsRequestBody_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_BatchCreateClusterTagsRequestBody_H_


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
/// 批量添加指定集群资源标签的请求体
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  BatchCreateClusterTagsRequestBody
    : public ModelBase
{
public:
    BatchCreateClusterTagsRequestBody();
    virtual ~BatchCreateClusterTagsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchCreateClusterTagsRequestBody members

    /// <summary>
    /// 待创建的集群资源标签列表。单集群资源标签总数上限为20。
    /// </summary>

    std::vector<ResourceTag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<ResourceTag>& value);


protected:
    std::vector<ResourceTag> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_BatchCreateClusterTagsRequestBody_H_
