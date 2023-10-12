
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_CreatePublicipTagRequest_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_CreatePublicipTagRequest_H_


#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/eip/v2/model/CreatePublicipTagRequestBody.h>

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
class HUAWEICLOUD_EIP_V2_EXPORT  CreatePublicipTagRequest
    : public ModelBase
{
public:
    CreatePublicipTagRequest();
    virtual ~CreatePublicipTagRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreatePublicipTagRequest members

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

    CreatePublicipTagRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreatePublicipTagRequestBody& value);


protected:
    std::string publicipId_;
    bool publicipIdIsSet_;
    CreatePublicipTagRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreatePublicipTagRequest& dereference_from_shared_ptr(std::shared_ptr<CreatePublicipTagRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_CreatePublicipTagRequest_H_
