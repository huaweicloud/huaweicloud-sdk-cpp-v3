
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
    /// 企业项目id，用户支持企业项目后，由企业项目生成的id。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 防火墙实例id，创建云防火墙后用于标志防火墙由系统自动生成的标志id，可通过调用查询防火墙实例接口获得。具体可参考APIExlorer和帮助中心FAQ。默认情况下，fw_instance_Id为空时，返回帐号下第一个墙的信息；fw_instance_Id非空时，返回与fw_instance_Id对应墙的信息。
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
    /// 防护对象id，是创建云防火墙后用于区分互联网边界防护和VPC边界防护的标志id，可通过调用查询防火墙实例接口获得，注意type为0的为互联网边界防护对象id，type为1的为VPC边界防护对象id。具体可参考APIExlorer和帮助中心FAQ。
    /// </summary>

    std::string getObjectId() const;
    bool objectIdIsSet() const;
    void unsetobjectId();
    void setObjectId(const std::string& value);

    /// <summary>
    /// 关键字
    /// </summary>

    std::string getKeyWord() const;
    bool keyWordIsSet() const;
    void unsetkeyWord();
    void setKeyWord(const std::string& value);

    /// <summary>
    /// 域名组类型，0表示URL过滤，1表示地址解析
    /// </summary>

    int32_t getDomainSetType() const;
    bool domainSetTypeIsSet() const;
    void unsetdomainSetType();
    void setDomainSetType(int32_t value);

    /// <summary>
    /// 配置状态
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
