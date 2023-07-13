
#ifndef HUAWEICLOUD_SDK_IMS_V2_MODEL_CreateOrUpdateTagsRequest_H_
#define HUAWEICLOUD_SDK_IMS_V2_MODEL_CreateOrUpdateTagsRequest_H_

#include <huaweicloud/ims/v2/ImsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ims/v2/model/AddOrUpdateTagsRequestBody.h>

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
class HUAWEICLOUD_IMS_V2_EXPORT  CreateOrUpdateTagsRequest
    : public ModelBase
{
public:
    CreateOrUpdateTagsRequest();
    virtual ~CreateOrUpdateTagsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateOrUpdateTagsRequest members

    /// <summary>
    /// 
    /// </summary>

    AddOrUpdateTagsRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const AddOrUpdateTagsRequestBody& value);


protected:
    AddOrUpdateTagsRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateOrUpdateTagsRequest& dereference_from_shared_ptr(std::shared_ptr<CreateOrUpdateTagsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMS_V2_MODEL_CreateOrUpdateTagsRequest_H_
