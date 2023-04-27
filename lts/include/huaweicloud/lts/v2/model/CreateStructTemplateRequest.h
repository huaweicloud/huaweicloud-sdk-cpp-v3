
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateStructTemplateRequest_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateStructTemplateRequest_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/LtsStructTemplateInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  CreateStructTemplateRequest
    : public ModelBase
{
public:
    CreateStructTemplateRequest();
    virtual ~CreateStructTemplateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateStructTemplateRequest members

    /// <summary>
    /// 
    /// </summary>

    LtsStructTemplateInfo getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const LtsStructTemplateInfo& value);


protected:
    LtsStructTemplateInfo body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateStructTemplateRequest& dereference_from_shared_ptr(std::shared_ptr<CreateStructTemplateRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateStructTemplateRequest_H_
