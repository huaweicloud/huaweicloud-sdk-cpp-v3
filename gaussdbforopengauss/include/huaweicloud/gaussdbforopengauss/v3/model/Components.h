
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_Components_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_Components_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 组件列表
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  Components
    : public ModelBase
{
public:
    Components();
    virtual ~Components();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Components members

    /// <summary>
    /// 组件id，当组件类型为DN，组件id为6001，则对应的值为dn_6001。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 节点类型，取值为“master”、“slave”，分别对应于主节点、备节点。
    /// </summary>

    std::string getRole() const;
    bool roleIsSet() const;
    void unsetrole();
    void setRole(const std::string& value);

    /// <summary>
    /// 组件状态。 Primary：该组件为主。 Normal：该组件状态正常。 Down：该组件处于宕机状态。 Standby：该组件为备。 StateFollower：该ETCD为备。 StateLeader：该ETCD为主。 StateCandidate：该ETCD为仲裁。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 分组id，只有dn组件有分组id，用于区分是否是同一个分片下的组件。其他组件为空字符串。
    /// </summary>

    std::string getDistributedId() const;
    bool distributedIdIsSet() const;
    void unsetdistributedId();
    void setDistributedId(const std::string& value);

    /// <summary>
    /// 节点类型，包括：DN, CN, GTM, CM, ETCD。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 详情。
    /// </summary>

    std::string getDetail() const;
    bool detailIsSet() const;
    void unsetdetail();
    void setDetail(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string role_;
    bool roleIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string distributedId_;
    bool distributedIdIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string detail_;
    bool detailIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_Components_H_
