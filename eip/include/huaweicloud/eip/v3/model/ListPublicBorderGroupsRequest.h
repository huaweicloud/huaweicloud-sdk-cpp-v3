
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_ListPublicBorderGroupsRequest_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_ListPublicBorderGroupsRequest_H_

#include <huaweicloud/eip/v3/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_EIP_V3_EXPORT  ListPublicBorderGroupsRequest
    : public ModelBase
{
public:
    ListPublicBorderGroupsRequest();
    virtual ~ListPublicBorderGroupsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListPublicBorderGroupsRequest members

    /// <summary>
    /// 显示，形式为\&quot;fields&#x3D;id&amp;fields&#x3D;name&amp;...\&quot;  支持字段：publicip_pools/public_border_group
    /// </summary>

    std::string getFields() const;
    bool fieldsIsSet() const;
    void unsetfields();
    void setFields(const std::string& value);


protected:
    std::string fields_;
    bool fieldsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListPublicBorderGroupsRequest& dereference_from_shared_ptr(std::shared_ptr<ListPublicBorderGroupsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_ListPublicBorderGroupsRequest_H_
