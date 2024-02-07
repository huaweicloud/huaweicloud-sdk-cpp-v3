
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_BatchCreateV2RequestBody_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_BatchCreateV2RequestBody_H_


#include <huaweicloud/geip/v3/GeipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/geip/v3/model/BatchCreateV2RequestBody_tags.h>
#include <vector>
#include <huaweicloud/geip/v3/model/BatchCreateV2RequestBody_sys_tags.h>

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
class HUAWEICLOUD_GEIP_V3_EXPORT  BatchCreateV2RequestBody
    : public ModelBase
{
public:
    BatchCreateV2RequestBody();
    virtual ~BatchCreateV2RequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchCreateV2RequestBody members

    /// <summary>
    /// 全域弹性公网IP标签
    /// </summary>

    std::vector<BatchCreateV2RequestBody_tags>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<BatchCreateV2RequestBody_tags>& value);

    /// <summary>
    /// 系统标签
    /// </summary>

    std::vector<BatchCreateV2RequestBody_sys_tags>& getSysTags();
    bool sysTagsIsSet() const;
    void unsetsysTags();
    void setSysTags(const std::vector<BatchCreateV2RequestBody_sys_tags>& value);


protected:
    std::vector<BatchCreateV2RequestBody_tags> tags_;
    bool tagsIsSet_;
    std::vector<BatchCreateV2RequestBody_sys_tags> sysTags_;
    bool sysTagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_BatchCreateV2RequestBody_H_
