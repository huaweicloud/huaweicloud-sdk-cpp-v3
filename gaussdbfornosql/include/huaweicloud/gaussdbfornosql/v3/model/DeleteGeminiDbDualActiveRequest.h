
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_DeleteGeminiDbDualActiveRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_DeleteGeminiDbDualActiveRequest_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  DeleteGeminiDbDualActiveRequest
    : public ModelBase
{
public:
    DeleteGeminiDbDualActiveRequest();
    virtual ~DeleteGeminiDbDualActiveRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteGeminiDbDualActiveRequest members

    /// <summary>
    /// 参数解释 实例Id，可以调用[5.3.3查询实例列表和详情](x-wc://file&#x3D;zh-cn_topic_0000001397299481.xml)接口获取。如果未申请实例，可以调用[5.3.1创建实例](x-wc://file&#x3D;zh-cn_topic_0000001397139461.xml)接口创建。 约束限制 不涉及。 取值范围 不涉及。 默认取值 不涉及。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteGeminiDbDualActiveRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteGeminiDbDualActiveRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_DeleteGeminiDbDualActiveRequest_H_
