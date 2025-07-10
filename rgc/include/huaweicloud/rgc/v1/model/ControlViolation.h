
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_ControlViolation_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_ControlViolation_H_


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
/// 控制策略合规性。
/// </summary>
class HUAWEICLOUD_RGC_V1_EXPORT  ControlViolation
    : public ModelBase
{
public:
    ControlViolation();
    virtual ~ControlViolation();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ControlViolation members

    /// <summary>
    /// 控制策略纳管账号ID。
    /// </summary>

    std::string getAccountId() const;
    bool accountIdIsSet() const;
    void unsetaccountId();
    void setAccountId(const std::string& value);

    /// <summary>
    /// 控制策略纳管账号名称。
    /// </summary>

    std::string getAccountName() const;
    bool accountNameIsSet() const;
    void unsetaccountName();
    void setAccountName(const std::string& value);

    /// <summary>
    /// 控制策略显示名称。
    /// </summary>

    std::string getDisplayName() const;
    bool displayNameIsSet() const;
    void unsetdisplayName();
    void setDisplayName(const std::string& value);

    /// <summary>
    /// 控制策略名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 控制策略ID。
    /// </summary>

    std::string getControlId() const;
    bool controlIdIsSet() const;
    void unsetcontrolId();
    void setControlId(const std::string& value);

    /// <summary>
    /// 父注册OU ID。
    /// </summary>

    std::string getParentOrganizationalUnitId() const;
    bool parentOrganizationalUnitIdIsSet() const;
    void unsetparentOrganizationalUnitId();
    void setParentOrganizationalUnitId(const std::string& value);

    /// <summary>
    /// 父注册OU名称。
    /// </summary>

    std::string getParentOrganizationalUnitName() const;
    bool parentOrganizationalUnitNameIsSet() const;
    void unsetparentOrganizationalUnitName();
    void setParentOrganizationalUnitName(const std::string& value);

    /// <summary>
    /// 区域名称。
    /// </summary>

    std::string getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const std::string& value);

    /// <summary>
    /// 控制策略不合规资源。
    /// </summary>

    std::string getResource() const;
    bool resourceIsSet() const;
    void unsetresource();
    void setResource(const std::string& value);

    /// <summary>
    /// 控制策略不合规资源的名称。
    /// </summary>

    std::string getResourceName() const;
    bool resourceNameIsSet() const;
    void unsetresourceName();
    void setResourceName(const std::string& value);

    /// <summary>
    /// 控制策略不合规资源类型。
    /// </summary>

    std::string getResourceType() const;
    bool resourceTypeIsSet() const;
    void unsetresourceType();
    void setResourceType(const std::string& value);

    /// <summary>
    /// 云服务名称。
    /// </summary>

    std::string getService() const;
    bool serviceIsSet() const;
    void unsetservice();
    void setService(const std::string& value);


protected:
    std::string accountId_;
    bool accountIdIsSet_;
    std::string accountName_;
    bool accountNameIsSet_;
    std::string displayName_;
    bool displayNameIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string controlId_;
    bool controlIdIsSet_;
    std::string parentOrganizationalUnitId_;
    bool parentOrganizationalUnitIdIsSet_;
    std::string parentOrganizationalUnitName_;
    bool parentOrganizationalUnitNameIsSet_;
    std::string region_;
    bool regionIsSet_;
    std::string resource_;
    bool resourceIsSet_;
    std::string resourceName_;
    bool resourceNameIsSet_;
    std::string resourceType_;
    bool resourceTypeIsSet_;
    std::string service_;
    bool serviceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_ControlViolation_H_
