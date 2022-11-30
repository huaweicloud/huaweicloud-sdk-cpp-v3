
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_AddProtectedInstanceNicRequest_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_AddProtectedInstanceNicRequest_H_

#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sdrs/v1/model/ProtectedInstanceAddNicRequestBody.h>
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
class HUAWEICLOUD_SDRS_V1_EXPORT  AddProtectedInstanceNicRequest
    : public ModelBase
{
public:
    AddProtectedInstanceNicRequest();
    virtual ~AddProtectedInstanceNicRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// AddProtectedInstanceNicRequest members

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

    ProtectedInstanceAddNicRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ProtectedInstanceAddNicRequestBody& value);


protected:
    std::string protectedInstanceId_;
    bool protectedInstanceIdIsSet_;
    ProtectedInstanceAddNicRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    AddProtectedInstanceNicRequest& dereference_from_shared_ptr(std::shared_ptr<AddProtectedInstanceNicRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_AddProtectedInstanceNicRequest_H_
