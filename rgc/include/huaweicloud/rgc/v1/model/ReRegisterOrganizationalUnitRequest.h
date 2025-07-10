
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_ReRegisterOrganizationalUnitRequest_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_ReRegisterOrganizationalUnitRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_RGC_V1_EXPORT  ReRegisterOrganizationalUnitRequest
    : public ModelBase
{
public:
    ReRegisterOrganizationalUnitRequest();
    virtual ~ReRegisterOrganizationalUnitRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReRegisterOrganizationalUnitRequest members

    /// <summary>
    /// 注册OU ID。
    /// </summary>

    std::string getOrganizationalUnitId() const;
    bool organizationalUnitIdIsSet() const;
    void unsetorganizationalUnitId();
    void setOrganizationalUnitId(const std::string& value);


protected:
    std::string organizationalUnitId_;
    bool organizationalUnitIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ReRegisterOrganizationalUnitRequest& dereference_from_shared_ptr(std::shared_ptr<ReRegisterOrganizationalUnitRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_ReRegisterOrganizationalUnitRequest_H_
