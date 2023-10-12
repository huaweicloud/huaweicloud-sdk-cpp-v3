
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_BatchDeletePublicIpRequestBody_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_BatchDeletePublicIpRequestBody_H_


#include <huaweicloud/eip/v2/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 请求参数
/// </summary>
class HUAWEICLOUD_EIP_V2_EXPORT  BatchDeletePublicIpRequestBody
    : public ModelBase
{
public:
    BatchDeletePublicIpRequestBody();
    virtual ~BatchDeletePublicIpRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeletePublicIpRequestBody members

    /// <summary>
    /// 弹性公网ip的id列表。
    /// </summary>

    std::vector<std::string>& getPublicipIds();
    bool publicipIdsIsSet() const;
    void unsetpublicipIds();
    void setPublicipIds(const std::vector<std::string>& value);


protected:
    std::vector<std::string> publicipIds_;
    bool publicipIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_BatchDeletePublicIpRequestBody_H_
