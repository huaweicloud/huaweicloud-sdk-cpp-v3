
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowManagedOrganizationalUnitResponse_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowManagedOrganizationalUnitResponse_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rgc/v1/model/CreateOrganizationalUnit.h>
#include <huaweicloud/rgc/v1/model/OrganizationalUnitType.h>
#include <string>
#include <cpprest/details/basic_types.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_RGC_V1_EXPORT  ShowManagedOrganizationalUnitResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowManagedOrganizationalUnitResponse();
    virtual ~ShowManagedOrganizationalUnitResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowManagedOrganizationalUnitResponse members

    /// <summary>
    /// 管理员账号ID。
    /// </summary>

    std::string getManageAccountId() const;
    bool manageAccountIdIsSet() const;
    void unsetmanageAccountId();
    void setManageAccountId(const std::string& value);

    /// <summary>
    /// 注册OU ID。
    /// </summary>

    std::string getOrganizationalUnitId() const;
    bool organizationalUnitIdIsSet() const;
    void unsetorganizationalUnitId();
    void setOrganizationalUnitId(const std::string& value);

    /// <summary>
    /// 注册OU名称。
    /// </summary>

    std::string getOrganizationalUnitName() const;
    bool organizationalUnitNameIsSet() const;
    void unsetorganizationalUnitName();
    void setOrganizationalUnitName(const std::string& value);

    /// <summary>
    /// 注册OU状态。
    /// </summary>

    std::string getOrganizationalUnitStatus() const;
    bool organizationalUnitStatusIsSet() const;
    void unsetorganizationalUnitStatus();
    void setOrganizationalUnitStatus(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    OrganizationalUnitType getOrganizationalUnitType() const;
    bool organizationalUnitTypeIsSet() const;
    void unsetorganizationalUnitType();
    void setOrganizationalUnitType(const OrganizationalUnitType& value);

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
    /// 注册OU的创建时间。
    /// </summary>

    utility::datetime getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const utility::datetime& value);

    /// <summary>
    /// 注册OU的Landing Zone版本。
    /// </summary>

    std::string getLandingZoneVersion() const;
    bool landingZoneVersionIsSet() const;
    void unsetlandingZoneVersion();
    void setLandingZoneVersion(const std::string& value);

    /// <summary>
    /// 注册OU的更新时间。
    /// </summary>

    utility::datetime getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const utility::datetime& value);

    /// <summary>
    /// 错误信息描述。
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);


protected:
    std::string manageAccountId_;
    bool manageAccountIdIsSet_;
    std::string organizationalUnitId_;
    bool organizationalUnitIdIsSet_;
    std::string organizationalUnitName_;
    bool organizationalUnitNameIsSet_;
    std::string organizationalUnitStatus_;
    bool organizationalUnitStatusIsSet_;
    OrganizationalUnitType organizationalUnitType_;
    bool organizationalUnitTypeIsSet_;
    std::string parentOrganizationalUnitId_;
    bool parentOrganizationalUnitIdIsSet_;
    std::string parentOrganizationalUnitName_;
    bool parentOrganizationalUnitNameIsSet_;
    utility::datetime createdAt_;
    bool createdAtIsSet_;
    std::string landingZoneVersion_;
    bool landingZoneVersionIsSet_;
    utility::datetime updatedAt_;
    bool updatedAtIsSet_;
    std::string message_;
    bool messageIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowManagedOrganizationalUnitResponse_H_
