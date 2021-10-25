
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_BatchDeleteTagsRequestBody_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_BatchDeleteTagsRequestBody_H_

#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sdrs/v1/model/DeleteResourceTag.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 批量删除保护实例标签请求体
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  BatchDeleteTagsRequestBody
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
    /// 标签列表。
    /// </summary>

    std::vector<DeleteResourceTag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<DeleteResourceTag>& value);

    /// <summary>
    /// 操作标识，取值仅限于：delete：删除
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);


protected:
    std::vector<DeleteResourceTag> tags_;
    bool tagsIsSet_;
    std::string action_;
    bool actionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_BatchDeleteTagsRequestBody_H_
