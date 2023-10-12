
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateTransferResponseBody_log_transfer_info_log_agency_transfer_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateTransferResponseBody_log_transfer_info_log_agency_transfer_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 委托转储信息。若转储为委托转储，则会返回该参数
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  CreateTransferResponseBody_log_transfer_info_log_agency_transfer
    : public ModelBase
{
public:
    CreateTransferResponseBody_log_transfer_info_log_agency_transfer();
    virtual ~CreateTransferResponseBody_log_transfer_info_log_agency_transfer();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateTransferResponseBody_log_transfer_info_log_agency_transfer members

    /// <summary>
    /// 委托方账号ID
    /// </summary>

    std::string getAgencyDomainId() const;
    bool agencyDomainIdIsSet() const;
    void unsetagencyDomainId();
    void setAgencyDomainId(const std::string& value);

    /// <summary>
    /// 委托方账号名称
    /// </summary>

    std::string getAgencyDomainName() const;
    bool agencyDomainNameIsSet() const;
    void unsetagencyDomainName();
    void setAgencyDomainName(const std::string& value);

    /// <summary>
    /// 委托方配置的委托名称
    /// </summary>

    std::string getAgencyName() const;
    bool agencyNameIsSet() const;
    void unsetagencyName();
    void setAgencyName(const std::string& value);

    /// <summary>
    /// 委托方项目ID
    /// </summary>

    std::string getAgencyProjectId() const;
    bool agencyProjectIdIsSet() const;
    void unsetagencyProjectId();
    void setAgencyProjectId(const std::string& value);

    /// <summary>
    /// 被委托方账号ID，实际配置转储的账号ID
    /// </summary>

    std::string getBeAgencyDomainId() const;
    bool beAgencyDomainIdIsSet() const;
    void unsetbeAgencyDomainId();
    void setBeAgencyDomainId(const std::string& value);

    /// <summary>
    /// 被委托方项目ID，实际配置转储的账号的项目ID
    /// </summary>

    std::string getBeAgencyProjectId() const;
    bool beAgencyProjectIdIsSet() const;
    void unsetbeAgencyProjectId();
    void setBeAgencyProjectId(const std::string& value);


protected:
    std::string agencyDomainId_;
    bool agencyDomainIdIsSet_;
    std::string agencyDomainName_;
    bool agencyDomainNameIsSet_;
    std::string agencyName_;
    bool agencyNameIsSet_;
    std::string agencyProjectId_;
    bool agencyProjectIdIsSet_;
    std::string beAgencyDomainId_;
    bool beAgencyDomainIdIsSet_;
    std::string beAgencyProjectId_;
    bool beAgencyProjectIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateTransferResponseBody_log_transfer_info_log_agency_transfer_H_
