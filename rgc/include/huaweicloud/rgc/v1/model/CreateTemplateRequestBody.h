
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_CreateTemplateRequestBody_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_CreateTemplateRequestBody_H_


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
/// 创建模板请求参数。
/// </summary>
class HUAWEICLOUD_RGC_V1_EXPORT  CreateTemplateRequestBody
    : public ModelBase
{
public:
    CreateTemplateRequestBody();
    virtual ~CreateTemplateRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateTemplateRequestBody members

    /// <summary>
    /// 模板名称。
    /// </summary>

    std::string getTemplateName() const;
    bool templateNameIsSet() const;
    void unsettemplateName();
    void setTemplateName(const std::string& value);

    /// <summary>
    /// 模板类型，包括预置和自定义。
    /// </summary>

    std::string getTemplateType() const;
    bool templateTypeIsSet() const;
    void unsettemplateType();
    void setTemplateType(const std::string& value);

    /// <summary>
    /// 模板描述。
    /// </summary>

    std::string getTemplateDescription() const;
    bool templateDescriptionIsSet() const;
    void unsettemplateDescription();
    void setTemplateDescription(const std::string& value);

    /// <summary>
    /// 模板内容。
    /// </summary>

    std::string getTemplateBody() const;
    bool templateBodyIsSet() const;
    void unsettemplateBody();
    void setTemplateBody(const std::string& value);


protected:
    std::string templateName_;
    bool templateNameIsSet_;
    std::string templateType_;
    bool templateTypeIsSet_;
    std::string templateDescription_;
    bool templateDescriptionIsSet_;
    std::string templateBody_;
    bool templateBodyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_CreateTemplateRequestBody_H_
