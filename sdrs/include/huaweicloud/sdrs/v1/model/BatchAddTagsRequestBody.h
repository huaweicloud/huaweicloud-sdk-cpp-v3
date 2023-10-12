
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_BatchAddTagsRequestBody_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_BatchAddTagsRequestBody_H_


#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/sdrs/v1/model/ResourceTag.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 批量添加保护实例标签请求体
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  BatchAddTagsRequestBody
    : public ModelBase
{
public:
    BatchAddTagsRequestBody();
    virtual ~BatchAddTagsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchAddTagsRequestBody members

    /// <summary>
    /// 标签列表。
    /// </summary>

    std::vector<ResourceTag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<ResourceTag>& value);

    /// <summary>
    /// 操作标识，取值仅限于：create：创建
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);


protected:
    std::vector<ResourceTag> tags_;
    bool tagsIsSet_;
    std::string action_;
    bool actionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_BatchAddTagsRequestBody_H_
