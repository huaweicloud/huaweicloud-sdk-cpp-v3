
#ifndef HUAWEICLOUD_SDK_IOTDM_V5_MODEL_BindInstanceTags_H_
#define HUAWEICLOUD_SDK_IOTDM_V5_MODEL_BindInstanceTags_H_


#include <huaweicloud/iotdm/v5/IoTDMExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/iotdm/v5/model/Tag.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_IOTDM_V5_EXPORT  BindInstanceTags
    : public ModelBase
{
public:
    BindInstanceTags();
    virtual ~BindInstanceTags();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BindInstanceTags members

    /// <summary>
    /// **参数说明**：实例标签。 
    /// </summary>

    std::vector<Tag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<Tag>& value);


protected:
    std::vector<Tag> tags_;
    bool tagsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDM_V5_MODEL_BindInstanceTags_H_
