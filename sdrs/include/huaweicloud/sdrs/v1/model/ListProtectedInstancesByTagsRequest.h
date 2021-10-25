
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_ListProtectedInstancesByTagsRequest_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_ListProtectedInstancesByTagsRequest_H_

#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sdrs/v1/model/ListProtectedInstancesByTagsRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  ListProtectedInstancesByTagsRequest
    : public ModelBase
{
public:
    ListProtectedInstancesByTagsRequest();
    virtual ~ListProtectedInstancesByTagsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListProtectedInstancesByTagsRequest members

    /// <summary>
    /// 
    /// </summary>

    ListProtectedInstancesByTagsRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ListProtectedInstancesByTagsRequestBody& value);


protected:
    ListProtectedInstancesByTagsRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListProtectedInstancesByTagsRequest& dereference_from_shared_ptr(std::shared_ptr<ListProtectedInstancesByTagsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_ListProtectedInstancesByTagsRequest_H_
