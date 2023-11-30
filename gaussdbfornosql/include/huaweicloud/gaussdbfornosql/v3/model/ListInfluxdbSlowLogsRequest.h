
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListInfluxdbSlowLogsRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListInfluxdbSlowLogsRequest_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/gaussdbfornosql/v3/model/ListInfluxdbSlowLogsRequestBody.h>

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
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  ListInfluxdbSlowLogsRequest
    : public ModelBase
{
public:
    ListInfluxdbSlowLogsRequest();
    virtual ~ListInfluxdbSlowLogsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListInfluxdbSlowLogsRequest members

    /// <summary>
    /// 实例ID，可以调用“查询实例列表和详情”接口获取。如果未申请实例，可以调用“创建实例”接口创建。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ListInfluxdbSlowLogsRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ListInfluxdbSlowLogsRequestBody& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    ListInfluxdbSlowLogsRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListInfluxdbSlowLogsRequest& dereference_from_shared_ptr(std::shared_ptr<ListInfluxdbSlowLogsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListInfluxdbSlowLogsRequest_H_
