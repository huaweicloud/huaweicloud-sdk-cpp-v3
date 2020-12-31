
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_BatchCreateVolumeTagsRequestBody_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_BatchCreateVolumeTagsRequestBody_H_

#include <huaweicloud/evs/EvsExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include "huaweicloud/evs/model/Tag.h"
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// This is a auto create Body Object
/// </summary>
class HUAWEICLOUD_EVS_EXPORT  BatchCreateVolumeTagsRequestBody
    : public ModelBase
{
public:
    BatchCreateVolumeTagsRequestBody();
    virtual ~BatchCreateVolumeTagsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchCreateVolumeTagsRequestBody members

    /// <summary>
    /// 操作标识，当前支持的取值如下：  添加标签：create
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// 标签列表。
    /// </summary>

    std::vector<Tag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<Tag>& value);


protected:
    std::string action_;
    bool actionIsSet_;
    std::vector<Tag> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_BatchCreateVolumeTagsRequestBody_H_
