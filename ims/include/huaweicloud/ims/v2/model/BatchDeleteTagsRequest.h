
#ifndef HUAWEICLOUD_SDK_IMS_V2_MODEL_BatchDeleteTagsRequest_H_
#define HUAWEICLOUD_SDK_IMS_V2_MODEL_BatchDeleteTagsRequest_H_


#include <huaweicloud/ims/v2/ImsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ims/v2/model/BatchDeleteTagsRequestBody.h>
#include <string>

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
class HUAWEICLOUD_IMS_V2_EXPORT  BatchDeleteTagsRequest
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
    /// 镜像ID。
    /// </summary>

    std::string getImageId() const;
    bool imageIdIsSet() const;
    void unsetimageId();
    void setImageId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    BatchDeleteTagsRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchDeleteTagsRequestBody& value);


protected:
    std::string imageId_;
    bool imageIdIsSet_;
    BatchDeleteTagsRequestBody body_;
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

#endif // HUAWEICLOUD_SDK_IMS_V2_MODEL_BatchDeleteTagsRequest_H_
