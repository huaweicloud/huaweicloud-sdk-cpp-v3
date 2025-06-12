
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_MaterialAssetMeta_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_MaterialAssetMeta_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/MaterialComponentInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 素材元数据。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  MaterialAssetMeta
    : public ModelBase
{
public:
    MaterialAssetMeta();
    virtual ~MaterialAssetMeta();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MaterialAssetMeta members

    /// <summary>
    /// 可替换的素材组件列表。
    /// </summary>

    std::vector<MaterialComponentInfo>& getComponents();
    bool componentsIsSet() const;
    void unsetcomponents();
    void setComponents(const std::vector<MaterialComponentInfo>& value);


protected:
    std::vector<MaterialComponentInfo> components_;
    bool componentsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_MaterialAssetMeta_H_
