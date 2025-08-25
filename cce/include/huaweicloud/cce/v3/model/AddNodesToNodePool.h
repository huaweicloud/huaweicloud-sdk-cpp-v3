
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_AddNodesToNodePool_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_AddNodesToNodePool_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 自定义节点池纳管节点参数。
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  AddNodesToNodePool
    : public ModelBase
{
public:
    AddNodesToNodePool();
    virtual ~AddNodesToNodePool();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AddNodesToNodePool members

    /// <summary>
    /// 服务器ID，获取方式请参见ECS/BMS相关资料。
    /// </summary>

    std::string getServerID() const;
    bool serverIDIsSet() const;
    void unsetserverID();
    void setServerID(const std::string& value);


protected:
    std::string serverID_;
    bool serverIDIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_AddNodesToNodePool_H_
