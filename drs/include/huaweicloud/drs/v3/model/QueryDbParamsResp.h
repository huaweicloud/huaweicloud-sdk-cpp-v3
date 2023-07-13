
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_QueryDbParamsResp_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_QueryDbParamsResp_H_

#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/Params.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 数据库参数信息响应体
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  QueryDbParamsResp
    : public ModelBase
{
public:
    QueryDbParamsResp();
    virtual ~QueryDbParamsResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// QueryDbParamsResp members

    /// <summary>
    /// 
    /// </summary>

    std::vector<Params>& getParams();
    bool paramsIsSet() const;
    void unsetparams();
    void setParams(const std::vector<Params>& value);


protected:
    std::vector<Params> params_;
    bool paramsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_QueryDbParamsResp_H_
