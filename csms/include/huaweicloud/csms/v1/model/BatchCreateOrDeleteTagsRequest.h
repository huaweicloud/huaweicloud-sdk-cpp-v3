
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_BatchCreateOrDeleteTagsRequest_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_BatchCreateOrDeleteTagsRequest_H_

#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/csms/v1/model/BatchCreateOrDeleteTagsRequestBody.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CSMS_V1_EXPORT  BatchCreateOrDeleteTagsRequest
    : public ModelBase
{
public:
    BatchCreateOrDeleteTagsRequest();
    virtual ~BatchCreateOrDeleteTagsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchCreateOrDeleteTagsRequest members

    /// <summary>
    /// 凭据ID
    /// </summary>

    std::string getSecretId() const;
    bool secretIdIsSet() const;
    void unsetsecretId();
    void setSecretId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    BatchCreateOrDeleteTagsRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchCreateOrDeleteTagsRequestBody& value);


protected:
    std::string secretId_;
    bool secretIdIsSet_;
    BatchCreateOrDeleteTagsRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchCreateOrDeleteTagsRequest& dereference_from_shared_ptr(std::shared_ptr<BatchCreateOrDeleteTagsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_BatchCreateOrDeleteTagsRequest_H_
