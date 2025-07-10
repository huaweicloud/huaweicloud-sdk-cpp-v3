
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_CreateTemplateResponse_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_CreateTemplateResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_RGC_V1_EXPORT  CreateTemplateResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateTemplateResponse();
    virtual ~CreateTemplateResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateTemplateResponse members

    /// <summary>
    /// 模板ID。
    /// </summary>

    std::string getTemplateId() const;
    bool templateIdIsSet() const;
    void unsettemplateId();
    void setTemplateId(const std::string& value);

    /// <summary>
    /// 模板版本。
    /// </summary>

    std::string getTemplateVersion() const;
    bool templateVersionIsSet() const;
    void unsettemplateVersion();
    void setTemplateVersion(const std::string& value);

    /// <summary>
    /// 模板名称。
    /// </summary>

    std::string getTemplateName() const;
    bool templateNameIsSet() const;
    void unsettemplateName();
    void setTemplateName(const std::string& value);


protected:
    std::string templateId_;
    bool templateIdIsSet_;
    std::string templateVersion_;
    bool templateVersionIsSet_;
    std::string templateName_;
    bool templateNameIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_CreateTemplateResponse_H_
