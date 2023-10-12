
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_BatchAddTagsRequest_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_BatchAddTagsRequest_H_


#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sdrs/v1/model/BatchAddTagsRequestBody.h>
#include <string>

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
class HUAWEICLOUD_SDRS_V1_EXPORT  BatchAddTagsRequest
    : public ModelBase
{
public:
    BatchAddTagsRequest();
    virtual ~BatchAddTagsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchAddTagsRequest members

    /// <summary>
    /// 保护实例的ID。
    /// </summary>

    std::string getProtectedInstanceId() const;
    bool protectedInstanceIdIsSet() const;
    void unsetprotectedInstanceId();
    void setProtectedInstanceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    BatchAddTagsRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchAddTagsRequestBody& value);


protected:
    std::string protectedInstanceId_;
    bool protectedInstanceIdIsSet_;
    BatchAddTagsRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchAddTagsRequest& dereference_from_shared_ptr(std::shared_ptr<BatchAddTagsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_BatchAddTagsRequest_H_
