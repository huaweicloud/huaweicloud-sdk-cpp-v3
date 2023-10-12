
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_DeleteStructTemplateRequest_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_DeleteStructTemplateRequest_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/DeleteStructTemplateReqBody.h>

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
class HUAWEICLOUD_LTS_V2_EXPORT  DeleteStructTemplateRequest
    : public ModelBase
{
public:
    DeleteStructTemplateRequest();
    virtual ~DeleteStructTemplateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteStructTemplateRequest members

    /// <summary>
    /// 
    /// </summary>

    DeleteStructTemplateReqBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const DeleteStructTemplateReqBody& value);


protected:
    DeleteStructTemplateReqBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteStructTemplateRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteStructTemplateRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_DeleteStructTemplateRequest_H_
