
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ProductInfoBeanNew_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ProductInfoBeanNew_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

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
class HUAWEICLOUD_DBSS_V1_EXPORT  ProductInfoBeanNew
    : public ModelBase
{
public:
    ProductInfoBeanNew();
    virtual ~ProductInfoBeanNew();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProductInfoBeanNew members

    /// <summary>
    /// 所有资源名称
    /// </summary>

    std::vector<std::string>& getAllResourceNames();
    bool allResourceNamesIsSet() const;
    void unsetallResourceNames();
    void setAllResourceNames(const std::vector<std::string>& value);

    /// <summary>
    /// 云服务类型
    /// </summary>

    std::string getCloudServiceType() const;
    bool cloudServiceTypeIsSet() const;
    void unsetcloudServiceType();
    void setCloudServiceType(const std::string& value);

    /// <summary>
    /// 显示ID
    /// </summary>

    std::string getDisplayId() const;
    bool displayIdIsSet() const;
    void unsetdisplayId();
    void setDisplayId(const std::string& value);

    /// <summary>
    /// 产品ID
    /// </summary>

    std::string getProductId() const;
    bool productIdIsSet() const;
    void unsetproductId();
    void setProductId(const std::string& value);

    /// <summary>
    /// 产品规格描述
    /// </summary>

    std::string getProductSpecDesc() const;
    bool productSpecDescIsSet() const;
    void unsetproductSpecDesc();
    void setProductSpecDesc(const std::string& value);

    /// <summary>
    /// 资源名称
    /// </summary>

    std::string getResourceName() const;
    bool resourceNameIsSet() const;
    void unsetresourceName();
    void setResourceName(const std::string& value);

    /// <summary>
    /// 资源规格
    /// </summary>

    std::string getResourceSpecCode() const;
    bool resourceSpecCodeIsSet() const;
    void unsetresourceSpecCode();
    void setResourceSpecCode(const std::string& value);

    /// <summary>
    /// 资源类型: - hws.resource.type.dbss：数据库审计
    /// </summary>

    std::string getResourceType() const;
    bool resourceTypeIsSet() const;
    void unsetresourceType();
    void setResourceType(const std::string& value);


protected:
    std::vector<std::string> allResourceNames_;
    bool allResourceNamesIsSet_;
    std::string cloudServiceType_;
    bool cloudServiceTypeIsSet_;
    std::string displayId_;
    bool displayIdIsSet_;
    std::string productId_;
    bool productIdIsSet_;
    std::string productSpecDesc_;
    bool productSpecDescIsSet_;
    std::string resourceName_;
    bool resourceNameIsSet_;
    std::string resourceSpecCode_;
    bool resourceSpecCodeIsSet_;
    std::string resourceType_;
    bool resourceTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ProductInfoBeanNew_H_
