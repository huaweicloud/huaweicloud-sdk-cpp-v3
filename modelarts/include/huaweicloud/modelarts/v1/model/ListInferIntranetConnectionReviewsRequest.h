
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListInferIntranetConnectionReviewsRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListInferIntranetConnectionReviewsRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  ListInferIntranetConnectionReviewsRequest
    : public ModelBase
{
public:
    ListInferIntranetConnectionReviewsRequest();
    virtual ~ListInferIntranetConnectionReviewsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListInferIntranetConnectionReviewsRequest members

    /// <summary>
    /// **参数解释：** 内网访问场景。 **约束限制：** 不涉及。 **取值范围：** - POOL：用户资源池接入场景 - VPC：用户VPC网络接入场景 **默认取值：** 不涉及。
    /// </summary>

    std::string getScene() const;
    bool sceneIsSet() const;
    void unsetscene();
    void setScene(const std::string& value);

    /// <summary>
    /// **参数解释：** 内网接入id。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释：** 申请方domain ID。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getApplicantDomainId() const;
    bool applicantDomainIdIsSet() const;
    void unsetapplicantDomainId();
    void setApplicantDomainId(const std::string& value);

    /// <summary>
    /// **参数解释：** 服务ID。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getServiceId() const;
    bool serviceIdIsSet() const;
    void unsetserviceId();
    void setServiceId(const std::string& value);

    /// <summary>
    /// **参数解释：** 申请方用户名。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getApplicantUserName() const;
    bool applicantUserNameIsSet() const;
    void unsetapplicantUserName();
    void setApplicantUserName(const std::string& value);

    /// <summary>
    /// **参数解释：** 服务名称。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getServiceName() const;
    bool serviceNameIsSet() const;
    void unsetserviceName();
    void setServiceName(const std::string& value);

    /// <summary>
    /// **参数解释：** VPC名称。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getVpcName() const;
    bool vpcNameIsSet() const;
    void unsetvpcName();
    void setVpcName(const std::string& value);

    /// <summary>
    /// **参数解释：** VPC ID。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getVpcId() const;
    bool vpcIdIsSet() const;
    void unsetvpcId();
    void setVpcId(const std::string& value);

    /// <summary>
    /// **参数解释：** 资源池ID。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getPoolId() const;
    bool poolIdIsSet() const;
    void unsetpoolId();
    void setPoolId(const std::string& value);

    /// <summary>
    /// **参数解释：** 排序字段，支持update_at、create_at，默认值update_at。 **约束限制：** 不涉及。 **取值范围：** - update_at：按更新时间排序。 - create_at：按创建时间排序。 **默认取值：** update_at。
    /// </summary>

    std::string getSortKey() const;
    bool sortKeyIsSet() const;
    void unsetsortKey();
    void setSortKey(const std::string& value);

    /// <summary>
    /// **参数解释：** 指定返回的最大条目数。 **约束限制：** 不涉及。 **取值范围：** [1,500] **默认取值：** 10。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// **参数解释：** 分页列表查询的偏移量。 **约束限制：** offset必须是limit的整数倍。 **取值范围：** 不涉及。 **默认取值：** 0。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// **参数解释：** 申请状态。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释：** 内网申请类型。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    std::string scene_;
    bool sceneIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string applicantDomainId_;
    bool applicantDomainIdIsSet_;
    std::string serviceId_;
    bool serviceIdIsSet_;
    std::string applicantUserName_;
    bool applicantUserNameIsSet_;
    std::string serviceName_;
    bool serviceNameIsSet_;
    std::string vpcName_;
    bool vpcNameIsSet_;
    std::string vpcId_;
    bool vpcIdIsSet_;
    std::string poolId_;
    bool poolIdIsSet_;
    std::string sortKey_;
    bool sortKeyIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string type_;
    bool typeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListInferIntranetConnectionReviewsRequest& dereference_from_shared_ptr(std::shared_ptr<ListInferIntranetConnectionReviewsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_ListInferIntranetConnectionReviewsRequest_H_
