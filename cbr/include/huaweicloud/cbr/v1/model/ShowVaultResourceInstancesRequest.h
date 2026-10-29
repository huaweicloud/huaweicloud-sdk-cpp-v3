
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowVaultResourceInstancesRequest_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowVaultResourceInstancesRequest_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cbr/v1/model/VaultResourceInstancesReq.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  ShowVaultResourceInstancesRequest
    : public ModelBase
{
public:
    ShowVaultResourceInstancesRequest();
    virtual ~ShowVaultResourceInstancesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowVaultResourceInstancesRequest members

    /// <summary>
    /// **参数解释：** 云备份企业项目ID，获取企业项目ID请参考[查询企业项目列表](https://support.huaweicloud.com/api-em/zh-cn_topic_0121230880.html)(tag:hws)[查询企业项目列表](https://support.huaweicloud.com/intl/zh-cn/api-em/zh-cn_topic_0121230880.html)(tag:hws_hk)[《企业管理API参考》“查询企业项目列表”章节](tag:ctc,dt,tm,sbc,hws_eu,fcs_vm,hcso_dt,srg) **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    VaultResourceInstancesReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const VaultResourceInstancesReq& value);


protected:
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    VaultResourceInstancesReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowVaultResourceInstancesRequest& dereference_from_shared_ptr(std::shared_ptr<ShowVaultResourceInstancesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowVaultResourceInstancesRequest_H_
