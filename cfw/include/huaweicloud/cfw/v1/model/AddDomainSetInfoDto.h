
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_AddDomainSetInfoDto_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_AddDomainSetInfoDto_H_


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
class HUAWEICLOUD_CFW_V1_EXPORT  AddDomainSetInfoDto
    : public ModelBase
{
public:
    AddDomainSetInfoDto();
    virtual ~AddDomainSetInfoDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddDomainSetInfoDto members

    /// <summary>
    /// 防火墙id，可通过[防火墙ID获取方式](cfw_02_0028.xml)获取
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
    /// 域名组名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 域名组描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 域名信息列表
    /// </summary>

    std::vector<DomainSetInfoDto>& getDomainNames();
    bool domainNamesIsSet() const;
    void unsetdomainNames();
    void setDomainNames(const std::vector<DomainSetInfoDto>& value);

    /// <summary>
    /// 域名组类型，0表示应用域名组，1表示网络域名组
    /// </summary>

    int32_t getDomainSetType() const;
    bool domainSetTypeIsSet() const;
    void unsetdomainSetType();
    void setDomainSetType(int32_t value);


protected:
    std::string fwInstanceId_;
    bool fwInstanceIdIsSet_;
    std::string objectId_;
    bool objectIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::vector<DomainSetInfoDto> domainNames_;
    bool domainNamesIsSet_;
    int32_t domainSetType_;
    bool domainSetTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_AddDomainSetInfoDto_H_
