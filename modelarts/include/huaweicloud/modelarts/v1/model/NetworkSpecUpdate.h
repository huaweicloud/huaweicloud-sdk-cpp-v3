
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NetworkSpecUpdate_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NetworkSpecUpdate_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/NetworkConnection.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 网络资源描述更新信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  NetworkSpecUpdate
    : public ModelBase
{
public:
    NetworkSpecUpdate();
    virtual ~NetworkSpecUpdate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NetworkSpecUpdate members

    /// <summary>
    /// 
    /// </summary>

    NetworkConnection getConnection() const;
    bool connectionIsSet() const;
    void unsetconnection();
    void setConnection(const NetworkConnection& value);


protected:
    NetworkConnection connection_;
    bool connectionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NetworkSpecUpdate_H_
