
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_BusinessCardImageConfig_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_BusinessCardImageConfig_H_


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
/// 用户上传的用于制作数字人名片的图片。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  BusinessCardImageConfig
    : public ModelBase
{
public:
    BusinessCardImageConfig();
    virtual ~BusinessCardImageConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BusinessCardImageConfig members

    /// <summary>
    /// 人物照片，需要Base64编码。
    /// </summary>

    std::string getHumanImage() const;
    bool humanImageIsSet() const;
    void unsethumanImage();
    void setHumanImage(const std::string& value);

    /// <summary>
    /// Logo图片，需要Base64编码。
    /// </summary>

    std::string getLogoImage() const;
    bool logoImageIsSet() const;
    void unsetlogoImage();
    void setLogoImage(const std::string& value);


protected:
    std::string humanImage_;
    bool humanImageIsSet_;
    std::string logoImage_;
    bool logoImageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_BusinessCardImageConfig_H_
