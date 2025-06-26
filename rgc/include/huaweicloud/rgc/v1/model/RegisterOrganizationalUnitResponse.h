
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_RegisterOrganizationalUnitResponse_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_RegisterOrganizationalUnitResponse_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RGC_V1_EXPORT  RegisterOrganizationalUnitResponse
    : public ModelBase, public HttpResponse
{
public:
    RegisterOrganizationalUnitResponse();
    virtual ~RegisterOrganizationalUnitResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RegisterOrganizationalUnitResponse members

    /// <summary>
    /// 异步接口的操作ID。
    /// </summary>

    std::string getOrganizationalUnitOperationId() const;
    bool organizationalUnitOperationIdIsSet() const;
    void unsetorganizationalUnitOperationId();
    void setOrganizationalUnitOperationId(const std::string& value);


protected:
    std::string organizationalUnitOperationId_;
    bool organizationalUnitOperationIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_RegisterOrganizationalUnitResponse_H_
