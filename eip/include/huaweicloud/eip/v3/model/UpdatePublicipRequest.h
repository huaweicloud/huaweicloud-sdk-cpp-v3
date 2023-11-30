
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_UpdatePublicipRequest_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_UpdatePublicipRequest_H_


#include <huaweicloud/eip/v3/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/eip/v3/model/UpdatePublicipsRequestBody.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_EIP_V3_EXPORT  UpdatePublicipRequest
    : public ModelBase
{
public:
    UpdatePublicipRequest();
    virtual ~UpdatePublicipRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdatePublicipRequest members

    /// <summary>
    /// 弹性公网IP的ID
    /// </summary>

    std::string getPublicipId() const;
    bool publicipIdIsSet() const;
    void unsetpublicipId();
    void setPublicipId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdatePublicipsRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdatePublicipsRequestBody& value);


protected:
    std::string publicipId_;
    bool publicipIdIsSet_;
    UpdatePublicipsRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdatePublicipRequest& dereference_from_shared_ptr(std::shared_ptr<UpdatePublicipRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_UpdatePublicipRequest_H_
