
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_CsbResource_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_CsbResource_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dbss/v1/model/AffectedResource.h>
#include <huaweicloud/dbss/v1/model/CsbResourceTag.h>
#include <string>
#include <huaweicloud/dbss/v1/model/ResourceEnvironment.h>
#include <cpprest/details/basic_types.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  CsbResource
    : public ModelBase
{
public:
    CsbResource();
    virtual ~CsbResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CsbResource members

    /// <summary>
    /// 资源标签
    /// </summary>

    std::vector<CsbResourceTag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<CsbResourceTag>& value);

    /// <summary>
    /// 防护资源对象列表
    /// </summary>

    std::vector<AffectedResource>& getAffectedResources();
    bool affectedResourcesIsSet() const;
    void unsetaffectedResources();
    void setAffectedResources(const std::vector<AffectedResource>& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    utility::datetime getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const utility::datetime& value);

    /// <summary>
    /// 资源描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ResourceEnvironment getEnvironment() const;
    bool environmentIsSet() const;
    void unsetenvironment();
    void setEnvironment(const ResourceEnvironment& value);

    /// <summary>
    /// 资源名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 所属云服务，dbss
    /// </summary>

    std::string getProvider() const;
    bool providerIsSet() const;
    void unsetprovider();
    void setProvider(const std::string& value);

    /// <summary>
    /// 资源ID
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);

    /// <summary>
    /// 安全组ID
    /// </summary>

    std::string getSecurityGroupId() const;
    bool securityGroupIdIsSet() const;
    void unsetsecurityGroupId();
    void setSecurityGroupId(const std::string& value);

    /// <summary>
    /// 子网ID
    /// </summary>

    std::string getSubnetId() const;
    bool subnetIdIsSet() const;
    void unsetsubnetId();
    void setSubnetId(const std::string& value);

    /// <summary>
    /// 资源类型   - cloudservers: 审计   - dbEncrypt: 加密   - dbOm: 运维
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 更新时间
    /// </summary>

    utility::datetime getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const utility::datetime& value);

    /// <summary>
    /// 资源URN
    /// </summary>

    std::string getUrn() const;
    bool urnIsSet() const;
    void unseturn();
    void setUrn(const std::string& value);

    /// <summary>
    /// 资源URN扩展
    /// </summary>

    std::string getUrnext() const;
    bool urnextIsSet() const;
    void unseturnext();
    void setUrnext(const std::string& value);

    /// <summary>
    /// VPC ID
    /// </summary>

    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);


protected:
    std::vector<CsbResourceTag> tags_;
    bool tagsIsSet_;
    std::vector<AffectedResource> affectedResources_;
    bool affectedResourcesIsSet_;
    utility::datetime createTime_;
    bool createTimeIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    ResourceEnvironment environment_;
    bool environmentIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string provider_;
    bool providerIsSet_;
    std::string resourceId_;
    bool resourceIdIsSet_;
    std::string securityGroupId_;
    bool securityGroupIdIsSet_;
    std::string subnetId_;
    bool subnetIdIsSet_;
    std::string type_;
    bool typeIsSet_;
    utility::datetime updateTime_;
    bool updateTimeIsSet_;
    std::string urn_;
    bool urnIsSet_;
    std::string urnext_;
    bool urnextIsSet_;
    std::string vpcId_;
    bool vpcIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_CsbResource_H_
