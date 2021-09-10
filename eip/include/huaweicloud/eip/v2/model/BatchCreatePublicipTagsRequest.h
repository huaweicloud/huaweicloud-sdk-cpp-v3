
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_BatchCreatePublicipTagsRequest_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_BatchCreatePublicipTagsRequest_H_

#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/eip/v2/model/BatchCreatePublicipTagsRequestBody.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_EIP_V2_EXPORT  BatchCreatePublicipTagsRequest
    : public ModelBase
{
public:
    BatchCreatePublicipTagsRequest();
    virtual ~BatchCreatePublicipTagsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchCreatePublicipTagsRequest members

    /// <summary>
    /// 资源ID
    /// </summary>

    std::string getPublicipId() const;
    bool publicipIdIsSet() const;
    void unsetpublicipId();
    void setPublicipId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    BatchCreatePublicipTagsRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchCreatePublicipTagsRequestBody& value);


protected:
    std::string publicipId_;
    bool publicipIdIsSet_;
    BatchCreatePublicipTagsRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchCreatePublicipTagsRequest& dereference_from_shared_ptr(std::shared_ptr<BatchCreatePublicipTagsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_BatchCreatePublicipTagsRequest_H_
