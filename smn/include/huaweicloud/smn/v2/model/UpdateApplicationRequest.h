
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_UpdateApplicationRequest_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_UpdateApplicationRequest_H_

#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/smn/v2/model/UpdateApplicationRequestBody.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_SMN_V2_EXPORT  UpdateApplicationRequest
    : public ModelBase
{
public:
    UpdateApplicationRequest();
    virtual ~UpdateApplicationRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateApplicationRequest members

    /// <summary>
    /// Application的唯一资源标识，可通过[查询Application](smn_api_57004.xml)获取该标识。
    /// </summary>

    std::string getApplicationUrn() const;
    bool applicationUrnIsSet() const;
    void unsetapplicationUrn();
    void setApplicationUrn(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateApplicationRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateApplicationRequestBody& value);


protected:
    std::string applicationUrn_;
    bool applicationUrnIsSet_;
    UpdateApplicationRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateApplicationRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateApplicationRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_UpdateApplicationRequest_H_
