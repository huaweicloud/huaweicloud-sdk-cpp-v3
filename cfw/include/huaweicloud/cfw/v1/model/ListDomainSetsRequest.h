
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_ListDomainSetsRequest_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_ListDomainSetsRequest_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CFW_V1_EXPORT  ListDomainSetsRequest
    : public ModelBase
{
public:
    ListDomainSetsRequest();
    virtual ~ListDomainSetsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListDomainSetsRequest members

    /// <summary>
    /// 企业项目ID，用户根据组织规划企业项目，对应的ID为企业项目ID，可通过[如何获取企业项目ID](cfw_02_0027.xml)获取，用户未开启企业项目时为0
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 防火墙id，可通过[防火墙ID获取方式](cfw_02_0028.xml)获取
    /// </summary>

    std::string getFwInstanceId() const;
    bool fwInstanceIdIsSet() const;
    void unsetfwInstanceId();
    void setFwInstanceId(const std::string& value);

    /// <summary>
    /// 每页显示个数，范围为1-1024
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 偏移量：指定返回记录的开始位置，必须为数字，取值范围为大于或等于0，默认0
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 防护对象id，是创建云防火墙后用于区分互联网边界防护和VPC边界防护的标志id，可通过调用[查询防火墙实例接口](ListFirewallDetail.xml)获得，通过返回值中的data.records.protect_objects.object_id（.表示各对象之间层级的区分）获得，注意type为0的为互联网边界防护对象id，type为1的为VPC边界防护对象id，type可通过data.records.protect_objects.type（.表示各对象之间层级的区分）获得
    /// </summary>

    std::string getObjectId() const;
    bool objectIdIsSet() const;
    void unsetobjectId();
    void setObjectId(const std::string& value);

    /// <summary>
    /// 关键字，可使用域名组名称或描述
    /// </summary>

    std::string getKeyWord() const;
    bool keyWordIsSet() const;
    void unsetkeyWord();
    void setKeyWord(const std::string& value);

    /// <summary>
    /// 域名组类型，0表示应用域名组，1表示网络域名组
    /// </summary>

    int32_t getDomainSetType() const;
    bool domainSetTypeIsSet() const;
    void unsetdomainSetType();
    void setDomainSetType(int32_t value);

    /// <summary>
    /// 配置状态，-1表示未配置态，0表示配置失败，1表示配置成功，2表示配置中，3表示正常，4表示配置异常
    /// </summary>

    int32_t getConfigStatus() const;
    bool configStatusIsSet() const;
    void unsetconfigStatus();
    void setConfigStatus(int32_t value);


protected:
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string fwInstanceId_;
    bool fwInstanceIdIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    std::string objectId_;
    bool objectIdIsSet_;
    std::string keyWord_;
    bool keyWordIsSet_;
    int32_t domainSetType_;
    bool domainSetTypeIsSet_;
    int32_t configStatus_;
    bool configStatusIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListDomainSetsRequest& dereference_from_shared_ptr(std::shared_ptr<ListDomainSetsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_ListDomainSetsRequest_H_
