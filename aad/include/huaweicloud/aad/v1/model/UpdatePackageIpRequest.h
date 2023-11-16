
#ifndef HUAWEICLOUD_SDK_AAD_V1_MODEL_UpdatePackageIpRequest_H_
#define HUAWEICLOUD_SDK_AAD_V1_MODEL_UpdatePackageIpRequest_H_


#include <huaweicloud/aad/v1/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/aad/v1/model/UpdatePackageIpRequestBody.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_AAD_V1_EXPORT  UpdatePackageIpRequest
    : public ModelBase
{
public:
    UpdatePackageIpRequest();
    virtual ~UpdatePackageIpRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdatePackageIpRequest members

    /// <summary>
    /// 防护包id
    /// </summary>

    std::string getPackageId() const;
    bool packageIdIsSet() const;
    void unsetpackageId();
    void setPackageId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdatePackageIpRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdatePackageIpRequestBody& value);


protected:
    std::string packageId_;
    bool packageIdIsSet_;
    UpdatePackageIpRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdatePackageIpRequest& dereference_from_shared_ptr(std::shared_ptr<UpdatePackageIpRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V1_MODEL_UpdatePackageIpRequest_H_
