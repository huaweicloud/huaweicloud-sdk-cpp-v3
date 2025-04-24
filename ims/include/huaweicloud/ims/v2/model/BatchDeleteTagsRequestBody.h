
#ifndef HUAWEICLOUD_SDK_IMS_V2_MODEL_BatchDeleteTagsRequestBody_H_
#define HUAWEICLOUD_SDK_IMS_V2_MODEL_BatchDeleteTagsRequestBody_H_


#include <huaweicloud/ims/v2/ImsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/ims/v2/model/ResourceTag.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 批量删除镜像标签请求体
/// </summary>
class HUAWEICLOUD_IMS_V2_EXPORT  BatchDeleteTagsRequestBody
    : public ModelBase
{
public:
    BatchDeleteTagsRequestBody();
    virtual ~BatchDeleteTagsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeleteTagsRequestBody members

    /// <summary>
    /// 需要删除的标签键值对集合。
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

#endif // HUAWEICLOUD_SDK_IMS_V2_MODEL_BatchDeleteTagsRequestBody_H_
