
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_ShowPublicipPoolRequest_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_ShowPublicipPoolRequest_H_

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
class HUAWEICLOUD_EIP_V3_EXPORT  ShowPublicipPoolRequest
    : public ModelBase
{
public:
    ShowPublicipPoolRequest();
    virtual ~ShowPublicipPoolRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowPublicipPoolRequest members

    /// <summary>
    /// 公网IP池ID唯一标识
    /// </summary>

    std::string getPublicipPoolId() const;
    bool publicipPoolIdIsSet() const;
    void unsetpublicipPoolId();
    void setPublicipPoolId(const std::string& value);

    /// <summary>
    /// 显示，形式为\&quot;fields&#x3D;id&amp;fields&#x3D;name&amp;...\&quot;  支持字段：id/name/size/used/project_id/status/billing_info/created_at/updated_at/type/shared/is_common/description/tags/enterprise_project_id/allow_share_bandwidth_types/public_border_group
    /// </summary>

    std::string getFields() const;
    bool fieldsIsSet() const;
    void unsetfields();
    void setFields(const std::string& value);


protected:
    std::string publicipPoolId_;
    bool publicipPoolIdIsSet_;
    std::string fields_;
    bool fieldsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowPublicipPoolRequest& dereference_from_shared_ptr(std::shared_ptr<ShowPublicipPoolRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_ShowPublicipPoolRequest_H_
