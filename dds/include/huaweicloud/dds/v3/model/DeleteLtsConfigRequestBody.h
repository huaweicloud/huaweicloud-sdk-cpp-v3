
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_DeleteLtsConfigRequestBody_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_DeleteLtsConfigRequestBody_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dds/v3/model/DeleteLtsConfigRequestBody_lts_configs.h>
#include <vector>

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
class HUAWEICLOUD_DDS_V3_EXPORT  DeleteLtsConfigRequestBody
    : public ModelBase
{
public:
    DeleteLtsConfigRequestBody();
    virtual ~DeleteLtsConfigRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteLtsConfigRequestBody members

    /// <summary>
    /// 需要解除的LTS配置列表，一个实例解除多种日志配置需要填写多个item。
    /// </summary>

    std::vector<DeleteLtsConfigRequestBody_lts_configs>& getLtsConfigs();
    bool ltsConfigsIsSet() const;
    void unsetltsConfigs();
    void setLtsConfigs(const std::vector<DeleteLtsConfigRequestBody_lts_configs>& value);


protected:
    std::vector<DeleteLtsConfigRequestBody_lts_configs> ltsConfigs_;
    bool ltsConfigsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_DeleteLtsConfigRequestBody_H_
