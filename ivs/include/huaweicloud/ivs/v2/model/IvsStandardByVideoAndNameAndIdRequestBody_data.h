
#ifndef HUAWEICLOUD_SDK_IVS_V2_MODEL_IvsStandardByVideoAndNameAndIdRequestBody_data_H_
#define HUAWEICLOUD_SDK_IVS_V2_MODEL_IvsStandardByVideoAndNameAndIdRequestBody_data_H_


#include <huaweicloud/ivs/v2/IvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ivs/v2/model/StandardReqDataByVideoAndNameAndId.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ivs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 请求消息的数据部分。
/// </summary>
class HUAWEICLOUD_IVS_V2_EXPORT  IvsStandardByVideoAndNameAndIdRequestBody_data
    : public ModelBase
{
public:
    IvsStandardByVideoAndNameAndIdRequestBody_data();
    virtual ~IvsStandardByVideoAndNameAndIdRequestBody_data();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IvsStandardByVideoAndNameAndIdRequestBody_data members

    /// <summary>
    /// 请求列表，用于支持批量调用。目前暂时只支持单个数据查询。
    /// </summary>

    std::vector<StandardReqDataByVideoAndNameAndId>& getReqData();
    bool reqDataIsSet() const;
    void unsetreqData();
    void setReqData(const std::vector<StandardReqDataByVideoAndNameAndId>& value);


protected:
    std::vector<StandardReqDataByVideoAndNameAndId> reqData_;
    bool reqDataIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IVS_V2_MODEL_IvsStandardByVideoAndNameAndIdRequestBody_data_H_
