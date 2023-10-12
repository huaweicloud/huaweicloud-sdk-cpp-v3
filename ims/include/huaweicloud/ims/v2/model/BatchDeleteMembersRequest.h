
#ifndef HUAWEICLOUD_SDK_IMS_V2_MODEL_BatchDeleteMembersRequest_H_
#define HUAWEICLOUD_SDK_IMS_V2_MODEL_BatchDeleteMembersRequest_H_


#include <huaweicloud/ims/v2/ImsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ims/v2/model/BatchAddMembersRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_IMS_V2_EXPORT  BatchDeleteMembersRequest
    : public ModelBase
{
public:
    BatchDeleteMembersRequest();
    virtual ~BatchDeleteMembersRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeleteMembersRequest members

    /// <summary>
    /// 
    /// </summary>

    BatchAddMembersRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchAddMembersRequestBody& value);


protected:
    BatchAddMembersRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchDeleteMembersRequest& dereference_from_shared_ptr(std::shared_ptr<BatchDeleteMembersRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMS_V2_MODEL_BatchDeleteMembersRequest_H_
