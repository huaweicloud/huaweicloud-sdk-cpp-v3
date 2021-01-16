
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_UpdatePortRequestBody_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_UpdatePortRequestBody_H_

#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/UpdatePortOption.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_VPC_V2_EXPORT  UpdatePortRequestBody
    : public ModelBase
{
public:
    UpdatePortRequestBody();
    virtual ~UpdatePortRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdatePortRequestBody members

    /// <summary>
    /// 
    /// </summary>

    UpdatePortOption getPort() const;
    bool portIsSet() const;
    void unsetport();
    void setPort(const UpdatePortOption& value);


protected:
    UpdatePortOption port_;
    bool portIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_UpdatePortRequestBody_H_
