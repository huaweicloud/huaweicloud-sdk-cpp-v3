
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_DeleteApplicationRequest_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_DeleteApplicationRequest_H_


#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
class HUAWEICLOUD_SMN_V2_EXPORT  DeleteApplicationRequest
    : public ModelBase
{
public:
    DeleteApplicationRequest();
    virtual ~DeleteApplicationRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteApplicationRequest members

    /// <summary>
    /// Application的唯一资源标识，可通过[查询Application](smn_api_57004.xml)获取该标识。
    /// </summary>

    std::string getApplicationUrn() const;
    bool applicationUrnIsSet() const;
    void unsetapplicationUrn();
    void setApplicationUrn(const std::string& value);


protected:
    std::string applicationUrn_;
    bool applicationUrnIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteApplicationRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteApplicationRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_DeleteApplicationRequest_H_
