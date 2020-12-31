
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_CreatePortRequestBody_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_CreatePortRequestBody_H_

#include <huaweicloud/vpc/VpcExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include "huaweicloud/vpc/model/CreatePortOption.h"

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
class HUAWEICLOUD_VPC_EXPORT  CreatePortRequestBody
    : public ModelBase
{
public:
    CreatePortRequestBody();
    virtual ~CreatePortRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreatePortRequestBody members

    /// <summary>
    /// 
    /// </summary>

    CreatePortOption getPort() const;
    bool portIsSet() const;
    void unsetport();
    void setPort(const CreatePortOption& value);


protected:
    CreatePortOption port_;
    bool portIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_CreatePortRequestBody_H_
