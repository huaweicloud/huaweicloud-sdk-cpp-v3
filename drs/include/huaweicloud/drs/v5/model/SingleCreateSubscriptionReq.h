
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_SingleCreateSubscriptionReq_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_SingleCreateSubscriptionReq_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/SubscriptionSourceEndpointInfo.h>
#include <string>
#include <huaweicloud/drs/v5/model/ResourceTag.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建单个订阅任务的请求体
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  SingleCreateSubscriptionReq
    : public ModelBase
{
public:
    SingleCreateSubscriptionReq();
    virtual ~SingleCreateSubscriptionReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SingleCreateSubscriptionReq members

    /// <summary>
    /// 任务名称 约束：任务名称在4位到50位之间，不区分大小写，可以包含字母、数字、中划线或下划线，不能包括其他特殊字符。 - 最小长度：4 - 最大长度：50
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 任务描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 实例类型，仅支持rds
    /// </summary>

    std::string getInstanceType() const;
    bool instanceTypeIsSet() const;
    void unsetinstanceType();
    void setInstanceType(const std::string& value);

    /// <summary>
    /// 企业项目id
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 标签
    /// </summary>

    std::vector<ResourceTag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<ResourceTag>& value);

    /// <summary>
    /// 
    /// </summary>

    SubscriptionSourceEndpointInfo getSourceEndpointInfo() const;
    bool sourceEndpointInfoIsSet() const;
    void unsetsourceEndpointInfo();
    void setSourceEndpointInfo(const SubscriptionSourceEndpointInfo& value);

    /// <summary>
    /// 是否创建委托，取值： - true：创建 - false：不创建 默认为false
    /// </summary>

    bool isIsGrantNewAgency() const;
    bool isGrantNewAgencyIsSet() const;
    void unsetisGrantNewAgency();
    void setIsGrantNewAgency(bool value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string instanceType_;
    bool instanceTypeIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::vector<ResourceTag> tags_;
    bool tagsIsSet_;
    SubscriptionSourceEndpointInfo sourceEndpointInfo_;
    bool sourceEndpointInfoIsSet_;
    bool isGrantNewAgency_;
    bool isGrantNewAgencyIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_SingleCreateSubscriptionReq_H_
