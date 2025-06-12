
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ReviewConfig_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ReviewConfig_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 内容审核配置
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ReviewConfig
    : public ModelBase
{
public:
    ReviewConfig();
    virtual ~ReviewConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReviewConfig members

    /// <summary>
    /// 免审核。 目前仅白名单用户可使用此参数，非白名单用户跟随系统策略审核。
    /// </summary>

    bool isNoNeedReview() const;
    bool noNeedReviewIsSet() const;
    void unsetnoNeedReview();
    void setNoNeedReview(bool value);


protected:
    bool noNeedReview_;
    bool noNeedReviewIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ReviewConfig_H_
