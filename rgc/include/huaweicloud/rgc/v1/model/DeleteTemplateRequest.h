
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_DeleteTemplateRequest_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_DeleteTemplateRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_RGC_V1_EXPORT  DeleteTemplateRequest
    : public ModelBase
{
public:
    DeleteTemplateRequest();
    virtual ~DeleteTemplateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteTemplateRequest members

    /// <summary>
    /// 模板名称。
    /// </summary>

    std::string getTemplateName() const;
    bool templateNameIsSet() const;
    void unsettemplateName();
    void setTemplateName(const std::string& value);


protected:
    std::string templateName_;
    bool templateNameIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteTemplateRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteTemplateRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_DeleteTemplateRequest_H_
