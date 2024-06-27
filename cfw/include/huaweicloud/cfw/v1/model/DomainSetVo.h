
#ifndef HUAWEICLOUD_SDK_CFW_V1_MODEL_DomainSetVo_H_
#define HUAWEICLOUD_SDK_CFW_V1_MODEL_DomainSetVo_H_


#include <huaweicloud/cfw/v1/CfwExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/cfw/v1/model/UseRuleVO.h>

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
class HUAWEICLOUD_CFW_V1_EXPORT  DomainSetVo
    : public ModelBase
{
public:
    DomainSetVo();
    virtual ~DomainSetVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DomainSetVo members

    /// <summary>
    /// 域名组id
    /// </summary>

    std::string getSetId() const;
    bool setIdIsSet() const;
    void unsetsetId();
    void setSetId(const std::string& value);

    /// <summary>
    /// 域名组名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 引用次数
    /// </summary>

    int32_t getRefCount() const;
    bool refCountIsSet() const;
    void unsetrefCount();
    void setRefCount(int32_t value);

    /// <summary>
    /// 域名组类型，0表示应用域名组，1表示网络域名组
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

    /// <summary>
    /// 异常信息
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

    /// <summary>
    /// 使用规则id列表
    /// </summary>

    std::vector<UseRuleVO>& getRules();
    bool rulesIsSet() const;
    void unsetrules();
    void setRules(const std::vector<UseRuleVO>& value);


protected:
    std::string setId_;
    bool setIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    int32_t refCount_;
    bool refCountIsSet_;
    int32_t domainSetType_;
    bool domainSetTypeIsSet_;
    int32_t configStatus_;
    bool configStatusIsSet_;
    std::string message_;
    bool messageIsSet_;
    std::vector<UseRuleVO> rules_;
    bool rulesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CFW_V1_MODEL_DomainSetVo_H_
