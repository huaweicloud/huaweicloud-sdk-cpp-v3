
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_ListSecurityGroupsRequest_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_ListSecurityGroupsRequest_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_VPC_V2_EXPORT  ListSecurityGroupsRequest
    : public ModelBase
{
public:
    ListSecurityGroupsRequest();
    virtual ~ListSecurityGroupsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListSecurityGroupsRequest members

    /// <summary>
    /// 每页返回的个数
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 分页查询起始的资源ID，为空时查询第一页
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);

    /// <summary>
    /// 按照vpc_id过滤查询
    /// </summary>

    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);

    /// <summary>
    /// 功能说明：企业项目ID。可以使用该字段过滤某个企业项目下的安全组。  取值范围：最大长度36字节，带“-”连字符的UUID格式，或者是字符串“0”。“0”表示默认企业项目。若需要查询当前用户所有企业项目绑定的安全组，或者企业项目子账号需要进行安全组列表展示，请传参all_granted_eps。
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);


protected:
    int32_t limit_;
    bool limitIsSet_;
    std::string marker_;
    bool markerIsSet_;
    std::string vpcId_;
    bool vpcIdIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListSecurityGroupsRequest& dereference_from_shared_ptr(std::shared_ptr<ListSecurityGroupsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_ListSecurityGroupsRequest_H_
