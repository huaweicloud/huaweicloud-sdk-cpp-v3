
#ifndef HUAWEICLOUD_SDK_GA_V1_MODEL_ByoipPool_H_
#define HUAWEICLOUD_SDK_GA_V1_MODEL_ByoipPool_H_


#include <huaweicloud/ga/v1/GaExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ga/v1/model/Area.h>
#include <string>
#include <cpprest/details/basic_types.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 自带IP地址池。
/// </summary>
class HUAWEICLOUD_GA_V1_EXPORT  ByoipPool
    : public ModelBase
{
public:
    ByoipPool();
    virtual ~ByoipPool();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ByoipPool members

    /// <summary>
    /// 自带IP地址池ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 自带IP地址池的IP网段。
    /// </summary>

    std::string getCidr() const;
    bool cidrIsSet() const;
    void unsetcidr();
    void setCidr(const std::string& value);

    /// <summary>
    /// IP地址类型。 取值范围：IPV4、IPV6
    /// </summary>

    std::string getIpType() const;
    bool ipTypeIsSet() const;
    void unsetipType();
    void setIpType(const std::string& value);

    /// <summary>
    /// 创建时间。
    /// </summary>

    utility::datetime getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const utility::datetime& value);

    /// <summary>
    /// 更新时间。
    /// </summary>

    std::string getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    Area getArea() const;
    bool areaIsSet() const;
    void unsetarea();
    void setArea(const Area& value);

    /// <summary>
    /// 租户ID。
    /// </summary>

    std::string getDomainId() const;
    bool domainIdIsSet() const;
    void unsetdomainId();
    void setDomainId(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string cidr_;
    bool cidrIsSet_;
    std::string ipType_;
    bool ipTypeIsSet_;
    utility::datetime createdAt_;
    bool createdAtIsSet_;
    std::string updatedAt_;
    bool updatedAtIsSet_;
    Area area_;
    bool areaIsSet_;
    std::string domainId_;
    bool domainIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GA_V1_MODEL_ByoipPool_H_
