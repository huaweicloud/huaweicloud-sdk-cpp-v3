
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_ManagedAccount_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_ManagedAccount_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <cpprest/details/basic_types.h>
#include <huaweicloud/rgc/v1/model/RegionManagedList.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 注册OU信息。
/// </summary>
class HUAWEICLOUD_RGC_V1_EXPORT  ManagedAccount
    : public ModelBase
{
public:
    ManagedAccount();
    virtual ~ManagedAccount();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ManagedAccount members

    /// <summary>
    /// 纳管账号的Landing Zone版本。
    /// </summary>

    std::string getLandingZoneVersion() const;
    bool landingZoneVersionIsSet() const;
    void unsetlandingZoneVersion();
    void setLandingZoneVersion(const std::string& value);

    /// <summary>
    /// 管理员账号ID。
    /// </summary>

    std::string getManageAccountId() const;
    bool manageAccountIdIsSet() const;
    void unsetmanageAccountId();
    void setManageAccountId(const std::string& value);

    /// <summary>
    /// 纳管账号ID。
    /// </summary>

    std::string getAccountId() const;
    bool accountIdIsSet() const;
    void unsetaccountId();
    void setAccountId(const std::string& value);

    /// <summary>
    /// 纳管账号名称。
    /// </summary>

    std::string getAccountName() const;
    bool accountNameIsSet() const;
    void unsetaccountName();
    void setAccountName(const std::string& value);

    /// <summary>
    /// 纳管账号类型。
    /// </summary>

    std::string getAccountType() const;
    bool accountTypeIsSet() const;
    void unsetaccountType();
    void setAccountType(const std::string& value);

    /// <summary>
    /// 纳管账号的创建来源，包括CUSTOM和RGC。
    /// </summary>

    std::string getOwner() const;
    bool ownerIsSet() const;
    void unsetowner();
    void setOwner(const std::string& value);

    /// <summary>
    /// 纳管账号状态。
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// 错误状态描述信息。
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

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
    /// Identity Center用户名。
    /// </summary>

    std::string getIdentityStoreUserName() const;
    bool identityStoreUserNameIsSet() const;
    void unsetidentityStoreUserName();
    void setIdentityStoreUserName(const std::string& value);

    /// <summary>
    /// 模板ID。
    /// </summary>

    std::string getBlueprintProductId() const;
    bool blueprintProductIdIsSet() const;
    void unsetblueprintProductId();
    void setBlueprintProductId(const std::string& value);

    /// <summary>
    /// 模板版本。
    /// </summary>

    std::string getBlueprintProductVersion() const;
    bool blueprintProductVersionIsSet() const;
    void unsetblueprintProductVersion();
    void setBlueprintProductVersion(const std::string& value);

    /// <summary>
    /// 模板部署状态，包括失败, 完成, 进行中。
    /// </summary>

    std::string getBlueprintStatus() const;
    bool blueprintStatusIsSet() const;
    void unsetblueprintStatus();
    void setBlueprintStatus(const std::string& value);

    /// <summary>
    /// 模板是否包含多账号资源。
    /// </summary>

    bool isIsBlueprintHasMultiAccountResource() const;
    bool isBlueprintHasMultiAccountResourceIsSet() const;
    void unsetisBlueprintHasMultiAccountResource();
    void setIsBlueprintHasMultiAccountResource(bool value);

    /// <summary>
    /// 区域信息。
    /// </summary>

    std::vector<RegionManagedList>& getRegions();
    bool regionsIsSet() const;
    void unsetregions();
    void setRegions(const std::vector<RegionManagedList>& value);

    /// <summary>
    /// 纳管账号的创建时间。
    /// </summary>

    utility::datetime getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const utility::datetime& value);

    /// <summary>
    /// 纳管账号的更新时间。
    /// </summary>

    utility::datetime getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const utility::datetime& value);


protected:
    std::string landingZoneVersion_;
    bool landingZoneVersionIsSet_;
    std::string manageAccountId_;
    bool manageAccountIdIsSet_;
    std::string accountId_;
    bool accountIdIsSet_;
    std::string accountName_;
    bool accountNameIsSet_;
    std::string accountType_;
    bool accountTypeIsSet_;
    std::string owner_;
    bool ownerIsSet_;
    std::string state_;
    bool stateIsSet_;
    std::string message_;
    bool messageIsSet_;
    std::string parentOrganizationalUnitId_;
    bool parentOrganizationalUnitIdIsSet_;
    std::string parentOrganizationalUnitName_;
    bool parentOrganizationalUnitNameIsSet_;
    std::string identityStoreUserName_;
    bool identityStoreUserNameIsSet_;
    std::string blueprintProductId_;
    bool blueprintProductIdIsSet_;
    std::string blueprintProductVersion_;
    bool blueprintProductVersionIsSet_;
    std::string blueprintStatus_;
    bool blueprintStatusIsSet_;
    bool isBlueprintHasMultiAccountResource_;
    bool isBlueprintHasMultiAccountResourceIsSet_;
    std::vector<RegionManagedList> regions_;
    bool regionsIsSet_;
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

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_ManagedAccount_H_
