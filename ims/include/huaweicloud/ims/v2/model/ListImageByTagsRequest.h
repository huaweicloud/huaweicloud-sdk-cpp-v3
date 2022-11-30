
#ifndef HUAWEICLOUD_SDK_IMS_V2_MODEL_ListImageByTagsRequest_H_
#define HUAWEICLOUD_SDK_IMS_V2_MODEL_ListImageByTagsRequest_H_

#include <huaweicloud/ims/v2/ImsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ims/v2/model/ListImageByTagsRequestBody.h>

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
class HUAWEICLOUD_IMS_V2_EXPORT  ListImageByTagsRequest
    : public ModelBase
{
public:
    ListImageByTagsRequest();
    virtual ~ListImageByTagsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListImageByTagsRequest members

    /// <summary>
    /// 
    /// </summary>

    ListImageByTagsRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ListImageByTagsRequestBody& value);


protected:
    ListImageByTagsRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListImageByTagsRequest& dereference_from_shared_ptr(std::shared_ptr<ListImageByTagsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMS_V2_MODEL_ListImageByTagsRequest_H_
