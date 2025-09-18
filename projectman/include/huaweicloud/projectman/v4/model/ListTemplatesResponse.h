
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListTemplatesResponse_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListTemplatesResponse_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/projectman/v4/model/TemplateListV4ResponseBody_templates.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ListTemplatesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListTemplatesResponse();
    virtual ~ListTemplatesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListTemplatesResponse members

    /// <summary>
    /// 模板信息列表
    /// </summary>

    std::vector<TemplateListV4ResponseBody_templates>& getTemplates();
    bool templatesIsSet() const;
    void unsettemplates();
    void setTemplates(const std::vector<TemplateListV4ResponseBody_templates>& value);


protected:
    std::vector<TemplateListV4ResponseBody_templates> templates_;
    bool templatesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListTemplatesResponse_H_
