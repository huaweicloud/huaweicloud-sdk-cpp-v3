
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_AddDomainListDto_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_AddDomainListDto_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cfw/v1/model/DomainSetInfoDto.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  AddDomainListDto
    : public ModelBase
{
public:
    AddDomainListDto();
    virtual ~AddDomainListDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddDomainListDto members

    /// <summary>
    /// 防火墙实例id，创建云防火墙后用于标志防火墙由系统自动生成的标志id，可通过调用[查询防火墙实例接口](ListFirewallDetail.xml)。
    /// </summary>

    std::string getFwInstanceId() const;
    bool fwInstanceIdIsSet() const;
    void unsetfwInstanceId();
    void setFwInstanceId(const std::string& value);

    /// <summary>
    /// 防护对象id，是创建云防火墙后用于区分互联网边界防护和VPC边界防护的标志id，可通过调用[查询防火墙实例接口](ListFirewallDetail.xml)获得，通过返回值中的data.records.protect_objects.object_id（.表示各对象之间层级的区分）获得，注意type为0的为互联网边界防护对象id，type为1的为VPC边界防护对象id，type可通过data.records.protect_objects.type（.表示各对象之间层级的区分）获得
    /// </summary>

    std::string getObjectId() const;
    bool objectIdIsSet() const;
    void unsetobjectId();
    void setObjectId(const std::string& value);

    /// <summary>
    /// 域名列表
    /// </summary>

    std::vector<DomainSetInfoDto>& getDomainNames();
    bool domainNamesIsSet() const;
    void unsetdomainNames();
    void setDomainNames(const std::vector<DomainSetInfoDto>& value);


protected:
    std::string fwInstanceId_;
    bool fwInstanceIdIsSet_;
    std::string objectId_;
    bool objectIdIsSet_;
    std::vector<DomainSetInfoDto> domainNames_;
    bool domainNamesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_AddDomainListDto_H_
