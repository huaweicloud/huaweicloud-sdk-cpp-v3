
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_RestartNodeRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_RestartNodeRequest_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 重启节点请求体
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  RestartNodeRequest
    : public ModelBase
{
public:
    RestartNodeRequest();
    virtual ~RestartNodeRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RestartNodeRequest members

    /// <summary>
    /// 实例节点是否延迟重启。默认false，立即重启。  - true: 延迟重启，实例节点将在运维时间窗内自动重启。 - false: 立即重启。
    /// </summary>

    bool isDelay() const;
    bool delayIsSet() const;
    void unsetdelay();
    void setDelay(bool value);


protected:
    bool delay_;
    bool delayIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_RestartNodeRequest_H_
