
#ifndef HUAWEICLOUD_SDK_AAD_V1_MODEL_AddBlackWhiteIpListRequest_H_
#define HUAWEICLOUD_SDK_AAD_V1_MODEL_AddBlackWhiteIpListRequest_H_


#include <huaweicloud/aad/v1/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/aad/v1/model/BlackWhiteIpListRequest.h>

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
class HUAWEICLOUD_AAD_V1_EXPORT  AddBlackWhiteIpListRequest
    : public ModelBase
{
public:
    AddBlackWhiteIpListRequest();
    virtual ~AddBlackWhiteIpListRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddBlackWhiteIpListRequest members

    /// <summary>
    /// 
    /// </summary>

    BlackWhiteIpListRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BlackWhiteIpListRequest& value);


protected:
    BlackWhiteIpListRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    AddBlackWhiteIpListRequest& dereference_from_shared_ptr(std::shared_ptr<AddBlackWhiteIpListRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V1_MODEL_AddBlackWhiteIpListRequest_H_
