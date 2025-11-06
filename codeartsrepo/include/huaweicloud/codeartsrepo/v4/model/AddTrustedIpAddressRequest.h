
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_AddTrustedIpAddressRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_AddTrustedIpAddressRequest_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartsrepo/v4/model/AddTrustedIpAddressRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  AddTrustedIpAddressRequest
    : public ModelBase
{
public:
    AddTrustedIpAddressRequest();
    virtual ~AddTrustedIpAddressRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddTrustedIpAddressRequest members

    /// <summary>
    /// **参数解释：** 仓库id，代码仓首页，Repository ID后的数字Id。
    /// </summary>

    int32_t getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    AddTrustedIpAddressRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const AddTrustedIpAddressRequestBody& value);


protected:
    int32_t id_;
    bool idIsSet_;
    AddTrustedIpAddressRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    AddTrustedIpAddressRequest& dereference_from_shared_ptr(std::shared_ptr<AddTrustedIpAddressRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_AddTrustedIpAddressRequest_H_
