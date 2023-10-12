
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_TaurusSwitchoverRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_TaurusSwitchoverRequest_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  TaurusSwitchoverRequest
    : public ModelBase
{
public:
    TaurusSwitchoverRequest();
    virtual ~TaurusSwitchoverRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TaurusSwitchoverRequest members

    /// <summary>
    /// 只读节点ID，倒换后为主节点。
    /// </summary>

    std::string getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetnodeId();
    void setNodeId(const std::string& value);


protected:
    std::string nodeId_;
    bool nodeIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_TaurusSwitchoverRequest_H_
