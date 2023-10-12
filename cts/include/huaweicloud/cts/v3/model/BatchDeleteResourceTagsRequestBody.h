
#ifndef HUAWEICLOUD_SDK_CTS_V3_MODEL_BatchDeleteResourceTagsRequestBody_H_
#define HUAWEICLOUD_SDK_CTS_V3_MODEL_BatchDeleteResourceTagsRequestBody_H_


#include <huaweicloud/cts/v3/CtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cts/v3/model/Tags.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CTS_V3_EXPORT  BatchDeleteResourceTagsRequestBody
    : public ModelBase
{
public:
    BatchDeleteResourceTagsRequestBody();
    virtual ~BatchDeleteResourceTagsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeleteResourceTagsRequestBody members

    /// <summary>
    /// 标签列表。
    /// </summary>

    std::vector<Tags>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<Tags>& value);


protected:
    std::vector<Tags> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CTS_V3_MODEL_BatchDeleteResourceTagsRequestBody_H_
