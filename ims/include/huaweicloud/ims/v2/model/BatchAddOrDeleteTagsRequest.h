
#ifndef HUAWEICLOUD_SDK_IMS_V2_MODEL_BatchAddOrDeleteTagsRequest_H_
#define HUAWEICLOUD_SDK_IMS_V2_MODEL_BatchAddOrDeleteTagsRequest_H_

#include <huaweicloud/ims/v2/ImsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/ims/v2/model/BatchAddOrDeleteTagsRequestBody.h>

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
class HUAWEICLOUD_IMS_V2_EXPORT  BatchAddOrDeleteTagsRequest
    : public ModelBase
{
public:
    BatchAddOrDeleteTagsRequest();
    virtual ~BatchAddOrDeleteTagsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchAddOrDeleteTagsRequest members

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

    BatchAddOrDeleteTagsRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchAddOrDeleteTagsRequestBody& value);


protected:
    std::string imageId_;
    bool imageIdIsSet_;
    BatchAddOrDeleteTagsRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchAddOrDeleteTagsRequest& dereference_from_shared_ptr(std::shared_ptr<BatchAddOrDeleteTagsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMS_V2_MODEL_BatchAddOrDeleteTagsRequest_H_
