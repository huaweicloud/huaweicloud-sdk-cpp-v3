
#ifndef HUAWEICLOUD_SDK_RAM_V1_MODEL_BatchDeleteResourceShareTagsRequest_H_
#define HUAWEICLOUD_SDK_RAM_V1_MODEL_BatchDeleteResourceShareTagsRequest_H_


#include <huaweicloud/ram/v1/RamExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ram/v1/model/UntagResourceReqBody.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_RAM_V1_EXPORT  BatchDeleteResourceShareTagsRequest
    : public ModelBase
{
public:
    BatchDeleteResourceShareTagsRequest();
    virtual ~BatchDeleteResourceShareTagsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeleteResourceShareTagsRequest members

    /// <summary>
    /// 资源共享实例的ID。
    /// </summary>

    std::string getResourceShareId() const;
    bool resourceShareIdIsSet() const;
    void unsetresourceShareId();
    void setResourceShareId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UntagResourceReqBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UntagResourceReqBody& value);


protected:
    std::string resourceShareId_;
    bool resourceShareIdIsSet_;
    UntagResourceReqBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchDeleteResourceShareTagsRequest& dereference_from_shared_ptr(std::shared_ptr<BatchDeleteResourceShareTagsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RAM_V1_MODEL_BatchDeleteResourceShareTagsRequest_H_
