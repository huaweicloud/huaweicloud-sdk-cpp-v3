
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_ListAccessSites_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_ListAccessSites_H_


#include <huaweicloud/geip/v3/GeipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <cpprest/details/basic_types.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GEIP_V3_EXPORT  ListAccessSites
    : public ModelBase
{
public:
    ListAccessSites();
    virtual ~ListAccessSites();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListAccessSites members

    /// <summary>
    /// 接入点的ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// - 功能说明：接入点名称 - 取值范围：1-64，支持数字、字母、中文、_(下划线)、-（中划线）、.（点）
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// pop站点托管的region(id)
    /// </summary>

    std::string getProxyRegion() const;
    bool proxyRegionIsSet() const;
    void unsetproxyRegion();
    void setProxyRegion(const std::string& value);

    /// <summary>
    /// 边缘站点az
    /// </summary>

    std::string getIecAzCode() const;
    bool iecAzCodeIsSet() const;
    void unsetiecAzCode();
    void setIecAzCode(const std::string& value);

    /// <summary>
    /// 英文名称
    /// </summary>

    std::string getEnName() const;
    bool enNameIsSet() const;
    void unsetenName();
    void setEnName(const std::string& value);

    /// <summary>
    /// 中文名称
    /// </summary>

    std::string getCnName() const;
    bool cnNameIsSet() const;
    void unsetcnName();
    void setCnName(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    utility::datetime getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const utility::datetime& value);

    /// <summary>
    /// 更新时间
    /// </summary>

    utility::datetime getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const utility::datetime& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string proxyRegion_;
    bool proxyRegionIsSet_;
    std::string iecAzCode_;
    bool iecAzCodeIsSet_;
    std::string enName_;
    bool enNameIsSet_;
    std::string cnName_;
    bool cnNameIsSet_;
    utility::datetime createdAt_;
    bool createdAtIsSet_;
    utility::datetime updatedAt_;
    bool updatedAtIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_ListAccessSites_H_
