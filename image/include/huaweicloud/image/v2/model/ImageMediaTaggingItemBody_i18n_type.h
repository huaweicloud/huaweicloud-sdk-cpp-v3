
#ifndef HUAWEICLOUD_SDK_IMAGE_V2_MODEL_ImageMediaTaggingItemBody_i18n_type_H_
#define HUAWEICLOUD_SDK_IMAGE_V2_MODEL_ImageMediaTaggingItemBody_i18n_type_H_


#include <huaweicloud/image/v2/ImageExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Image {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 标签类别的多种语言输出。
/// </summary>
class HUAWEICLOUD_IMAGE_V2_EXPORT  ImageMediaTaggingItemBody_i18n_type
    : public ModelBase
{
public:
    ImageMediaTaggingItemBody_i18n_type();
    virtual ~ImageMediaTaggingItemBody_i18n_type();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ImageMediaTaggingItemBody_i18n_type members

    /// <summary>
    /// 中文标签类别。
    /// </summary>

    std::string getZh() const;
    bool zhIsSet() const;
    void unsetzh();
    void setZh(const std::string& value);

    /// <summary>
    /// 英文标签类别。
    /// </summary>

    std::string getEn() const;
    bool enIsSet() const;
    void unseten();
    void setEn(const std::string& value);


protected:
    std::string zh_;
    bool zhIsSet_;
    std::string en_;
    bool enIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMAGE_V2_MODEL_ImageMediaTaggingItemBody_i18n_type_H_