
#ifndef HUAWEICLOUD_SDK_CDN_V1_MODEL_BatchDeleteTagsRequest_H_
#define HUAWEICLOUD_SDK_CDN_V1_MODEL_BatchDeleteTagsRequest_H_

#include <huaweicloud/cdn/v1/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cdn/v1/model/DeleteTagsRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CDN_V1_EXPORT  BatchDeleteTagsRequest
    : public ModelBase
{
public:
    BatchDeleteTagsRequest();
    virtual ~BatchDeleteTagsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchDeleteTagsRequest members

    /// <summary>
    /// 
    /// </summary>

    DeleteTagsRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const DeleteTagsRequestBody& value);


protected:
    DeleteTagsRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchDeleteTagsRequest& dereference_from_shared_ptr(std::shared_ptr<BatchDeleteTagsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V1_MODEL_BatchDeleteTagsRequest_H_
