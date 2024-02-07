
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_ListResourcesByTagsRequestBody_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_ListResourcesByTagsRequestBody_H_


#include <huaweicloud/geip/v3/GeipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/geip/v3/model/CreateTag.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GEIP_V3_EXPORT  ListResourcesByTagsRequestBody
    : public ModelBase
{
public:
    ListResourcesByTagsRequestBody();
    virtual ~ListResourcesByTagsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListResourcesByTagsRequestBody members

    /// <summary>
    /// 包含标签。
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

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_ListResourcesByTagsRequestBody_H_
