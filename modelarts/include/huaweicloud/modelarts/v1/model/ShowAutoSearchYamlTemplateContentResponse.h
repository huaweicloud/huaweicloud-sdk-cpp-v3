
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowAutoSearchYamlTemplateContentResponse_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowAutoSearchYamlTemplateContentResponse_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ShowAutoSearchYamlTemplateContentResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAutoSearchYamlTemplateContentResponse();
    virtual ~ShowAutoSearchYamlTemplateContentResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAutoSearchYamlTemplateContentResponse members

    /// <summary>
    /// yaml文件名称。
    /// </summary>

    std::string getFileName() const;
    bool fileNameIsSet() const;
    void unsetfileName();
    void setFileName(const std::string& value);

    /// <summary>
    /// yaml文件内容。
    /// </summary>

    std::string getContent() const;
    bool contentIsSet() const;
    void unsetcontent();
    void setContent(const std::string& value);


protected:
    std::string fileName_;
    bool fileNameIsSet_;
    std::string content_;
    bool contentIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ShowAutoSearchYamlTemplateContentResponse_H_
