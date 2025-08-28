
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_TtscAssetExtraMeta_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_TtscAssetExtraMeta_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/TtscVoiceModelAssetMeta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 资产元数据。根据资产类型选择其中一个填写。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  TtscAssetExtraMeta
    : public ModelBase
{
public:
    TtscAssetExtraMeta();
    virtual ~TtscAssetExtraMeta();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TtscAssetExtraMeta members

    /// <summary>
    /// 
    /// </summary>

    TtscVoiceModelAssetMeta getVoiceModelMeta() const;
    bool voiceModelMetaIsSet() const;
    void unsetvoiceModelMeta();
    void setVoiceModelMeta(const TtscVoiceModelAssetMeta& value);


protected:
    TtscVoiceModelAssetMeta voiceModelMeta_;
    bool voiceModelMetaIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_TtscAssetExtraMeta_H_
