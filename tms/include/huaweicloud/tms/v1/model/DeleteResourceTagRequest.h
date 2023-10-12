
#ifndef HUAWEICLOUD_SDK_TMS_V1_MODEL_DeleteResourceTagRequest_H_
#define HUAWEICLOUD_SDK_TMS_V1_MODEL_DeleteResourceTagRequest_H_


#include <huaweicloud/tms/v1/TmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/tms/v1/model/ReqDeleteTag.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_TMS_V1_EXPORT  DeleteResourceTagRequest
    : public ModelBase
{
public:
    DeleteResourceTagRequest();
    virtual ~DeleteResourceTagRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteResourceTagRequest members

    /// <summary>
    /// 
    /// </summary>

    ReqDeleteTag getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ReqDeleteTag& value);


protected:
    ReqDeleteTag body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteResourceTagRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteResourceTagRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TMS_V1_MODEL_DeleteResourceTagRequest_H_
