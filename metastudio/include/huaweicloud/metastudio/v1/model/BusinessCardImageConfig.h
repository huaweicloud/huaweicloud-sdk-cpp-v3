
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

    /// <summary>
    /// 身份证国徽面照片，需要Base64编码。
    /// </summary>

    std::string getIdCardImage1() const;
    bool idCardImage1IsSet() const;
    void unsetidCardImage1();
    void setIdCardImage1(const std::string& value);

    /// <summary>
    /// 身份证人像面照片，需要Base64编码。
    /// </summary>

    std::string getIdCardImage2() const;
    bool idCardImage2IsSet() const;
    void unsetidCardImage2();
    void setIdCardImage2(const std::string& value);

    /// <summary>
    /// 授权使用照片
    /// </summary>

    bool isAuthorizeUseHumanImage() const;
    bool authorizeUseHumanImageIsSet() const;
    void unsetauthorizeUseHumanImage();
    void setAuthorizeUseHumanImage(bool value);


protected:
    std::string humanImage_;
    bool humanImageIsSet_;
    std::string logoImage_;
    bool logoImageIsSet_;
    std::string idCardImage1_;
    bool idCardImage1IsSet_;
    std::string idCardImage2_;
    bool idCardImage2IsSet_;
    bool authorizeUseHumanImage_;
    bool authorizeUseHumanImageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_BusinessCardImageConfig_H_
