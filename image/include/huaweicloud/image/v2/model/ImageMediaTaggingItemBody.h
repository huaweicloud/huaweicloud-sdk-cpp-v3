
#ifndef HUAWEICLOUD_SDK_IMAGE_V2_MODEL_ImageMediaTaggingItemBody_H_
#define HUAWEICLOUD_SDK_IMAGE_V2_MODEL_ImageMediaTaggingItemBody_H_


#include <huaweicloud/image/v2/ImageExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/image/v2/model/ImageMediaTaggingItemBody_i18n_tag.h>
#include <huaweicloud/image/v2/model/ImageMediaTaggingInstance.h>
#include <huaweicloud/image/v2/model/ImageMediaTaggingItemBody_i18n_type.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Image {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_IMAGE_V2_EXPORT  ImageMediaTaggingItemBody
    : public ModelBase
{
public:
    ImageMediaTaggingItemBody();
    virtual ~ImageMediaTaggingItemBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ImageMediaTaggingItemBody members

    /// <summary>
    /// 置信度，将Float型置信度转为String类型返回,取值范围：0-100。
    /// </summary>

    std::string getConfidence() const;
    bool confidenceIsSet() const;
    void unsetconfidence();
    void setConfidence(const std::string& value);

    /// <summary>
    /// 标签的类别。返回的标签类型，包含二十多种大类，具体可以参考[[图像标签](http://support.huaweicloud.com/image_faq/image_01_0037.html)](tag:hc)[[图像标签](https://support.huaweicloud.com/intl/zh-cn/image_faq/image_01_0037.html)](tag:hk) 
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 标签名称。
    /// </summary>

    std::string getTag() const;
    bool tagIsSet() const;
    void unsettag();
    void setTag(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ImageMediaTaggingItemBody_i18n_tag getI18nTag() const;
    bool i18nTagIsSet() const;
    void unseti18nTag();
    void setI18nTag(const ImageMediaTaggingItemBody_i18n_tag& value);

    /// <summary>
    /// 
    /// </summary>

    ImageMediaTaggingItemBody_i18n_type getI18nType() const;
    bool i18nTypeIsSet() const;
    void unseti18nType();
    void setI18nType(const ImageMediaTaggingItemBody_i18n_type& value);

    /// <summary>
    /// 目标检测框信息，为空则表示没有目标检测框。
    /// </summary>

    std::vector<ImageMediaTaggingInstance>& getInstances();
    bool instancesIsSet() const;
    void unsetinstances();
    void setInstances(const std::vector<ImageMediaTaggingInstance>& value);


protected:
    std::string confidence_;
    bool confidenceIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string tag_;
    bool tagIsSet_;
    ImageMediaTaggingItemBody_i18n_tag i18nTag_;
    bool i18nTagIsSet_;
    ImageMediaTaggingItemBody_i18n_type i18nType_;
    bool i18nTypeIsSet_;
    std::vector<ImageMediaTaggingInstance> instances_;
    bool instancesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMAGE_V2_MODEL_ImageMediaTaggingItemBody_H_
