
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_CollectDataFilterRulesResponse_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_CollectDataFilterRulesResponse_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  CollectDataFilterRulesResponse
    : public ModelBase, public HttpResponse
{
public:
    CollectDataFilterRulesResponse();
    virtual ~CollectDataFilterRulesResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CollectDataFilterRulesResponse members

    /// <summary>
    /// 异步查询数据过滤规则的任务ID。需使用此ID轮询获取数据校验规则结果，参考接口/v5/{project_id}/jobs/{job_id}/filter-rules/result。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_CollectDataFilterRulesResponse_H_
