
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_PredefinedTemplate_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_PredefinedTemplate_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 预置模板信息。
/// </summary>
class HUAWEICLOUD_RGC_V1_EXPORT  PredefinedTemplate
    : public ModelBase
{
public:
    PredefinedTemplate();
    virtual ~PredefinedTemplate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PredefinedTemplate members

    /// <summary>
    /// 模板名称。
    /// </summary>

    std::string getTemplateName() const;
    bool templateNameIsSet() const;
    void unsettemplateName();
    void setTemplateName(const std::string& value);

    /// <summary>
    /// 模板描述。
    /// </summary>

    std::string getTemplateDescription() const;
    bool templateDescriptionIsSet() const;
    void unsettemplateDescription();
    void setTemplateDescription(const std::string& value);

    /// <summary>
    /// 模板类别
    /// </summary>

    std::string getTemplateCategory() const;
    bool templateCategoryIsSet() const;
    void unsettemplateCategory();
    void setTemplateCategory(const std::string& value);


protected:
    std::string templateName_;
    bool templateNameIsSet_;
    std::string templateDescription_;
    bool templateDescriptionIsSet_;
    std::string templateCategory_;
    bool templateCategoryIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_PredefinedTemplate_H_
