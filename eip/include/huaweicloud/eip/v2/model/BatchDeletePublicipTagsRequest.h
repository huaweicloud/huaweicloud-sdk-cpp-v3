
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_BatchDeletePublicipTagsRequest_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_BatchDeletePublicipTagsRequest_H_


#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/eip/v2/model/BatchDeletePublicipTagsRequestBody.h>

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
class HUAWEICLOUD_EIP_V2_EXPORT  BatchDeletePublicipTagsRequest
    : public ModelBase
{
public:
    BatchDeletePublicipTagsRequest();
    virtual ~BatchDeletePublicipTagsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeletePublicipTagsRequest members

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

    BatchDeletePublicipTagsRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchDeletePublicipTagsRequestBody& value);


protected:
    std::string publicipId_;
    bool publicipIdIsSet_;
    BatchDeletePublicipTagsRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchDeletePublicipTagsRequest& dereference_from_shared_ptr(std::shared_ptr<BatchDeletePublicipTagsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_BatchDeletePublicipTagsRequest_H_
