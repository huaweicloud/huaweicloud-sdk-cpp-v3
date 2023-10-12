
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_ListGrantsRequest_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_ListGrantsRequest_H_


#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kms/v2/model/ListGrantsRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  ListGrantsRequest
    : public ModelBase
{
public:
    ListGrantsRequest();
    virtual ~ListGrantsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListGrantsRequest members

    /// <summary>
    /// 
    /// </summary>

    ListGrantsRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ListGrantsRequestBody& value);


protected:
    ListGrantsRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListGrantsRequest& dereference_from_shared_ptr(std::shared_ptr<ListGrantsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_ListGrantsRequest_H_
