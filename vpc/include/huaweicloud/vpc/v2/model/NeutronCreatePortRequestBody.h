
#ifndef HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronCreatePortRequestBody_H_
#define HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronCreatePortRequestBody_H_


#include <huaweicloud/vpc/v2/VpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vpc/v2/model/NeutronCreatePortOption.h>

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
class HUAWEICLOUD_VPC_V2_EXPORT  NeutronCreatePortRequestBody
    : public ModelBase
{
public:
    NeutronCreatePortRequestBody();
    virtual ~NeutronCreatePortRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NeutronCreatePortRequestBody members

    /// <summary>
    /// 
    /// </summary>

    NeutronCreatePortOption getPort() const;
    bool portIsSet() const;
    void unsetport();
    void setPort(const NeutronCreatePortOption& value);


protected:
    NeutronCreatePortOption port_;
    bool portIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VPC_V2_MODEL_NeutronCreatePortRequestBody_H_
