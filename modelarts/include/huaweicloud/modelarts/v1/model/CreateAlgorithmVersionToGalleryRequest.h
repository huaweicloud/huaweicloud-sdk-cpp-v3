
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateAlgorithmVersionToGalleryRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateAlgorithmVersionToGalleryRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/CreateAlgorithmVersionToGalleryBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  CreateAlgorithmVersionToGalleryRequest
    : public ModelBase
{
public:
    CreateAlgorithmVersionToGalleryRequest();
    virtual ~CreateAlgorithmVersionToGalleryRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateAlgorithmVersionToGalleryRequest members

    /// <summary>
    /// 
    /// </summary>

    CreateAlgorithmVersionToGalleryBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateAlgorithmVersionToGalleryBody& value);


protected:
    CreateAlgorithmVersionToGalleryBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateAlgorithmVersionToGalleryRequest& dereference_from_shared_ptr(std::shared_ptr<CreateAlgorithmVersionToGalleryRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_CreateAlgorithmVersionToGalleryRequest_H_
