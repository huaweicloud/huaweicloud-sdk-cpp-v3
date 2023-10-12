
#ifndef HUAWEICLOUD_SDK_TMS_V1_MODEL_CreateResourceTagRequest_H_
#define HUAWEICLOUD_SDK_TMS_V1_MODEL_CreateResourceTagRequest_H_


#include <huaweicloud/tms/v1/TmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/tms/v1/model/ReqCreateTag.h>

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
class HUAWEICLOUD_TMS_V1_EXPORT  CreateResourceTagRequest
    : public ModelBase
{
public:
    CreateResourceTagRequest();
    virtual ~CreateResourceTagRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateResourceTagRequest members

    /// <summary>
    /// 
    /// </summary>

    ReqCreateTag getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ReqCreateTag& value);


protected:
    ReqCreateTag body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateResourceTagRequest& dereference_from_shared_ptr(std::shared_ptr<CreateResourceTagRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TMS_V1_MODEL_CreateResourceTagRequest_H_
