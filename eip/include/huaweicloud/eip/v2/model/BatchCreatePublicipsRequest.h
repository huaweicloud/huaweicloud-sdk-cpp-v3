
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_BatchCreatePublicipsRequest_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_BatchCreatePublicipsRequest_H_

#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/eip/v2/model/BatchCreatePublicipsV2RequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_EIP_V2_EXPORT  BatchCreatePublicipsRequest
    : public ModelBase
{
public:
    BatchCreatePublicipsRequest();
    virtual ~BatchCreatePublicipsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchCreatePublicipsRequest members

    /// <summary>
    /// 
    /// </summary>

    BatchCreatePublicipsV2RequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchCreatePublicipsV2RequestBody& value);


protected:
    BatchCreatePublicipsV2RequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchCreatePublicipsRequest& dereference_from_shared_ptr(std::shared_ptr<BatchCreatePublicipsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_BatchCreatePublicipsRequest_H_
