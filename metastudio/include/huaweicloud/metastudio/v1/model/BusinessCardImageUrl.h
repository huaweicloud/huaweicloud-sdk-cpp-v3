
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_BusinessCardImageUrl_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_BusinessCardImageUrl_H_


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
/// 用于制作数字人名片的图片下载URL。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  BusinessCardImageUrl
    : public ModelBase
{
public:
    BusinessCardImageUrl();
    virtual ~BusinessCardImageUrl();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BusinessCardImageUrl members

    /// <summary>
    /// 任务照片下载URL。
    /// </summary>

    std::string getHumanImageUrl() const;
    bool humanImageUrlIsSet() const;
    void unsethumanImageUrl();
    void setHumanImageUrl(const std::string& value);

    /// <summary>
    /// Logo图片下载URL。
    /// </summary>

    std::string getLogoImage() const;
    bool logoImageIsSet() const;
    void unsetlogoImage();
    void setLogoImage(const std::string& value);


protected:
    std::string humanImageUrl_;
    bool humanImageUrlIsSet_;
    std::string logoImage_;
    bool logoImageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_BusinessCardImageUrl_H_
