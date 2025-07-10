
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_ListPredefinedTemplatesResponse_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_ListPredefinedTemplatesResponse_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rgc/v1/model/PredefinedTemplate.h>
#include <vector>

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
class HUAWEICLOUD_RGC_V1_EXPORT  ListPredefinedTemplatesResponse
    : public ModelBase, public HttpResponse
{
public:
    ListPredefinedTemplatesResponse();
    virtual ~ListPredefinedTemplatesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListPredefinedTemplatesResponse members

    /// <summary>
    /// 
    /// </summary>

    std::vector<PredefinedTemplate>& getTemplates();
    bool templatesIsSet() const;
    void unsettemplates();
    void setTemplates(const std::vector<PredefinedTemplate>& value);


protected:
    std::vector<PredefinedTemplate> templates_;
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

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_ListPredefinedTemplatesResponse_H_
