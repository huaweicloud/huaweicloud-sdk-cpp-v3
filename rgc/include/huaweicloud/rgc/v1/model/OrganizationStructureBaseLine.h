
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_OrganizationStructureBaseLine_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_OrganizationStructureBaseLine_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rgc/v1/model/AccountBaseline.h>
#include <huaweicloud/rgc/v1/model/OrganizationalUnitTypeForSetup.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 纳管账号体系基础设置。
/// </summary>
class HUAWEICLOUD_RGC_V1_EXPORT  OrganizationStructureBaseLine
    : public ModelBase
{
public:
    OrganizationStructureBaseLine();
    virtual ~OrganizationStructureBaseLine();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OrganizationStructureBaseLine members

    /// <summary>
    /// 注册OU名称。
    /// </summary>

    std::string getOrganizationalUnitName() const;
    bool organizationalUnitNameIsSet() const;
    void unsetorganizationalUnitName();
    void setOrganizationalUnitName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    OrganizationalUnitTypeForSetup getOrganizationalUnitType() const;
    bool organizationalUnitTypeIsSet() const;
    void unsetorganizationalUnitType();
    void setOrganizationalUnitType(const OrganizationalUnitTypeForSetup& value);

    /// <summary>
    /// 纳管账号基本信息。
    /// </summary>

    std::vector<AccountBaseline>& getAccounts();
    bool accountsIsSet() const;
    void unsetaccounts();
    void setAccounts(const std::vector<AccountBaseline>& value);


protected:
    std::string organizationalUnitName_;
    bool organizationalUnitNameIsSet_;
    OrganizationalUnitTypeForSetup organizationalUnitType_;
    bool organizationalUnitTypeIsSet_;
    std::vector<AccountBaseline> accounts_;
    bool accountsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_OrganizationStructureBaseLine_H_
