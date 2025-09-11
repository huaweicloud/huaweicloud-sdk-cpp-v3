
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_CountInjectionStatisticsRequest_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_CountInjectionStatisticsRequest_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dbss/v1/model/GeneralRequest.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  CountInjectionStatisticsRequest
    : public ModelBase
{
public:
    CountInjectionStatisticsRequest();
    virtual ~CountInjectionStatisticsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CountInjectionStatisticsRequest members

    /// <summary>
    /// **参数解释**： 实例ID。可通过查询实例列表接口ID字段获取 **约束限制**： 不涉及 **取值范围**： 以查询实例列表接口值为准，字符长度32-64。 **默认取值**： 不涉及 
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    GeneralRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const GeneralRequest& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    GeneralRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CountInjectionStatisticsRequest& dereference_from_shared_ptr(std::shared_ptr<CountInjectionStatisticsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_CountInjectionStatisticsRequest_H_
