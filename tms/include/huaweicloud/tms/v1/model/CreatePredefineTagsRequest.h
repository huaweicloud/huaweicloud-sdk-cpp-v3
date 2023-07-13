
#ifndef HUAWEICLOUD_SDK_TMS_V1_MODEL_CreatePredefineTagsRequest_H_
#define HUAWEICLOUD_SDK_TMS_V1_MODEL_CreatePredefineTagsRequest_H_

#include <huaweicloud/tms/v1/TmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/tms/v1/model/ReqCreatePredefineTag.h>

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
class HUAWEICLOUD_TMS_V1_EXPORT  CreatePredefineTagsRequest
    : public ModelBase
{
public:
    CreatePredefineTagsRequest();
    virtual ~CreatePredefineTagsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreatePredefineTagsRequest members

    /// <summary>
    /// 
    /// </summary>

    ReqCreatePredefineTag getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ReqCreatePredefineTag& value);


protected:
    ReqCreatePredefineTag body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreatePredefineTagsRequest& dereference_from_shared_ptr(std::shared_ptr<CreatePredefineTagsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TMS_V1_MODEL_CreatePredefineTagsRequest_H_
