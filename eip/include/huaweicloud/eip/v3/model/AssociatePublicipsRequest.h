
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_AssociatePublicipsRequest_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_AssociatePublicipsRequest_H_

#include <huaweicloud/eip/v3/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/eip/v3/model/AssociatePublicipsRequestBody.h>

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
class HUAWEICLOUD_EIP_V3_EXPORT  AssociatePublicipsRequest
    : public ModelBase
{
public:
    AssociatePublicipsRequest();
    virtual ~AssociatePublicipsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// AssociatePublicipsRequest members

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

    AssociatePublicipsRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const AssociatePublicipsRequestBody& value);


protected:
    std::string publicipId_;
    bool publicipIdIsSet_;
    AssociatePublicipsRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    AssociatePublicipsRequest& dereference_from_shared_ptr(std::shared_ptr<AssociatePublicipsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_AssociatePublicipsRequest_H_
