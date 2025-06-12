
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_OutputAssetConfig_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_OutputAssetConfig_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 输出视频资产信息配置。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  OutputAssetConfig
    : public ModelBase
{
public:
    OutputAssetConfig();
    virtual ~OutputAssetConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OutputAssetConfig members

    /// <summary>
    /// **参数解释**： 输出视频资产名称。 &gt; * 视频资产名称最大长度支持256；文件名称最大长度支持240（超过长度的会被舍弃）  **约束限制**： 不涉及。 **取值范围**： 字符长度0-256位。 **默认取值**： 不涉及。
    /// </summary>

    std::string getAssetName() const;
    bool assetNameIsSet() const;
    void unsetassetName();
    void setAssetName(const std::string& value);


protected:
    std::string assetName_;
    bool assetNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_OutputAssetConfig_H_
