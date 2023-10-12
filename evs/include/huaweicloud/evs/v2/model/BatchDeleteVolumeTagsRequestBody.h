
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_BatchDeleteVolumeTagsRequestBody_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_BatchDeleteVolumeTagsRequestBody_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/evs/v2/model/DeleteTagsOption.h>
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
class HUAWEICLOUD_EVS_V2_EXPORT  BatchDeleteVolumeTagsRequestBody
    : public ModelBase
{
public:
    BatchDeleteVolumeTagsRequestBody();
    virtual ~BatchDeleteVolumeTagsRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeleteVolumeTagsRequestBody members

    /// <summary>
    /// 操作标识，当前支持的取值如下：  删除标签：delete
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// 标签列表。
    /// </summary>

    std::vector<DeleteTagsOption>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<DeleteTagsOption>& value);


protected:
    std::string action_;
    bool actionIsSet_;
    std::vector<DeleteTagsOption> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_BatchDeleteVolumeTagsRequestBody_H_
