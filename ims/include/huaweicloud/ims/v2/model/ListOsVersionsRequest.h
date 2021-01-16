
#ifndef HUAWEICLOUD_SDK_IMS_V2_MODEL_ListOsVersionsRequest_H_
#define HUAWEICLOUD_SDK_IMS_V2_MODEL_ListOsVersionsRequest_H_

#include <huaweicloud/ims/v2/ImsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_IMS_V2_EXPORT  ListOsVersionsRequest
    : public ModelBase
{
public:
    ListOsVersionsRequest();
    virtual ~ListOsVersionsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListOsVersionsRequest members

    /// <summary>
    /// 
    /// </summary>

    std::string getTag() const;
    bool tagIsSet() const;
    void unsettag();
    void setTag(const std::string& value);


protected:
    std::string tag_;
    bool tagIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListOsVersionsRequest& dereference_from_shared_ptr(std::shared_ptr<ListOsVersionsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMS_V2_MODEL_ListOsVersionsRequest_H_
