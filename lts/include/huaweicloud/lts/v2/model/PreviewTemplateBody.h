
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_PreviewTemplateBody_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_PreviewTemplateBody_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 预览邮件格式请求体
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  PreviewTemplateBody
    : public ModelBase
{
public:
    PreviewTemplateBody();
    virtual ~PreviewTemplateBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// PreviewTemplateBody members

    /// <summary>
    /// 邮件模板内容
    /// </summary>

    std::string getTemplates() const;
    bool templatesIsSet() const;
    void unsettemplates();
    void setTemplates(const std::string& value);

    /// <summary>
    /// 语言 zh-cn中文，en-us英文
    /// </summary>

    std::string getLanguage() const;
    bool languageIsSet() const;
    void unsetlanguage();
    void setLanguage(const std::string& value);

    /// <summary>
    /// 来源，只能填LTS
    /// </summary>

    std::string getSource() const;
    bool sourceIsSet() const;
    void unsetsource();
    void setSource(const std::string& value);


protected:
    std::string templates_;
    bool templatesIsSet_;
    std::string language_;
    bool languageIsSet_;
    std::string source_;
    bool sourceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_PreviewTemplateBody_H_
