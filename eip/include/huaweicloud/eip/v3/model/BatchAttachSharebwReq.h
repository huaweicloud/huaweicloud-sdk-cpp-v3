
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_BatchAttachSharebwReq_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_BatchAttachSharebwReq_H_


#include <huaweicloud/eip/v3/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/eip/v3/model/BatchAttachSharebwDict.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 共享带宽批量加入弹性公网IP请求参数
/// </summary>
class HUAWEICLOUD_EIP_V3_EXPORT  BatchAttachSharebwReq
    : public ModelBase
{
public:
    BatchAttachSharebwReq();
    virtual ~BatchAttachSharebwReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchAttachSharebwReq members

    /// <summary>
    /// - 功能说明：共享带宽数据 - 约束：共享带宽批量加入多个弹性公网IP时，请求参数publicips中的bandwidth_id必须为同一个共享带宽的id
    /// </summary>

    std::vector<BatchAttachSharebwDict>& getPublicips();
    bool publicipsIsSet() const;
    void unsetpublicips();
    void setPublicips(const std::vector<BatchAttachSharebwDict>& value);


protected:
    std::vector<BatchAttachSharebwDict> publicips_;
    bool publicipsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_BatchAttachSharebwReq_H_
