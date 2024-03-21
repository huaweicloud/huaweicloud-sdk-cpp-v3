
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_ListGeipPools_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_ListGeipPools_H_


#include <huaweicloud/geip/v3/GeipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/geip/v3/model/AllowedBandwidthTypes.h>
#include <string>
#include <cpprest/details/basic_types.h>
#include <vector>

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
class HUAWEICLOUD_GEIP_V3_EXPORT  ListGeipPools
    : public ModelBase
{
public:
    ListGeipPools();
    virtual ~ListGeipPools();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListGeipPools members

    /// <summary>
    /// 全域弹性公网IP池的ID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// - 功能说明：全域弹性公网IP池名称 - 取值范围：1-64，支持数字、字母、中文、_(下划线)、-（中划线）、.（点）
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

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
    /// 状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 全域弹性公网IP所属线路
    /// </summary>

    std::string getIsp() const;
    bool ispIsSet() const;
    void unsetisp();
    void setIsp(const std::string& value);

    /// <summary>
    /// - 功能说明：全域弹性公网IP池的版本 - 取值范围：4、6
    /// </summary>

    int32_t getIpVersion() const;
    bool ipVersionIsSet() const;
    void unsetipVersion();
    void setIpVersion(int32_t value);

    /// <summary>
    /// 接入点信息
    /// </summary>

    std::string getAccessSite() const;
    bool accessSiteIsSet() const;
    void unsetaccessSite();
    void setAccessSite(const std::string& value);

    /// <summary>
    /// 类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

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

    /// <summary>
    /// 地址池支持的全域公网带宽类型资源
    /// </summary>

    std::vector<AllowedBandwidthTypes>& getAllowedBandwidthTypes();
    bool allowedBandwidthTypesIsSet() const;
    void unsetallowedBandwidthTypes();
    void setAllowedBandwidthTypes(const std::vector<AllowedBandwidthTypes>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string enName_;
    bool enNameIsSet_;
    std::string cnName_;
    bool cnNameIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string isp_;
    bool ispIsSet_;
    int32_t ipVersion_;
    bool ipVersionIsSet_;
    std::string accessSite_;
    bool accessSiteIsSet_;
    std::string type_;
    bool typeIsSet_;
    utility::datetime createdAt_;
    bool createdAtIsSet_;
    utility::datetime updatedAt_;
    bool updatedAtIsSet_;
    std::vector<AllowedBandwidthTypes> allowedBandwidthTypes_;
    bool allowedBandwidthTypesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_ListGeipPools_H_
