
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_UpdatePortResponse_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_UpdatePortResponse_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/Port.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_VPC_V2_EXPORT  UpdatePortResponse
    : public ModelBase, public HttpResponse
{
public:
    UpdatePortResponse();
    virtual ~UpdatePortResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdatePortResponse members

    /// <summary>
    /// 
    /// </summary>

    Port getPort() const;
    bool portIsSet() const;
    void unsetport();
    void setPort(const Port& value);


protected:
    Port port_;
    bool portIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_UpdatePortResponse_H_
