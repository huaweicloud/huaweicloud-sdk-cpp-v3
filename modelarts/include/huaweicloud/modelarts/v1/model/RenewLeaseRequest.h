
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_RenewLeaseRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_RenewLeaseRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/LeaseReq.h>
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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  RenewLeaseRequest
    : public ModelBase
{
public:
    RenewLeaseRequest();
    virtual ~RenewLeaseRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RenewLeaseRequest members

    /// <summary>
    /// **参数解释**：续订时长，推荐该参数在leaseReq中配置，若请求参数中包含duration，则忽略leaseReq的值，且实例自动停止类别为定时停止。(单位:毫秒)。 **约束限制**：不涉及。 **取值范围**：3600000-259200000。 **默认取值**：3600000。
    /// </summary>

    int64_t getDuration() const;
    bool durationIsSet() const;
    void unsetduration();
    void setDuration(int64_t value);

    /// <summary>
    /// **参数解释**：Notebook实例ID。ID格式为通用唯一识别码（Universally Unique Identifier，简称UUID），可通过调用[[查询Notebook实例列表接口](https://support.huaweicloud.com/api-modelarts/ListNotebooks.html#section0)](tag:hc)[[查询Notebook实例列表接口](https://support.huaweicloud.com/intl/zh-cn/api-modelarts/ListNotebooks.html#section0)](tag:hk)获取。 **约束限制**：不涉及。 **取值范围**：不涉及。 **默认取值**：不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    LeaseReq getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const LeaseReq& value);


protected:
    int64_t duration_;
    bool durationIsSet_;
    std::string id_;
    bool idIsSet_;
    LeaseReq body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    RenewLeaseRequest& dereference_from_shared_ptr(std::shared_ptr<RenewLeaseRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_RenewLeaseRequest_H_
