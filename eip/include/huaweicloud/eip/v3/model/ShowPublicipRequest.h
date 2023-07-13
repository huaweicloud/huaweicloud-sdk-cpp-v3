
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_ShowPublicipRequest_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_ShowPublicipRequest_H_

#include <huaweicloud/eip/v3/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

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
class HUAWEICLOUD_EIP_V3_EXPORT  ShowPublicipRequest
    : public ModelBase
{
public:
    ShowPublicipRequest();
    virtual ~ShowPublicipRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowPublicipRequest members

    /// <summary>
    /// 弹性公网IP的ID
    /// </summary>

    std::string getPublicipId() const;
    bool publicipIdIsSet() const;
    void unsetpublicipId();
    void setPublicipId(const std::string& value);

    /// <summary>
    /// 显示，形式为\&quot;fields&#x3D;id&amp;fields&#x3D;owner&amp;...\&quot;  支持字段：id/project_id/ip_version/type/public_ip_address/public_ipv6_address/network_type/status/description/created_at/updated_at/vnic/bandwidth/associate_instance_type/associate_instance_id/lock_status/billing_info/tags/enterprise_project_id/publicip_pool_name/allow_share_bandwidth_types/alias/publicip_pool_id/public_border_group
    /// </summary>

    std::vector<std::string>& getFields();
    bool fieldsIsSet() const;
    void unsetfields();
    void setFields(const std::vector<std::string>& value);


protected:
    std::string publicipId_;
    bool publicipIdIsSet_;
    std::vector<std::string> fields_;
    bool fieldsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowPublicipRequest& dereference_from_shared_ptr(std::shared_ptr<ShowPublicipRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_ShowPublicipRequest_H_
