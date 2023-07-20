
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchShowParamsResponse_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchShowParamsResponse_H_

#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/QueryDbParamsResp.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  BatchShowParamsResponse
    : public ModelBase, public HttpResponse
{
public:
    BatchShowParamsResponse();
    virtual ~BatchShowParamsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchShowParamsResponse members

    /// <summary>
    /// 查询数据库参数响应体
    /// </summary>

    std::vector<QueryDbParamsResp>& getParamsList();
    bool paramsListIsSet() const;
    void unsetparamsList();
    void setParamsList(const std::vector<QueryDbParamsResp>& value);

    /// <summary>
    /// 总数
    /// </summary>

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);


protected:
    std::vector<QueryDbParamsResp> paramsList_;
    bool paramsListIsSet_;
    int32_t count_;
    bool countIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_BatchShowParamsResponse_H_