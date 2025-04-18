
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_CreateInstancePeriodRequest_product_infos_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_CreateInstancePeriodRequest_product_infos_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  CreateInstancePeriodRequest_product_infos
    : public ModelBase
{
public:
    CreateInstancePeriodRequest_product_infos();
    virtual ~CreateInstancePeriodRequest_product_infos();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateInstancePeriodRequest_product_infos members

    /// <summary>
    /// 产品ID
    /// </summary>

    std::string getProductId() const;
    bool productIdIsSet() const;
    void unsetproductId();
    void setProductId(const std::string& value);

    /// <summary>
    /// 服务类型： - hws.service.type.dbss
    /// </summary>

    std::string getCloudServiceType() const;
    bool cloudServiceTypeIsSet() const;
    void unsetcloudServiceType();
    void setCloudServiceType(const std::string& value);

    /// <summary>
    /// 资源类型: - hws.resource.type.dbss
    /// </summary>

    std::string getResourceType() const;
    bool resourceTypeIsSet() const;
    void unsetresourceType();
    void setResourceType(const std::string& value);

    /// <summary>
    /// 资源规格： - dbss.bypassaudit.low - dbss.bypassaudit.medium - dbss.bypassaudit.high
    /// </summary>

    std::string getResourceSpecCode() const;
    bool resourceSpecCodeIsSet() const;
    void unsetresourceSpecCode();
    void setResourceSpecCode(const std::string& value);

    /// <summary>
    /// 产品规格描述。json字符串格式 ：{\&quot;specDesc\&quot;:{\&quot;zh-cn\&quot;:{\&quot;key1\&quot;:\&quot;value1\&quot;},\&quot;en-us\&quot;:{\&quot;key1\&quot;:\&quot;value1\&quot;}}}。key和value为用户自定义希望展示的产品描述信息。
    /// </summary>

    std::string getProductSpecDesc() const;
    bool productSpecDescIsSet() const;
    void unsetproductSpecDesc();
    void setProductSpecDesc(const std::string& value);


protected:
    std::string productId_;
    bool productIdIsSet_;
    std::string cloudServiceType_;
    bool cloudServiceTypeIsSet_;
    std::string resourceType_;
    bool resourceTypeIsSet_;
    std::string resourceSpecCode_;
    bool resourceSpecCodeIsSet_;
    std::string productSpecDesc_;
    bool productSpecDescIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_CreateInstancePeriodRequest_product_infos_H_
