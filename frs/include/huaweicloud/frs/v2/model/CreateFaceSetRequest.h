
#ifndef HUAWEICLOUD_SDK_FRS_V2_MODEL_CreateFaceSetRequest_H_
#define HUAWEICLOUD_SDK_FRS_V2_MODEL_CreateFaceSetRequest_H_

#include <huaweicloud/frs/v2/FrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/frs/v2/model/CreateFaceSetReq.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_FRS_V2_EXPORT  CreateFaceSetRequest
    : public ModelBase
{
public:
    CreateFaceSetRequest();
    virtual ~CreateFaceSetRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateFaceSetRequest members

    /// <summary>
    /// 
    /// </summary>

    CreateFaceSetReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateFaceSetReq& value);


protected:
    CreateFaceSetReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateFaceSetRequest& dereference_from_shared_ptr(std::shared_ptr<CreateFaceSetRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FRS_V2_MODEL_CreateFaceSetRequest_H_
