
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_AnimationItem_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_AnimationItem_H_


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
/// 
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  AnimationItem
    : public ModelBase
{
public:
    AnimationItem();
    virtual ~AnimationItem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AnimationItem members

    /// <summary>
    /// 动作资产ID。
    /// </summary>

    std::string getAnimationAssetId() const;
    bool animationAssetIdIsSet() const;
    void unsetanimationAssetId();
    void setAnimationAssetId(const std::string& value);

    /// <summary>
    /// 时间戳，相对时间戳。  单位秒。  保留3位小数。
    /// </summary>

    float getTimestamp() const;
    bool timestampIsSet() const;
    void unsettimestamp();
    void setTimestamp(float value);


protected:
    std::string animationAssetId_;
    bool animationAssetIdIsSet_;
    float timestamp_;
    bool timestampIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_AnimationItem_H_
