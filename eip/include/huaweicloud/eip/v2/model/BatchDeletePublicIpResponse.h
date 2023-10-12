
#ifndef HUAWEICLOUD_SDK_EIP_V2_MODEL_BatchDeletePublicIpResponse_H_
#define HUAWEICLOUD_SDK_EIP_V2_MODEL_BatchDeletePublicIpResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_EIP_V2_EXPORT  BatchDeletePublicIpResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchDeletePublicIpResponse();
    virtual ~BatchDeletePublicIpResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeletePublicIpResponse members

    /// <summary>
    /// job_id列表，此job信息不保存在数据库中，不能同过组件查询到。
    /// </summary>

    std::vector<std::string>& getJobIds();
    bool jobIdsIsSet() const;
    void unsetjobIds();
    void setJobIds(const std::vector<std::string>& value);


protected:
    std::vector<std::string> jobIds_;
    bool jobIdsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V2_MODEL_BatchDeletePublicIpResponse_H_
