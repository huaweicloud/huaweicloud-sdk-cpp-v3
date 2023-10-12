
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_RouteTableListResp_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_RouteTableListResp_H_


#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/SubnetList.h>
#include <string>
#include <cpprest/details/basic_types.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_VPC_V2_EXPORT  RouteTableListResp
    : public ModelBase
{
public:
    RouteTableListResp();
    virtual ~RouteTableListResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RouteTableListResp members

    /// <summary>
    /// 功能说明：路由表ID  取值范围：标准UUID
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 功能说明：路由表名称  取值范围：0-64个字符，支持数字、字母、中文、_(下划线)、-（中划线）、.（点）
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 功能说明：是否为默认路由表  取值范围：true表示默认路由表；false表示自定义路由表
    /// </summary>

    bool isDefault() const;
    bool defaultIsSet() const;
    void unsetdefault();
    void setDefault(bool value);

    /// <summary>
    /// 功能说明：路由表所关联的子网  约束：只能关联路由表所属VPC下的子网
    /// </summary>

    std::vector<SubnetList>& getSubnets();
    bool subnetsIsSet() const;
    void unsetsubnets();
    void setSubnets(const std::vector<SubnetList>& value);

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);

    /// <summary>
    /// 路由表所在的虚拟私有云ID
    /// </summary>

    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);

    /// <summary>
    /// 功能说明：路由表描述信息  取值范围：0-255个字符，不能包含“&lt;”和“&gt;”
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 功能说明：资源创建UTC时间 格式：yyyy-MM-ddTHH:mm:ss
    /// </summary>

    utility::datetime getCreatedAt() const;
    bool createdAtIsSet() const;
    void unsetcreatedAt();
    void setCreatedAt(const utility::datetime& value);

    /// <summary>
    /// 功能说明：资源更新UTC时间 格式：yyyy-MM-ddTHH:mm:ss
    /// </summary>

    utility::datetime getUpdatedAt() const;
    bool updatedAtIsSet() const;
    void unsetupdatedAt();
    void setUpdatedAt(const utility::datetime& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    bool default_;
    bool defaultIsSet_;
    std::vector<SubnetList> subnets_;
    bool subnetsIsSet_;
    std::string tenantId_;
    bool tenantIdIsSet_;
    std::string vpcId_;
    bool vpcIdIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    utility::datetime createdAt_;
    bool createdAtIsSet_;
    utility::datetime updatedAt_;
    bool updatedAtIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_RouteTableListResp_H_
