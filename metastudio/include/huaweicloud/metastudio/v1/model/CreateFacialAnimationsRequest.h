
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateFacialAnimationsRequest_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateFacialAnimationsRequest_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/CreateFASReq.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  CreateFacialAnimationsRequest
    : public ModelBase
{
public:
    CreateFacialAnimationsRequest();
    virtual ~CreateFacialAnimationsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateFacialAnimationsRequest members

    /// <summary>
    /// 
    /// </summary>

    CreateFASReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateFASReq& value);


protected:
    CreateFASReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateFacialAnimationsRequest& dereference_from_shared_ptr(std::shared_ptr<CreateFacialAnimationsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateFacialAnimationsRequest_H_
