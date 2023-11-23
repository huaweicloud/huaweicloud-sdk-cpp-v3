
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_UpdateLtsConfigRequestBody_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_UpdateLtsConfigRequestBody_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/dds/v3/model/UpdateLtsConfigRequestBody_lts_configs.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  UpdateLtsConfigRequestBody
    : public ModelBase
{
public:
    UpdateLtsConfigRequestBody();
    virtual ~UpdateLtsConfigRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateLtsConfigRequestBody members

    /// <summary>
    /// 每个Item是实例需要设置的LTS策略。
    /// </summary>

    std::vector<UpdateLtsConfigRequestBody_lts_configs>& getLtsConfigs();
    bool ltsConfigsIsSet() const;
    void unsetltsConfigs();
    void setLtsConfigs(const std::vector<UpdateLtsConfigRequestBody_lts_configs>& value);


protected:
    std::vector<UpdateLtsConfigRequestBody_lts_configs> ltsConfigs_;
    bool ltsConfigsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_UpdateLtsConfigRequestBody_H_
